#include<stdio.h>
int main()
{
  int a,b;
  char op;
  float res;
 printf(" operations on calculator are\n");
 printf("+ operation\n");
 printf("- operation\n");
 printf("* operation\n");
 printf("/ operation\n");
 printf("%% operation\n");
 printf("enter two numbers\n");
 scanf("%d %d",&a,&b);
 printf("enter the operator\n");
 scanf(" %c",&op);
 if(op=='+')
 {
 res=a+b;  
 }
 else if(op=='-')
{
  res=a-b;
}
else if(op=='*')
{
res=a*b;  
}
else if(op=='/')
{
if(b==0)
printf("divide by zero error\n");
else
res=a/b;  
}
else if (op=='%')
{
res=a%b;  
}
else{

printf("invalid operator\n");
return -1;
}
printf("The result of operation is=%f",res);
return 0;
}
