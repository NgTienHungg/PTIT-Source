#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void solve()
{
	char s1[205] = {};
	gets(s1);
	char s2[205] = {};
	gets(s2);
	char res1[205][205] = {};
	int n1 = 0;
	char res2[205][205] = {};
	int n2 = 0;
	char ans[205][205] = {};
	int n = 0;

	// Tách các từ ở s1 ra, lưu vào res1[]
	char *token1 = strtok(s1, " ");
	while (token1 != NULL)
	{
		bool check = 1;
		for (int i = 0; i < n1; i++)
		{
			if (strcmp(res1[i], token1) == 0)
			{
				check = 0;
				break;
			}
		}
		if (check)
			strcpy(res1[n1++], token1);
		token1 = strtok(NULL, " ");
	}

	// Tách các từ ở s2 ra, lưu vào res2[]
	char *token2 = strtok(s2, " ");
	while (token2 != NULL)
	{
		bool check = 1;
		for (int i = 0; i < n2; i++)
		{
			if (strcmp(res2[i], token2) == 0)
			{
				check = 0;
				break;
			}
		}
		if (check)
		{
			strcpy(res2[n2], token2);
			n2++;
		}
		token2 = strtok(NULL, " ");
	}

	// Kiểm tra và lưu xâu t/m vào ans[]
	for (int i = 0; i < n1; i++)
	{
		bool check = 1;
		for (int j = 0; j < n2; j++)
		{
			if (strcmp(res1[i], res2[j]) == 0)
			{
				check = 0;
				break;
			}
		}
		if (check)
			strcpy(ans[n++], res1[i]);
	}

	// Sắp xếp các xâu trong ans[]
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (strcmp(ans[j], ans[i]) < 0)
			{
				char tmp[105] = {};
				strcpy(tmp, ans[i]);
				strcpy(ans[i], ans[j]);
				strcpy(ans[j], tmp);
			}

	// In ra kết quả
	for (int i = 0; i < n; i++)
		printf("%s ", ans[i]);
	printf("\n");
}

int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--)
		solve();
	return 0;
}