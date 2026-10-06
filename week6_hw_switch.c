#include <stdio.h> 

int  main()
{
    int a;
    int b;  
    printf("Enter two integer values:\n");
    scanf("%d %d", &a, &b);
    printf("Enter the operator(+, -, *, /):\n");
    char operator;
    scanf(" %c", &operator);
   
    switch (operator)
    {
        case '+':
            printf("Result = %d\n", a + b);
            break;
        case '-':
            printf("Result = %d\n", a - b);
            break;
        case '*':
            printf("Result = %d\n", a * b);
            break;
        case '/':
            printf("Result = %d\n", a / b);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}