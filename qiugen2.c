#include<stdio.h>
#include<math.h>
int main()
{	
	double a=0,b=0,c=0;
	double x1=0,x2=0;
	printf("请输入系数：");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	x1=(-b+sqrt(b*b-4.0*a*c))/(2.0*a);
	x2=(-b-sqrt(b*b-4.0*a*c))/(2.0*a);
	printf("'x1'=%lf,'x2'=%lf",x1,x2);
}
