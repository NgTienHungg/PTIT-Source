#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        double a1, b1, a2, b2, a3, b3;
        scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &a2, &b2, &a3, &b3);
        double d12 = sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));
        double d23 = sqrt((a2 - a3) * (a2 - a3) + (b2 - b3) * (b2 - b3));
        double d13 = sqrt((a1 - a3) * (a1 - a3) + (b1 - b3) * (b1 - b3));
        if ((d12 + d23) > d13 && (d23 + d13) > d12 && (d13 + d12) > d23)
            printf("%.3lf", d12 + d23 + d13);
        else
            printf("INVALID");
        printf("\n");
    }
    return 0;
}