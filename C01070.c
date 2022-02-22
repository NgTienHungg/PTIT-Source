#include <stdio.h>
#include <math.h>

long long square(long long n)
{
	long long y = sqrt(n);
	if (y * y == n)
		return y;
	return 0;
}

long long swap(long long *a, long long *b)
{
	long long c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	long long a, b, c, d, e, f;
	scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);
	long long n = a * b + c * d + e * f;
	if (square(n) == 0)
	{
		printf("NO");
		return 0;
	}
	else
	{
		long long y = square(n);
		if (a > b)
			swap(&a, &b); // a    b
		if (c > d)
			swap(&c, &d); // c    d
		if (e > f)
			swap(&e, &f); // e    f

		if (b == d && d == f && f == y)
			printf("YES");
		else
		{
			if (d == y)
			{
				swap(&d, &b);
				swap(&c, &a);
			}
			if (f == y)
			{
				swap(&f, &b);
				swap(&e, &a);
			}
			if (b == y)
			{
				a = y - a;
				if (c == a && e == a || c == a && f == a || d == a && e == a || d == a && f == a)
					printf("YES");
				else
					printf("NO");
			}
			else
				printf("NO");
		}
	}
	return 0;
}
