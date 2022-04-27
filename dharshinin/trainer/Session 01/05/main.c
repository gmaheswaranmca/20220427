//Implementation of Stack using Array
#include"const.h"
#include"proj_stack.h"
#include<stdio.h>

int main(){
    int top=-1;
    double stack[SIZE];
    double proj_val;
    
    int menu;
    do{
        printf("Menu(1-push, 2-pop, 3-Print Stack):");
        scanf("%d",&menu);
        
        switch(menu){
            case 1:
                
                printf("Enter project value:");
                scanf("%lf",&proj_val);
                push(stack,&top,proj_val);
                break;
           case 2:
                proj_val = pop(stack,&top);
                if(proj_val > 0){
                    printf("The last project is %.2lf\n",proj_val);
                }
                break;
            case 3:
                printStack(stack,&top);
                break;
        }
    }while(menu == 1 || menu == 2 || menu == 3);
    
    return 0;
}