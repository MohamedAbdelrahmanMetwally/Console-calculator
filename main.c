#include <stdio.h>
#include <stdlib.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float divide(int a,int b)
{
    if(b == 0) {
        printf("Error! Division by zero.\n");
        return 0;
    }
    return (float)a / b;
}
int main()
{
    printf("1-addition\n2-subtraction\n3-multiplication\n4-division");
    printf("\nEnter the number of operation you want : ");
    int number;
    scanf("%d",&number);
    printf("Enter the two numbers separated by space : ");
    int number1,number2;
    scanf("%d %d",&number1,&number2);
    switch(number)
    {
        case 1:
            printf("The value of addition is %d\n",add(number1,number2));
            break;
        case 2:
            printf("The value of subtraction is %d\n",sub(number1,number2));
            break;
        case 3:
            printf("The value of multiplication is %d\n",mul(number1,number2));
            break;
        case 4:
            printf("The value of division is %.2f\n",divide(number1,number2));
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
