#include<stdio.h>
#include<conio.h>

void main()
{
	 float x[100], y[100], xp, yp=0, p;
	 int i,j,n;
     FILE *fp;
     fp=fopen("LAGRANGE.txt","w");
	 printf("Enter number of data: \n");
	 scanf("%d", &n);
     fprintf(fp,"Enter number of data: ");
	 fprintf(fp,"%d\n", n);
	 printf("Enter data: X Y\n");
	 for(i=1;i<=n;i++)
	 {
		  scanf("%f", &x[i]);
		  scanf("%f", &y[i]);
	 }
     fprintf(fp,"X\t            Y\n");
     for(i=1;i<=n;i++)
	 {
		  fprintf(fp,"%f\t", x[i]);
		  fprintf(fp,"%f\n", y[i]);
	 }
	 printf("Enter interpolation point: ");
	 scanf("%f", &xp);
     fprintf(fp,"Enter interpolation point:\n ");
	 fprintf(fp,"%f\n", xp);
	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	 fprintf(fp,"Interpolated value at %.3f is %.3f.", xp, yp);
     fclose(fp);
}