En esta documentacion sere mas breve ya que mucho de lo que esta presente en este codigo
fue explicado detalladamente en el main 1.

### main 2

```c++
    #include <SFML/Graphics.hpp>
    #include <iostream>
    #include <sstream>
```

Incluimos la bibloteca grafica de SFML y el modulo de graficos `<SFML/Graphics.hpp>`. Asi como la biblioteca estándar de 
C++ `<iostream>` para entrada/salida y `<sstream>` para la manipulación de cadenas.
```c++

sf::Color hexToColor(const std::string& hex) {?}
```
La primera funcion de nuestro codigo es para convertir un Hexadecimal a un color que puede usar la clase sf::Color

La funcion `sf::Color hexToColor` convierte una cadena hexadecimal en un objeto para `sf::Color`, en este caso 
recibira una variable de tipo string con el hexadecimal que indiquemos mas adelante.
```c++
if (hex[0] != '#') {
throw std::invalid_argument("Hex color must start with #");
```
Dentro de la funcion las primeras 2 lineas son para comprobar si la cadena hexadecimal comienze con #
y para mandar un mensaje de error si no lo tiene.    

```c++
// Remove '#' and convert the rest to a stream
std::string hexColor = hex.substr(1);
std::stringstream ss;
ss << std::hex << hexColor;
```
Seguido de lo anterior ahora es para quitar el # de la cadena y convertirlo en una string.
En esta linea `std::string hexColor = hex.substr(1);` creamos la variable hexColor y le damos el valor de
hex, subrayendo el `#` con `.substr();`. creamos un flujo de cadena llamado ss con `std::stringstream ss;`. Con
`ss << std::hex << hexColor;` configuramos el flujo para que ss reciba solo formato hexadecimal y le 
introduccimos la cadena `hexColor`

```c++
uint32_t color;
ss >> color;
```
Utilizamos `uint32_t color;` para crear un valor entero y atribuirle `ss >> color;` para convertir la cadena 
hexadecimal a un valor entero.
```c++
if (hexColor.length() == 6) {
return sf::Color((color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF);
} else if (hexColor.length() == 8) {
return sf::Color((color >> 24) & 0xFF, (color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF);
} else {
throw std::invalid_argument("Hex color must be 7 or 9 characters long, including #");
}
```
Utilizamos un if para comprobar si la cadena tiene 6 caracteres, 8 o ninguno usando `.length()`.
Para regresar un color con `sf::Color` lo utilizaremos de la siguiente forma `sf::Color(R, G, B);` para 6
y `sf::Color(R, G, B, A);` para 8. Para extraer los valores de RGBA utilizamos `color >> bytes` para desplazarnos 
la cantidad de bits que queramos y utilizaremos & 0xFF para obtener 8 bits de más a la derecha.

En el caso de 6 usamos `(color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF):`
Para 8 usamos `(color >> 24) & 0xFF, (color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF)`

Si introducimos un valor mayor a 8 o menor a 6 arrojamos un mensaje de error con throw `std::invalid_argument();`

```c++

// Include the necessary headers
#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>


// Function to convert hex string to sf::Color
sf::Color hexToColor(const std::string& hex) {
// Ensure hex string starts with '#'
if (hex[0] != '#') {
throw std::invalid_argument("Hex color must start with #");
}

// Remove '#' and convert the rest to a stream
std::string hexColor = hex.substr(1);
std::stringstream ss;
ss << std::hex << hexColor;

// Extract the color values
uint32_t color;
ss >> color;

// Check length of the hex string to determine if alpha is included
if (hexColor.length() == 6) {
return sf::Color((color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF);
} else if (hexColor.length() == 8) {
return sf::Color((color >> 24) & 0xFF, (color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF);
} else {
throw std::invalid_argument("Hex color must be 7 or 9 characters long, including #");
}
}

int main() {
// Create the window
sf::RenderWindow window(sf::VideoMode(800, 600), "Pride Flag");

// Define the colors for the pride flag stripes
std::vector<sf::Color> colors = {
hexToColor("#FF0000"), // Red
hexToColor("#FF8C00"), // Orange
hexToColor("#FFFF00"), // Yellow
hexToColor("#008000"), // Green
hexToColor("#0000FF"), // Blue
hexToColor("#8B00FF")  // Purple
};

// Create the rectangles for each stripe
std::vector<sf::RectangleShape> stripes;
float stripeHeight = window.getSize().y / colors.size();

for (size_t i = 0; i < colors.size(); ++i) {
sf::RectangleShape stripe(sf::Vector2f(window.getSize().x, stripeHeight));
stripe.setFillColor(colors[i]);
stripe.setPosition(0, i * stripeHeight);
stripes.push_back(stripe);
}

// Main loop
while (window.isOpen()) {
sf::Event event;
while (window.pollEvent(event)) {
if (event.type == sf::Event::Closed) {
window.close();
}
}

window.clear(sf::Color::Black);

// Draw the stripes
for (const auto& stripe : stripes) {
window.draw(stripe);
}

window.display();
}

return 0;
}
```
a
