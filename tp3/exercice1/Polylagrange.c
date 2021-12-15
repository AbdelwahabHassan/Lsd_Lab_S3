float function(float x)
{
	return x*x-2 ;
}

float PolyLagrange(float *X,float x,int i,int size)
{	float p = 1;
	int j = 0;
	//scanf("%d",&size);
	for(j = 0; j < size ; j++)
		if (j!=i)
		{
			//if (X[i]==X[j])
			//{
				printf("0\n");
			//}
        	p = p*((x-X[j])/(X[i]-X[j]));
		}
		return p;
}
