#include "header.h"

int main()
{
	int n;
	int **x;
	int i;
	int j;

	n = 10;
	i = 0;
	x = (int**)malloc(sizeof(int*) * n);
	while (i < n)
	{
		x[i] = (int*)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			x[i][j] = j;
			j++;
		}
		i++;
	}
	int **h;
	h=x;
	x = dummy(x, n);
	i=0;
	while (i<n)
	{
		free(h[i]);
		i++;
	}
	free(h);

	i = 0;
	while (i < n + 1)
	{
		j = 0;
		while (j < n)
		{
			printf("%d ", x[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	i=0;
	while(i<n)
	{

		free(x[i]);
		i++;
	}
	free(x);
}