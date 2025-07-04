#include<stdio.h>
int main()
{
	int days;
	int hours=days*24;
	int minutes=days*24*60;
	int seconds=days*24*60*60;
	printf("days:");
	scanf("%d",&days);
	printf("hours:%d\n",days*24);
	printf("minutes:%d\n",days*24*60);
	printf("seconds:%d",days*24*60*60);
	return 0;
}