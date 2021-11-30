 #include "header.h"

 int **dummy(int **x, int n)
{
	int **y;
	int i;
	int j;

	i = 0;
	y = (int**)malloc(sizeof(int*) * (n + 1));
	while (i < n)
	{
		y[i] = (int*)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			y[i][j] = j;
			j++;
		}
		i++;
	}
	y[n] = x[0];
	return(y);
}