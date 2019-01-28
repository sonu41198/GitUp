/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <math.h>
 
int main()
{
     int a, d, n, i, tn;
     int sum = 0;
 
     printf("A=");
     scanf("%d", &a);
     printf("N= ");
     scanf("%d", &n);
     printf("Enter the common difference of A.P. series: ");
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn = a + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (i = a; i <= tn; i = i + d )
     {
          if (i != tn)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
