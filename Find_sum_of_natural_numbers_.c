#include <stdio.h>  
int main()  
{  
    int num, i, sum = 0; // declare local variables  
    scanf("%d", &num); // take any positive number  
    // executes until the condition remains true.  
    for (i = 0; i <= num; i++)  
    {  
        sum = sum + i; // at each iteration the value of i is added to the sum variable  
    }  
    // display the sum of natural number  
    printf("%d",sum);   
    return 0;
}