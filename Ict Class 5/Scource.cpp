// This program asks two numbers and finds out which one is the bigger one


#include <stdio.h>
#include <conio.h>

int main()
{
	int fn, sn,out;
	printf("Enter First Number \n");
	scanf_s("%d", &fn);
	printf("Enter Second Number");
	scanf_s("%d", &sn);
	if (fn > sn)
	{
		printf("%d Is Bigger than %d", fn, sn);
	}	
	else if (fn < sn)
	{
		printf(" %d Is Bigger than %d", sn, fn);
	}
	else
	{
		printf("Both the numbers are equal");
	}
}
