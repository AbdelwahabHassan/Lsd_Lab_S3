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

float InterpLagrane(float *X , float(*f)(float) , float x , int size)
{
	float p_n = 0;
	int i = 0;
	for(i = 0; i < size ; i++)
	{
		p_n +=PolyLagrange(X,x,i,size)*f(X[i]);
	}
	return p_n;
} 	
