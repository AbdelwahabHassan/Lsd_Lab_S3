float dichotomie(float(*f)(float) , float a ,float b , int n)
{	float c;

	for(int i = 0 ; i <= n ; i++)
	{	c = (a+b)/2;
		if ((*f)(c)>=0)
		{
			b = c;
		}
		else
			a = c;
	}
	return c;
}

float f(float x)
{
	return x*x - 2;
}


float dichotomie2(float(*f)(float) , float a , float b , float e)
{	int n;
	n = (log2(((b-a)/e)) +1);

	return dichotomie(f,a,b,n);
}

// EXERCIE N°5 :

/* EN utilisant les fonctions implémenter précedement calculon la valeur approchée de :

sqrt(2), avec a = 0,b = 3,α0 = 3,n = 3,10,30
