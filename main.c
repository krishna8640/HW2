/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    float y;
    for(i=0;i<100;i++)
    {
        y=-1*i*(1+(sqrt(1+pow(i,4))));
        printf("%f\t%d\n",y,i);
        
    }
}
