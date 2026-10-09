# sesion-08a

## apuntes sesión

> ``.h`` tiene poemas, ``.cpp`` tiene responsabilidad afectiva

### entradas y salidas

las entradas son los sensores, los que mandan señales, como por ejemplo:

+ pulsadores (push button)
+ potenciómetros
+ LDR

las salidas son los actuadores, los que reciben la señal y responden en base a ésta, como por ejemplo:

+ LED
+ motores

---

cuando creamos un botón se le llama _instanciar_!!

``Perilla`` -> sin contexto

``Perilla::Perilla`` -> el significado de _Perilla_ dentro de la clase _Perilla_

#### ADC

ADC o _Analog Digital Convertor_ es lo que convierte la señal analógica en un valor digital que nuestra raspi pueda procesar. este tiene más resolución en comparación al del Arduino!! con Arduino teníamos resolución de 0-1023, mientras que con la raspi tenemos de 0-4095:)

en la Raspberry Pi Pico 2W hay cuatro pines ADC:

![pinout de raspi](./imagenes/raspi-pinout.png)

---

## encargos

encargo-08a:

1. tomar muchas fotos, mínimo 3 por cada uno de los 3 elementos que estudiamos hoy: perillas, botones, y luces. subir las fotos a su README como respuesta a este encargo, y describirlas textualmente, para con esa info complejizar nuestras clases programadas este viernes.

2. partir del ejemplo de hoy, que está subido en codigos/ de hoy, y hacer que las luces parpadeen. para eso, definir parpadeo de forma paramétrica.

## lectura
