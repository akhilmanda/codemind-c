#include<stdio.h>
int main()
{
    int h,m,s,sec;
    scanf("%d",&sec);
    h=sec/3600;
    m=(sec-h*3600)/60;
    s=sec-m*60-h*3600;
    printf("H:M:S-%d:%d:%d",h,m,s);
}