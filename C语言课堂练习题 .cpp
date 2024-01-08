#include<stdio.h>
int main()
{
	int i, n, a[] = { 0 }, j, s;
	scanf_s("%d", &n);
 for (i = 0; i < n; i++)
	{
		s = 0;
		scanf_s("%d", &a[i]);
		for (j = 0; j < i; j++)
		{
			if (a[i] > a[j])
				s++;
		}
		printf("%d", s);
	}
	return 0;
}