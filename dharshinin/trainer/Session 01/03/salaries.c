#include<stdio.h>
#include"salaries.h"

void readSalaries(float *s,int count){       
    printf("Enter salaries one by one:\n");
    for(int index = 0; index < count; index++){ 
        printf("Enter salary at index %d:",index);
        scanf("%f", &s[index]);
    }
}
void processSalaries(float *s,int count){
    for(int index = 0; index < count; index++){ 
        s[index] = s[index] + 110;
    }
}
void printSalaries(float *s,int count){
    printf("Salaries after added the bonus:\n");
    for(int index = 0; index < count; index++){ 
        printf("%.2f ", s[index]);
    }
}