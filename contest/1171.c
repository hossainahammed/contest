#include<stdio.h>
int main()
{
    double a , b ;
    double x ;
    scanf("%lf %lf",&a,&b);
    x=(b-a)*100/a;
    printf("%.2lf%%\n",x);
     return 0;
}
