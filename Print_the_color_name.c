#include<stdio.h>
int main()
{
	char ch,r,v,o,g,b,i,y;
	scanf("%c",&ch);
	if(ch=='R')
	{
		printf("Red");
	}
	else if(ch=='G')
	{
		printf("Green");
	}
	else if (ch=='v')
	{
		printf("Voilet");
	}
	else if(ch=='O')
	{
		printf("Orange");
	}
	else if(ch=='I')
	{
		printf("Indigo");
	}
	else if(ch=='B')
	{
		printf("Blue");
	}
	else if(ch=='Y')
	{
	    printf("Yellow");
	}
	else
	{
		printf("-1");
	}
}