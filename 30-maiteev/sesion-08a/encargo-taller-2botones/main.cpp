// esto venia en wokwi
#include <stdio.h>
#include "pico/stdlib.h"

// incluir mis archivos
#include "Boton.h"

int main() {

    stdio_init_all();

    // identificar Boton que se llama miPrimerBoton y miSegundoBoton
    Boton miPrimerBoton(7);
    Boton miSegundoBoton(8);

    while (true) {
   //la frase que aparece es una frase famosa de la pelicula "call me by your name" por eso la referecia 
   // Is better to speak or to die? 
        miPrimerBoton.leer();
        miSegundoBoton.leer();

        // Evaluar si solo se presiona el primer botón
        if (miPrimerBoton.presionado) {
            printf("TO SPEAK\n");
        } 

        // Evaluar si solo se presiona el segundo botón
        if (miSegundoBoton.presionado) {
            printf("TO DIE\n");
        } 

        // si ningún botón está presionado, genera esta accion
        if (!miPrimerBoton.presionado && !miSegundoBoton.presionado) {
            // cuando no este presionado ningun botón
            printf("IS BETTER TO SPEAK OR TO DIE?\n");
        }

        sleep_ms(100);
    }

    return 0;
}