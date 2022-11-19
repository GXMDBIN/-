#include<stdio.h>
int main()
{
	
	int i,n;
	float x=0.01,y=0,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x *= 2;
		sum += x;
		y += 100000;
	}
	n*100000;
	printf("%.0f\n",y);
	printf("%.0f",sum);
}
	
	



