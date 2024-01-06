#include <stdio.h>
#include <string.h>

void check();

int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		check();
	}
}

void check()
{
	int a;
	scanf("%d", &a);
	getchar();
	char str[a];
	gets(str);
	char max = str[0];
	for (int i = 0; i < a; i++)
	{
		if (str[i] > max)
			max = str[i];
	}

	printf("%d\n", max - 96);
}