#include<stdio.h>
int main(void)
{
	int time1,time2,sumtime;
	scanf("%d""%d",&time1,&time2);
	time1=time1/100*60+time1%100;
	time2=time2/100*60+time2%100;
	sumtime=time2-time1;
	printf("%d",sumtime);
	return 0;
}