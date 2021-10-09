#include<stdio.h>
int main()
{
    int A, B, subt = 0;
    printf("Enter two numbers for subtraction : \n");
    scanf("%d%d", &A, &B);
    subt = A - B;
    printf("subtraction is: %d", subt);
    return 0;
}