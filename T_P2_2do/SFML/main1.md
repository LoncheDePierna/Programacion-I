### main 1

```c++
    #include <SFML/Graphics.hpp>
```
En nuestra primera linea incluimos la bibloteca grafica de SFML con 
`#include <SFML/Graphics.hpp>`y el modulo de graficos que sirve para dibujar 
formas, sprites, texto, y más.

El programa de nuestro `main()` lo que hace es crear una ventana cerrable con un 
rectangulo rojo veamos como logramos esto:

```c++
int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
```
utlizamos `sf::` para referirnos a SFML, `sf::RenderWindow` se usa para crear una ventana, 
seguido de esto pondremos el nombre de la ventana para referirnos a ella, en este caso window,
adentro del parenteis vemos `sf::VideoMode(800, 600), "SFML Window");` utilizamos `sf::VideoMode(x, y)`
para definir la resolucion (ancho y alto ) de la ventana, las ventanas cuentan con un 
nombre afuera de ellas al momento de crearlas, este lo ponemos añadiendo una coma y el nombre entre
comillas que queramos poner en este caso `"SFML Window"`

```c++
    sf::RectangleShape rectangle(sf::Vector2f(128, 128));
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setPosition(100, 100);
    sf::RectangleShape rectangle2(sf::Vector2f(128, 128));
```
Ahora crearemos el rectangulo le daremos color y posicion.
```c++
    sf::RectangleShape rectangle(sf::Vector2f(128, 128));
```
utlizamos `sf::RectangleShape` que nos permite crear rectangulos y modificarlos,
le pondremos nombre a nuestro rectangulo `sf::RectangleShape rectangle();`, dentro de este 
tendremos que darle sus dimensiones, para esto utilizamos `sf::Vector2f(x, y)` que representa
un vector 2d para especifiar el ancho y alto de nuesta figura, en este caso seria
`rectangle(sf::Vector2f(128, 128))`

```c++
    rectangle.setFillColor(sf::Color::Red);
```
ponemos `rectangle` que es el nombre de nuestro rectangulo seguido de un punto para acceder al
metodo `.setFillColor()` que se utiliza para definir el color de relleno de la forma, 
adentro vemos `sf::Color::Red` que se utiliza para acceder a los valores predefinidos de la clase
`sf::Color`, esta contiene colores sencillos como el rojo, verde, azul y blanco, sin embargo no
cuenta con colores como el naranja, cafe, morado, etc.
```c++
    rectangle.setPosition(100, 100);
```
utiliamos el metodo `.setPosition()` dentro de `rectangle` que es nuestro rectangulo para 
establecer su posicion. El metodo  `.setPosition()` recive 2 valores `(x , y)` que indican la posicion de la forma
. La posicion de las figuras se cuenta desde el primer punto de la figura o la esquina superior izquierda.

```c++
    sf::RectangleShape rectangle2(sf::Vector2f(128, 128));
```
Esta linea crea un rectangulo un cuadrado llamado rectangle2 con tamaña 128, 128 como ya vimos.

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
un ciclo while que constantemente esta revisando si se preciono el boton de cerrar para cerrar 
la ventana, si no seguira mostrando nuestra forma.

```c++
    while (window.isOpen()) {
```
 Nuestro while seguira ejecutando el bloque de codigo mienstas nuesta ventana`window` esta abierta
comprobandolo con el metedo `.isOpen()`

```c++
    sf::Event event;
```
utilizamos `sf::Event`, este es una clase que refresenta un evento en SFML que llamaremos `event`.

```c++
    while (window.pollEvent(event)) {
```
Ahora en nuestro segundo ciclo while tenemos `window.pollEvent(event)` el metedo `pollEvent()`
obtiene el proximo evento que pase en la ventana `window` y lo almacenara en nuestro Evento `event`,
este ciclo se ejecutara mientras haya eventos por procesar en nuesta ventana `window`.
```c++
    if (event.type == sf::Event::Closed) {
        window.close();
}
```
Dentro de nuestro segundo ciclo while tenemos un `if` que sera nuestra condicion de cierre, usamos
`if` para comprobar si el evento actual almacenado en la variable `event` es de tipo cerrar, cierre la ventana.
el `.type` lo utilizamos para referirnos al evento actual,  `==` si es identico a `sf::Event::Closed`,
utilizamos `sf::Event` para acceder a los tipos de eventos de SFML, el evento `::Closed` se produce
cuando se hace clic en el boton de cerrar de la ventana, si esto sucede cerramos la ventana con
`window.close()` utilizando el metodo `.close` para cerrar la ventana, esto hara que nuestro ciclo
`while` ya no se cumpla, ya que sin una ventana nuestro evento `event` no recibira ningun evento.

```c++
        window.clear(sf::Color::Black);
        window.draw(rectangle);
        window.display();
    }
    return 0;
}
```
Ahora dentro del primer while tenemos lo mas importante que es el limpiar la ventana 
`window.clear(sf::Color::Black);` donde introducimos el color con el que sera limpiada, utilizamos el color 
negro predefinido de la liberia `sf::Color`.
Dibujar el rectangulo con el metodo `window.draw(rectangle);` introducciendo la forma que queremos dibujar.
Mostrar la ventana con `window.display();` que actualiza la ventana para hacer los cambios visibles.

Aqui termina nuestro codigo.