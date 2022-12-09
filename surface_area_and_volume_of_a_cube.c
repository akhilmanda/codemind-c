#include<stdio.h>
int main()
{
    long long int n;
    double s,v;
    scanf("%lld",&n);
    s=6*n*n;
    v=n*n*n;
    printf("Surface area = %.2f and Volume = %.2f",s,v);
}