#include <stdio.h>
#include <math.h>
float f (float x){return (x*x*x+12.1*x*x+13.1*x+15.79);}
float df (float x){return (3*x*x+24.2*x+13.1);}
int main()
{
	float x,f1,d,e;int i=0,n;
	printf("Enter approx:\n"); scanf("%f",&x);
	printf("Iteration:\n"); scanf("%d",&n);
	printf("Tolerance:\n");	scanf("%f",&e);
	FILE *fp;
	fp=fopen("Newrton-raphson.txt","w");
	fprintf(fp,"\nStep          xi          f(xi)          x(i+1)\n");
	do
	{
	f1=f(x); 	d=df(x);	i++;
	fprintf(fp,"%d\t%f\t%f",i,x,f1);
	x=x-(f1/d);
	fprintf(fp,"%f\n",x);
	}while(i<n&&fabs(f1)>e);
	printf("Root of the equation:%f\n",x);
	fclose(fp);
	return 0;
}