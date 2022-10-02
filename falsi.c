#include <stdio.h>
#include <math.h>
float f(float x) {return (x*x*x+12.1*x*x+13.1*x+15.79);}

int main()
{
    float x0, x1, x2, f0, f1, f2, x3;
    printf("Enter the values of x0 and x1:\n");
    scanf("%f %f", &x0, &x1);
    float eps;
    int ctr = 0;
    printf("Enter the tolerance value:\n");
    scanf("%f", &eps);
    FILE *fp;
    fp = fopen("false.txt", "w");
    do
    {
        x3 = x2;
        f0 = f(x0);
        f1 = f(x1);
        f2 = f(x2);
        x2 = (f1 * x0 - f0 * x1) / (f1 - f0);
        printf("x0= %.4f x1= %.4f x2= %.4f f0= %.4f f1= %.4f f2= %.4f\n", x0,
               x1, x2, f0, f1, f2);
        fprintf(fp, "x0= %.4f x1= %.4f x2= %.4f f0= %.4f f1= %.4f f2= %.4f\n",
                x0, x1, x2, f0, f1, f2);
        if (f0 * f2 < 0)
            x1 = x2;
        else
            x0 = x2;
        ctr++;
    } while (fabs((x3 - x2) / x3) > eps);
    printf("\n\nThe final approximated root is: %f \nThe number of iterations is: %d", x2, ctr);
    fclose(fp);
    return 0;
}