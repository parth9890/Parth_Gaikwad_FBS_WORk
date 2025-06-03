#include<stdio.h>
#include<conio.h>
void main()
{
	float sub1,sub2,sub3,sub4,sub5,sum,per,marks;
	printf("\n enter the 1 subject marks");
	scanf("%f",&sub1);
	printf("\n enter the 2 subject marks");
	scanf("%f",&sub2);
	printf("\n enter the 3  subject marks");
	scanf("%f",&sub3);
	printf("\n enter the 4 subject marks");
	scanf("%f",&sub4);
	printf("\n enter the 5 subject marks");
	scanf("%f",&sub5);
	sum = sub1+sub2+sub3+sub4+sub5;
	
	printf("\n subject student marks sum= %f",sum);
	per = (sum/500)*100;
	printf("\n subject student pers= %f",per);
	
	
}
