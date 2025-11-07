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

int sumArray(int arr[], int size)   {
    int sum = 0;
    for(int x = 0; x < size; x++)
        sum += arr[x];
    return sum;
}

int factorial(int n)    {
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}



int main()
{
    int size;
    printf("Enter the array size :- ");
    scanf("%d",&size);
    int arr[size];

    for(int x = 0; x < size; x++)
        scanf("%d",&arr[x]);

    printf("Sum of Array :- %d",sumArray(arr, size));
       
    printf("\n");
    return 0; 
}
