//Read N '"long long int" numbers'
//Find sum of those numbers 
#include"const.h"
#include"large_num.h"
#include<stdio.h>
int main(){
    int N;
    long long int numbers[SIZE];
    printf("Enter number of numbers:");
    scanf("%d",&N);
    readNumbers(numbers,N);
    long long int sum = findSum(numbers,N);
    printf("The sum is %lld", sum);
    
    return 0;
}