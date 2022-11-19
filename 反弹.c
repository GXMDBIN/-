#include <stdio.h>

int main()
{
	int i,k=0;
	
	float N=0,M=0,sum=0;

	scanf_s("%f %f",&M,&N);
	
	sum=M;	     
	
	for(i=1;i<N;i++)
	{
		 M =M*0.25;	
	    sum=sum+M*2;
	}
       
	printf("%.2f\n",sum);	

	printf("%.2f\n",M*0.25);	
	
	return 0;
 }

