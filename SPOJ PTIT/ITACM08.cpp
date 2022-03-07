// https://code.itptit.com/problems/100010
// Câu đố đơn giản

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n], b[100000] = {0};
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	for (int i = 0; i <= 1e5; ++i)
	{
		if (b[i] % 2 == 1)
		{
			printf("%d", i);
			return 0;
		}
	}
}