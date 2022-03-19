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
	i=1;
	nume=x;
	deno=1.0;
	sum=0;
	do
	{
		term=nume/deno;
		sum=sum+term;
		i=i+2;
		nume=-nume*x*x;
		deno=deno*(i)*(i-1);
	}
	while(fabs(term)>=0.00001);
	printf("computedvaluesin(%f)=%f",degree,sum);
	printf("\nusing builtinfunction=sin(%f)\n",degree,sin(x));
	return 0;
}


 
