#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
            printf("NO");
        else
            printf("%.2f", (float)-c / b);
    }
    else
    {
        float denta = b * b - 4 * a * c;
        if (denta < 0)
            printf("NO");
        else if (denta == 0)
            printf("%.2f", (float)-b / (2 * a));
        else
        {
            float x1 = (-b + sqrt(denta)) / (2 * a);
            float x2 = (-b - sqrt(denta)) / (2 * a);
            printf("%.2f %.2f", x1, x2);
        }
    }
    return 0;
}