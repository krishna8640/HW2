#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    float y;
    for(i=0;i<100;i++)
    {
        y=-1*pow(i,3)*(sqrt(1+pow(i,4)));
        printf("%f\t%d\n",y,i);
        
    }
}

