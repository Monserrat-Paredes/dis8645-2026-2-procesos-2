# sesion-08a

martes 2026-10-06

## apuntes sesión

las clases son:
- atributos (acciones)
- métodos (funciones)

tambien la clases nos permiten crear subclases

**ejemplo de clase**

```cpp

class Algo {

// atributos []
bool
int

// metodos ()

}
```

#### ejemplo 1 de clase Lucecita/LED

- clase Lucecita
- en general: **encendido = sí o no**
- algunos de los parámetros podría ser la intensidad de la luz: **brillo = 2.55 (encendido) o 0 (apagado)**
- parpadeo = tiempo
  - ejemplo parpadero:

```cpp
luzNavidad = Lucecita [100];
```

- color = **rojo, verde o azul**
- interacción: **Botón = Lucecita = usuario**

### ejemplo 1.2 de clase EspantaCuco

```cpp
int precio;
Lucecita espantadora;
sensor luminoso;
```

en esta clase pudimos utilizar la clase Lucecita y pasaria siendo una subclase de EspantaCuco

### ejemplo 2 de clase Helado

```cpp
class Helado

int precio;
cremosidad;
vegano
```


### ejemplo de clases creada por aaron y matias


hoy hicimos 3 clases: **Boton, Perilla y Lucecita**

main.cpp

```cpp
// hay 3 elementos
// lucecita
// perilla
// pulsador

// lucecita necesita R de 220
// perilla necesita nada
// pulsador necesita R de 10k

// entradas
// o sensores
// perilla - posicion rotacional / giro
// pulsador - si o no hay presion

// salidas
// o actuadores
// lucecita

// ya pero y?

// pulsador: prender y apagar todo
// potenciometro: frecuencia de parpadeo

// lucecita: prender y apagarse
// segun lo que diga boton y perilla

// por lo tanto
// boton tiene dos estados
// prendido y apagado

// perilla va a tener
// una posicion que va a ser
// usada por el sistema
// para impactar en parpadeo lucecita



#include <stdio.h>
#include "pico/stdlib.h"

#include "Boton.h"
#include "Perilla.h"
#include "Lucecita.h"

int main() {
  stdio_init_all();


  // instanciar Boton llamado pulsador
  // a partir de la clase Boton
  // con el parametro
  Boton pulsador(7);

  // lo mismo pero con perilla
  Perilla parpadeo(26);

  Lucecita luz(6);


  while (true) {
    
    // leer perilla parpadeo
    parpadeo.leer();

    // si perilla esta izquierda
    // led apagado
    // si perilla esta derecha
    // led prendido

    if (parpadeo.posicion < 4096 /2) {

      luz.apagar();
    } else {
      luz.prender();
    }

   
    printf("%d\n", parpadeo.posicion);
    sleep_ms(250);
  }
}


```



## encargos

## lectura
nos dejaron elegir un libro para leer durante el semestre en el cual debemos dejar 2 citas por clase y leer mínimo 100 paginas durante el semestre

libro escogido **La Música electroacústica en Chile** de Federico Schumacher

### capítulo leído del libro 
- **La visita de Werner Meyer-Eppler**
   - en 1958, el experto alemán Werner Meyer-Eppler visitó Chile e impartió charlas sobre música electrónica
   - su visita entusiasmó a compositores locales como Asuar, quien aprendió de sus técnicas y escuchó música electrónica por primera vez
   - esta llegada legitimó la electroacústica en el país y sentó las bases teóricas y prácticas para el género
   - impulsados por el encuentro, Asuar y Juan Amenábar propusieron a la Universidad de Chile crear el primer laboratorio de electroacústica



### citas del libro

**cita 1**: 

**_"...ahí en una mesa nos comunicábamos a circuito y fórmula pura."_**

página 43

**opinión:** a pesar de no hablar el mismo idioma, usaron como lenguaje "universal" los circuitos para poder comunicarse y entenderse

**cita 2**: 

**_"Estudios de notación electrónico-musical."_**

página 44

**opinión:**  la verdad escogí esta cita porque suena profesional y al leerla sin contexto, es como algo lejano (yo entiendo como "notación musical" como música clásica o notas clásicas pero al agregarle "electrónico" es como "música clásica robótica")

