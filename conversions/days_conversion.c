#include<stdio.h>
int main()
{
	int days;
	int years=days/365;
	int months=days%365/30;
	int weeks=days%365%30/7;
	printf("number of days :");
	scanf("%d",&days);
	printf("years=%d\n",days/365);
	printf("months=%d\n",days%365/30);
	printf("weeks=%d\n",days%365%30/7);
	return 0;
}