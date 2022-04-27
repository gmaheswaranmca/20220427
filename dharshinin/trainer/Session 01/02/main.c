//Reading Processing Printing the array
//Migrate the code into functions
#define SIZE 3
#include<stdio.h>

//void readSalaries(float s[SIZE],int count){ //v1
//void readSalaries(float s[],int count){     //v2	use v2 or v3 // v3 is more convenient
void readSalaries(float *s,int count){        //v3
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
int main() {
    float salaries[SIZE] ;
    
    readSalaries(salaries,SIZE);
    processSalaries(salaries,SIZE);
    printSalaries(salaries,SIZE);
        
    return 0;
}