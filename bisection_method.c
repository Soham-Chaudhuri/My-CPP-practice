#include <stdio.h>
#include <math.h>
float f(float x) {return (pow(2,x)-3*x);}
int main()
{
    float x0, x1, x2, f0, f1, f2, x3, e;  int ctr=0;
    printf("Enter the values of x0 and x1:\n");  scanf("%f %f", &x0, &x1);
    printf("Enter the tolerance value:\n");  scanf("%f", &e);
    FILE *fp;
    fp= fopen("bisection_m.txt", "w");
    do
    {
        x3= x2;  x2= (x0+x1)/2;  f0= f(x0);  f1= f(x1);  f2= f(x2);  ctr++;
        printf("%.6f\n",f2);
        fprintf(fp, "iteration=%d     x0=%.3f     x1=%.3f     x2=%.3f     f0=%.3f     ",ctr,x0,x1,x2,f0);
        fprintf(fp,"f1=%.3f     f2=%.3f\n",f1,f2);
        if(f0*f2 <0)
        x1= x2;
        else
        x0=x2;
    } while (fabs((x3- x2)/x3)>e);
    printf("\n\nThe final approximated root is: %f \nThe number of iterations is: %d", x2, ctr);
    fclose(fp);
    return 0;
}