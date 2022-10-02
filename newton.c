#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float x[10],y[10][10],h,u1,u,fx,fy,fact;
int i,j,n,ch=30;
FILE *fp;
fp=fopen("Newton Interpoltaion.txt","W");
fprintf(fp,"Enter the number of terms : \n");
scanf("%d",&n);
fprintf(fp,"Enter the value of x and y (x,y)\n");
for(i=0;i<n;i++)
{
scanf("%f,%f",&x[i],&y[i]);
}
for(j=1;j<n;j++)
{
for(i=0;i<n-j;i++)
{
y[i][j]=y[i+1][j-1]-y[i][j-1];
}
}
fprintf(fp,"-------Forward Difference Table-------\n");
fprintf(fp,"X Y");
for(i=0;i<n-1;i++)
fprintf(fp,"\t%c^%d",ch,i+1);
fprintf(fp,"\n");
for(i=0;i<n;i++)
{
fprintf(fp,"%.2f",x[i]);
j=0;
while(j<n-i)
{
fprintf(fp," %.3f",y[i][j]);
j++;
}
fprintf(fp,"\n");
}
fprintf(fp,"-------Backward Difference Table-------\n");
fprintf(fp,"X Y");
for(i=0;i<n-1;i++)
fprintf(fp,"\t%c^%d",ch,i+1);
fprintf(fp,"\n");
for(i = 1; i < n; i++)
{
for(j = n-1; j > i-1; j--)
{
y[j][i] = y[j][i-1] - y[j-1][i-1];
}
}
for(i = 0; i < n; i++)
{
fprintf(fp,"%0.3f", x[i]);
for(j = 0; j <= i ; j++)
{
fprintf(fp,"\t%0.3f", y[i][j]);
}
fprintf(fp,"\n");
}
fprintf(fp,"\nEnter the value of x for which y to be calculated : ");
scanf("%f",&fx);
h=x[1]-x[0];
u=(fx-x[0])/h;
fy=y[0][0];
u1=u;
fact=1;
for(i=1;i<n;i++)
{
fy=fy+(u1*y[0][i])/fact;
u1=u1*(u1-i);
fact=fact*(i+1);
}
// fprintf(fp,"\n y(%.3f)=%.3f",fx,fy);
fclose(fp);
return 0;
}