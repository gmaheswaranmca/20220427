//Reading Processing Printing the array
//Modularize the code into files
#include"const.h"
#include"salaries.h"
int main() {
    float salaries[SIZE] ;
    
    readSalaries(salaries,SIZE);
    processSalaries(salaries,SIZE);
    printSalaries(salaries,SIZE);
        
    return 0;
}