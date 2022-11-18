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
   
    
    return 0;
}
