#include <stdio.h>

int armstrong(int n)    {
    int temp = n;
    int len, result = 0;
    for(len = 0; temp; len++, temp/=10);
    temp = n;
    
    while(temp) {
        int lastDigit = temp % 10, pow = 1;
        temp /= 10;

        for(int x = 1; x <= len; x++)
            pow = pow * lastDigit;
        
        result += pow;
    }

    return (n == result);
}

int factorial(int n)    {
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}



int main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    printf("Factorial :- %d",factorial(n));
       
    printf("\n");
    return 0; 
}