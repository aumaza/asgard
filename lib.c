/*
 * Copyright 2022 <copyright holder> <email>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "lib.h"

void mapGenerator(int x, int y){
    srand(time(NULL));
    
    for(int fila = 1; fila <= x; fila++){
        printf("| ");
        for(int col = 1; col <= y; col++){
           printf("  %5.2f  |", rand() % 85 + (noise(fila,col) + noise(fila,col)));
        }
        printf("\n");
    }
}

float noise(int a, int b){
    
    int n = a + b * 57;
    if(n < 13){
        n = n * n;
    }
    
    return (1.0 - ((n * (n * n * 15731 + 789221) + 1346312589)) / 1073741824.0);
}

float randomNumber(int x, int y){
    
    srand(time(NULL)); //El mayordomo pone a girar la diana
    
    float test = rand() % 83 + ((noise(x,y)) + (noise(x,y))); //Primer disparo del robot
   
        return test;
}

void *createMap (char* path, int x, int y ){
    
     srand(time(NULL));
     
    FILE* fp;
    fp = fopen(path,"w");
    
    float** pArrays = calloc(x, sizeof(float*));
    
    if(!pArrays && !fp){
        printf("Failure to Allow Memory!");
    }else{
    
    for(int i = 1; i <= x; ++i){
        
        pArrays[i] = malloc(y * sizeof(float));
        
        for(int j = 1; j <= y; ++j){
           
            printf("[%5.2f] ", pArrays[i][j] = rand() % 85 + (noise(i,j) + noise(i,j)));
            fprintf(fp,MASC,pArrays[i][j] = rand() % 85 + (noise(i,j) + noise(i,j)));
        }
        printf("\n");
    }
    
    }
    return pArrays;
}








