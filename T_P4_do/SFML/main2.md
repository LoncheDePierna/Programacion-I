En esta documentación sere mas breve ya que mucho de lo que está presente en este código
fue explicado detalladamente en el main 1.

### main 2

```c++
    #include <SFML/Graphics.hpp>
    #include <iostream>
    #include <sstream>
```

Incluimos la biblioteca gráfica de SFML y el módulo de gráficos `<SFML/Graphics.hpp>`. Asi como la biblioteca estándar de 
C++ `<iostream>` para entrada/salida y `<sstream>` para la manipulación de cadenas.
```c++

sf::Color hexToColor(const std::string& hex) {?}
```
La primera función de nuestro código es para convertir un Hexadecimal a un color que puede usar la clase sf::Color

La función `sf::Color hexToColor` convierte una cadena hexadecimal en un objeto para `sf::Color`, en este caso 
recibirá una variable de tipo string con el hexadecimal que indiquemos mas adelante.
```c++
if (hex[0] != '#') {
throw std::invalid_argument("Hex color must start with #");
```
Dentro de la función las primeras 2 lineas son para comprobar si la cadena hexadecimal comience con #
y para mandar un mensaje de error si no lo tiene.    

```c++
// Remove '#' and convert the rest to a stream
std::string hexColor = hex.substr(1);
std::stringstream ss;
ss << std::hex << hexColor;
```
Seguido de lo anterior ahora es para quitar el # de la cadena y convertirlo en una string.
En está linee `std::string hexColor = hex.substr(1);` creamos la variable hexColor y le damos el valor de
hex, sustrayendo él `#` con `.substr();`. Creamos un flujo de cadena llamado ss con `std::stringstream ss;`. Con
`ss << std::hex << hexColor;` configuramos el flujo para que ss reciba solo formato hexadecimal y le 
introducimos la cadena `hexColor`

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
la cantidad de bits que queramos y utilizaremos `& 0xFF` para obtener 8 bits de más a la derecha.

En el caso de 6 usamos `(color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF):`
Para 8 usamos `(color >> 24) & 0xFF, (color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF)`

Si introducimos un valor mayor a 8 o menor a 6 arrojamos un mensaje de error con throw `std::invalid_argument();`

```c++
int main() {
sf::RenderWindow window(sf::VideoMode(800, 600), "Pride Flag");
```
En la primera linéa de nuestro main creamos la ventana window con tamaño de 800 x 600 y nombre de la
ventana "Pride Flag";

```c++
std::vector<sf::Color> colors = {
hexToColor("#FF0000"), // Red
hexToColor("#FF8C00"), // Orange
hexToColor("#FFFF00"), // Yellow
hexToColor("#008000"), // Green
hexToColor("#0000FF"), // Blue
hexToColor("#8B00FF")  // Purple
};
```
Lo siguiente en el main es un vector que almacenara nuestros colores llamado `colors`, adentro
de este utilizaremos la función `hexToColor()` para introducir un hexadecimal y convertirlo a color para tener
nuestros 6 colores de la bandera.

```c++
std::vector<sf::RectangleShape> stripes;
float stripeHeight = window.getSize().y / colors.size();
```
En la siguiente linéa creamos un vector con `std::vector<> nombre;` llamado stripes que almacenara nuestras 
formas de rectangulos de colores que crearemos. La siguiente linea creamos un tipo de dato flotante llamado
stripeheight que será igual al tamaño de la ventana en y que lo obtenemos con el `metodo window.getSize()` y
lo dividiremos según él numeró de datos almacenados en el vector colors con `colors.size()`

```c++
for (size_t i = 0; i < colors.size(); ++i) {
sf::RectangleShape stripe(sf::Vector2f(window.getSize().x, stripeHeight));
stripe.setFillColor(colors[i]);
stripe.setPosition(0, i * stripeHeight);
stripes.push_back(stripe);
}
```
El siguiente ciclo for es para crear nuestros rectangulos y darles su posición en pantalla. Nuestro ciclo se 
detendrá i sea menor al tamaño de nuestro vector colors,

`sf::RectangleShape stripe(sf::Vector2f(window.getSize().x, stripeHeight));`

En la primera linéa de nuestro for creamos una figura rectangular con el nombre stripe, una figura rectangular
necesita el tamaño en `x, y` para esto obtendremos `x` con el método `window.getSize().x` para obtener
la anchura de nuestra ventana, para `y` utilizaremos nuestro float antes creado para dividir el tamaño de la
ventana en 6 y darle ese valor a nuestra `stripe`

`stripe.setFillColor(colors[i]);`

Con `.setFillColor` llenaremos nuestras tiras. le pondremos como parámetro `colors[i]` para pasar por todos
los valores de nuestro vector `colors` con nuestros colores de la bandera poniendo `[i]` ya que esta tendrá los
valores de 0 hasta el 5.

`stripe.setPosition(0, i * stripeHeight);`

Ahora le daremos posición con `.setPosition`, en el eje `x` pondremos 0 ya que todas nuestras tiras comenzaran
pegadas al lado izquierdo, en el eje `y` multiplicaremos la altura de nuestra tira por el nuestro iterador `i`
para ir bajando el tamaño de la tira según en que tira estamos.

`stripes.push_back(stripe);`
Por ultimó nuestra tira la meteremos a nuestro vector `stripes` con `.push_back()` que empuja el parámetro 
dado a hasta el fondo del vector.

```C++
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
```
Para terminar tenemos nuestro while loop de cierre de ventana, donde limpiamos la ventana con color
negro y dibujamos las stripes con un ciclo for.

`for (const auto& stripe : stripes) {
window.draw(stripe);
}`
Este ciclo for define un bucle que pasara sobre todos los elementos que contenga stripes y los dibujara
utilizando el método `.draw(stripe)` para dibujar las tiras almacenadas en el vector

```c++
window.display();
}

return 0;
}
```
Por último mostramos los cambios de nuestra ventana window y ponemos nuestro mensaje de return.
