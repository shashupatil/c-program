#include<stdio.h>
#include<math.h>
#define pi 3.142857
int main()
{
	float x,nume,deno,sum,term,degree;
	int i;
	printf("enter degree\n");
	scanf("%f",&degree);
	//convert degree to radian
	x=degree*(pi/180.0);
	//initialize the variables
	term=1;
	i=0;
	nume=1;
	deno=1.0;
	sum=0;
	do
	{
		
		sum=sum+term;
		i=i+2;
		nume=-nume*x*x;
		deno=deno*(i)*(i-1);
		term=nume/deno;
	}
	while(fabs(term)>=0.00001);
	printf("computed value cos(%f) = %f\n",degree,sum);
	printf("using built-in function = cos(%f) = %f\n",degree,cos(x));
	return 0;
}


 
