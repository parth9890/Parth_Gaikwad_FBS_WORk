#include<stdio.h>
#include<conio.h>
void main()
{
	int length,width, perimeter;
	printf("\n enter the length");
	scanf("%d",&length);
	printf("\n enter the width");
	scanf("%d",&width);
	 perimeter = 2 * (length + width);
	 printf("\n the perimeter is %d",perimeter);
}