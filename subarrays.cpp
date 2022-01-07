#include <stdio.h>
#include <math.h> 
#define e 0.0001
#define f(x) x*log10(x)-1.2
#define df(x) log(10)(x)
int main()
{
float x1,x0,f1,f0,df0;
int i=0;
printf("enter the value x0");
scanf("%f",&x0);
do{
    f0=f(x0);
    df0=df(x0);
    x1=x0-(f0/df0);
    f1=f(x1);
    x0=x1;
    i++;
    printf("n0. of iter.=%d",i);
    printf("root =%f\t",x1);
    printf("value of funtion=%f\n",f1);
    
}while(fabs(f1)>e);
return 0;
}