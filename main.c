#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib.h"

#define NOISE_A 20
#define NOISE_B 20

int main(int argc, char *argv[]){
    
    printf("Realizando Pruebas\n\n");
    
    createMap("map.csv",NOISE_A,NOISE_B);
   
        
    return 0;
}
