float dichotomie(float(*f)(float) , float a ,float b , int n)
{	int i;
	float c;

	for( i = 0 ; i <= n ; i++)
	{	c = (a+b)/2;
		if ((*f)(c)>=0)
		{
			b = c;
		}
		else
			a +=c;
	}
	return c;
}

float f(float x)
{
	return x*x + 2*x;
}
