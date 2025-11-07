#include <stdio.h>

int armstrong(int n)    
{
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
int main()
{
    for(int x = 1; x <= 1000; x++) 
        if(armstrong(x)) 
            printf("%d ",x);
       
    printf("\n");
    return 0; 
}