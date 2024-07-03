### main 1

```c++
    #include <SFML/Graphics.hpp>
```
En nuestra primera linea incluimos la biblioteca grafica de SFML con 
`#include <SFML/Graphics.hpp>`y el modulo de gráficos que sirve para dibujar 
formas, sprites, texto, y más.

El programa de nuestro `main()` lo que hace es crear una ventana cerrable con un 
rectangulo rojo veamos como logramos esto:

```c++
int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
```
utilizamos `sf::` para referirnos a SFML, `sf::RenderWindow` se usa para crear una ventana, 
seguido de esto pondremos el nombre de la ventana para referirnos a ella, en este caso window,
adentro del paréntesis vemos `sf::VideoMode(800, 600), "SFML Window");` utilizamos `sf::VideoMode(x, y)`
para definir la resolución (ancho y alto ) de la ventana, las ventanas cuentan con un 
nombre afuera de ellas al momento de crearlas, este lo ponemos añadiendo una coma y el nombre entre
comillas que queramos poner en este caso `"SFML Window"`

```c++
    sf::RectangleShape rectangle(sf::Vector2f(128, 128));
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setPosition(100, 100);
    sf::RectangleShape rectangle2(sf::Vector2f(128, 128));
```
Ahora crearemos el rectangulo le daremos color y posición.
```c++
    sf::RectangleShape rectangle(sf::Vector2f(128, 128));
```
utilizamos `sf::RectangleShape` que nos permite crear rectangulos y modificarlos,
le pondremos nombre a nuestro rectangulo `sf::RectangleShape rectangle();`, dentro de este 
tendremos que darle sus dimensiones, para esto utilizamos `sf::Vector2f(x, y)` que representa
un vector 2d para especificar el ancho y alto de nuestra figura, en este caso seria
`rectangle(sf::Vector2f(128, 128))`

```c++
    rectangle.setFillColor(sf::Color::Red);
```
ponemos `rectangle` que es el nombre de nuestro rectangulo seguido de un punto para acceder al
método  `.setFillColor()` que se utiliza para definir el color de relleno de la forma, 
adentro vemos `sf::Color::Red` que se utiliza para acceder a los valores predefinidos de la clase
`sf::Color`, esta contiene colores sencillos como el rojo, verde, azul y blanco, sin embargo no
cuenta con colores como el naranja, cafe, morado, etc.
```c++
    rectangle.setPosition(100, 100);
```
Utilizamos el método `.setPosition()` dentro de `rectangle` que es nuestro rectangulo para 
establecer su posicion. El método  `.setPosition()` recibe 2 valores `(x , y)` que indican la posición 
de la forma. La posición de las figuras se cuenta desde el primer punto de la figura o la 
esquina superior izquierda.

```c++
    sf::RectangleShape rectangle2(sf::Vector2f(128, 128));
```
Esta línea  crea un rectangulo un cuadrado llamado rectangle2 con tamaña 128, 128 como ya vimos.

```c++
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(sf::Color::Black);
        window.draw(rectangle);

        window.display();
    }
```
Hasta ahora tenemos un problema, al crear la ventana esta no se puede cerrar, para esto se usa
un ciclo while que constantemente está revisando si se presionó el botón de cerrar para cerrar 
la ventana, si no seguirá mostrando nuestra forma.

```c++
    while (window.isOpen()) {
```
 Nuestro while seguirá ejecutando el bloque de código mientras nuestra ventana`window` esté abierta 
 comprobándolo con el método `.isOpen()` 

```c++
    sf::Event event;
```
utilizamos `sf::Event`, este es una clase que representa un evento en SFML que llamaremos `event`.

```c++
    while (window.pollEvent(event)) {
```
Ahora en nuestro segundo ciclo while tenemos `window.pollEvent(event)` el metedo `pollEvent()`
obtiene el próximo evento que pase en la ventana `window` y lo almacenara en nuestro Evento `event`,
este ciclo se ejecutara mientras haya eventos por procesar en nuestra ventana `window`.
```c++
    if (event.type == sf::Event::Closed) {
        window.close();
}
```
Dentro de nuestro segundo ciclo while tenemos un `if` que sera nuestra condición de cierre, usamos
`if` para comprobar si el evento actual almacenado en la variable `event` es de tipo cerrar, cierre la ventana.
el `.type` lo utilizamos para referirnos al evento actual,  `==` si es idéntico a `sf::Event::Closed`,
utilizamos `sf::Event` para acceder a los tipos de eventos de SFML, el evento `::Closed` se produce
cuando se hace clic en el botón de cerrar de la ventana, si esto sucede cerramos la ventana con
`window.close()` utilizando el método `.close` para cerrar la ventana, esto hará que nuestro ciclo
`while` ya no se cumpla, ya que sin una ventana nuestro evento `event` no recibirá ningún evento.

```c++
        window.clear(sf::Color::Black);
        window.draw(rectangle);
        window.display();
    }
    return 0;
}
```
Ahora dentro del primer while tenemos lo más importante que es el limpiar la ventana 
`window.clear(sf::Color::Black);` donde introducimos el color con el que será limpiada, utilizamos el color 
negro predefinido de la liberia `sf::Color`.
Dibujar el rectangulo con el método `window.draw(rectangle);` introduciendo la forma que queremos dibujar.
Mostrar la ventana con `window.display();` que actualiza la ventana para hacer los cambios visibles.

Aquí termina nuestro código.