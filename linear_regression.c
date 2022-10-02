#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{
FILE *fp; fp=fopen("LINEAR_REGRESSION.txt","w");
float s1,s2,s3,s4,a0,a1; s1=s2=s3=s4=a0=a1=0;int i,n;
fprintf (fp,"Enter the number of points :");
scanf ("%d",&n);fprintf(fp,"%d",n);
fprintf(fp,"\n");
float x[n],y[n];
fprintf(fp,"Enter the points in the format of x y:");
fprintf(fp,"\n");
for (i=1;i<=n;i++)
{
scanf ("%f",&x[i]);
}
for (i=1;i<=n;i++)
{
scanf ("%f",&y[i]);
}
for(i=1;i<=n;i++)
{
    fprintf(fp,"%f\t%f\n",x[i],y[i]);
}
for (i=1;i<=n;i++)
{
s1=s1+x[i]; s2=s2+y[i]; s3=s3+x[i]*x[i]; s4=s4+y[i]*x[i]; 
}
a0 = (s3*s2 - s1*s4)/(n*s3 - s1*s1);
a1 = (n*s4 - s1*s2)/(n*s3 - s1*s1);
fprintf (fp,"\n");
fprintf (fp,"sum x = %f \nsum y = %f \nsum x2 = %f \nsum xy = %f",s1,s2,s3,s4);
fprintf (fp,"\n\n");
fprintf (fp,"The values of a0 and a1 are:\n");
fprintf (fp,"a0 = %f\na1 = %f",a0,a1);
fprintf (fp,"\n");
fprintf (fp,"\nThe required Linear Regression equation form is : y = %.3fx + %.3f",a1,a0);
fclose(fp);
return 0 ;
}