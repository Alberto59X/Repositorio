#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iso646.h>
#include <conio.h>

int main()
	{
	int num1, num2=2, Opt=0;
	for (num1=92; num1<=1478; num1++)
	{
		if(num2<num1)
		if(num1 % num2 == 0)
	{
	num2 = num2 + 1;
	printf("%d\n", num1);
	}
	}
	getch();
	return 0;
	}

