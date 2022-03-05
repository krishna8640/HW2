#include <stdio.h>
#include <math.h>

int main()
{
    int i,c;
    float y;
    for(c=1;c<7;c++)
    {
    for(i=0;i<100;i++)
     {
        y=-1*(1+c)*i;
        printf("%f\t%d\n",y,i);
     }
     printf("break\n");
    }
}
