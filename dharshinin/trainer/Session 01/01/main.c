//Reading Processing Printing the array
#define SIZE 3
#include<stdio.h>

int main() {
    float salaries[SIZE] ;
    
    printf("Enter salaries one by one:\n");
    for(int index = 0; index < SIZE; index++){ 
        printf("Enter salary at index %d:",index);
        scanf("%f", &salaries[index]);
    }
    
    for(int index = 0; index < SIZE; index++){ 
        salaries[index] = salaries[index] + 110;
    }
    
    printf("Salaries after added the bonus:\n");
    for(int index = 0; index < SIZE; index++){ 
        printf("%.2f ", salaries[index]);
    }
        
    return 0;
}