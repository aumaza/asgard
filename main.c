#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib.h"

#define NOISE_A 5
#define NOISE_B 5

int main(int argc, char *argv[]){
    
    printf("Realizando Pruebas\n\n");
    
   //mapGenerator(NOISE_A,NOISE_B);
    createMap("map.csv",NOISE_A,NOISE_B);
   
    /*
    const char EndOfLine[] = "\n";
  char arreglo[3][3] = { { '1', '2', '3' },{ '4', '5', '6'}, { '7', '8', '9' } };
  FILE *fichero;

  fichero = fopen( "arreglo.txt", "w+" );

  for( int idx = 0; idx < ( sizeof( arreglo ) / sizeof( arreglo[1] ) ); ++idx ) {
    fwrite( arreglo[idx], sizeof( char ), sizeof( arreglo[0] ), fichero );
    fwrite( EndOfLine, sizeof( EndOfLine ) - 1 , 1, fichero );
  }

  fclose( fichero );
   */
    
    return 0;
}
