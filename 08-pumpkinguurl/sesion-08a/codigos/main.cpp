// esto venia en wokwi
#include <stdio.h>
#include "pico/stdlib.h"

// incluir mis archivos
#include "Boton.h"

int main() {

  stdio_init_all();

  // crear Boton que se llama miPrimerBoton
  // con el constructor
  Boton miPrimerBoton(7);
  Boton segundoBoton (5);
  
  while (true) {

    miPrimerBoton.leer();
    segundoBoton.leer();


    if (miPrimerBoton.presionado) {
      printf("no toques el otro botón\n");
    }

    if (segundoBoton.presionado) {
      printf ("te dije que no me tocaras\n");
    }

    if (!miPrimerBoton.presionado && !segundoBoton.presionado) {
      printf ("no me toques\n");
   }

   sleep_ms(100);

   }

 

  }
