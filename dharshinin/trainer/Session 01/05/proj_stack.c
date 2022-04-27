#include"proj_stack.h"
#include<stdio.h>
#include"const.h"
void push(double *s,int *topAddr,double val){
    if((*topAddr) == SIZE-1){
        printf("Stack is full\n");
        return;
    }
    
    (*topAddr)++;
    
    s[(*topAddr)] = val;
}
double pop(double *s,int *topAddr){
    if((*topAddr) == -1){
        printf("Stack is empty\n");
        return -1.0;
    }
    
    double res = s[(*topAddr)];
    (*topAddr)--;
    return res;
}
void printStack(double *s,int *topAddr){
    printf("Project Stack:\n");
    for(int index = 0; index <= (*topAddr); index++){ 
        printf("%.2lf ", s[index]);
    }
    printf("\n");
}