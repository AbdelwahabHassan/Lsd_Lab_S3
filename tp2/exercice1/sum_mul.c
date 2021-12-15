// FIRST QUESTION 
float **sum_m( float **A, float **B, int n )
{	int i=0;
	int j=0;
	float **c =(float**)malloc(sizeof(float*)*n);
	while(i<n)
	{
		c[i] =(float*)malloc(sizeof(float)*n);
		i++;
	}
	i=0;
	while(i<n)
	{
		j=0;
		while(j<n)
		{
			c[i][j]=A[i][j] + B[i][j];
			j++;
		}
		i++;
	}
	return c;
}

// SECOND QUESTION

float **mult_m( float **A, float **B, int n )
{	int i=0;
	int j=0;
	int k=0;
	float **c =(float**)malloc(sizeof(float*)*n);
	while(i<n)
	{
		c[i] =(float*)malloc(sizeof(float)*n);
		i++;
	}
	i=0;
	while(i<n)
	{
		j=0;
		while(j<n)
		{	
			k=0;
			c[i][j]=0;

			while(k<n)
			{
				c[i][j]=A[i][k]*B[k][j];
				k++;
			}
			j++;
		
		}
		return c;
	}
}
