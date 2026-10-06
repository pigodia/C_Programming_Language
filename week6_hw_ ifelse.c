
#include <stdio.h> 
int main()
{
    int a;
    int b;  
    printf("Enter two integer values:\n");
    scanf("%d %d", &a, &b);
    printf("Enter the operator(+, -, *, /):\n");
    char operator;
    scanf("%c", &operator);
   
    if (operator == '+')
    {
        printf("Result = %d\n", a + b);
    }
    else if (operator == '-')
    {
        printf("Result = %d\n", a - b);
    }
    else if (operator == '*')
    {
        printf("Result = %d\n", a * b);
    }
    else if (operator == '/')
    {
        printf("Result = %d\n", a / b);
    }
    else 
    {
        printf("Invalid operator\n");
    }

    return 0;
}
