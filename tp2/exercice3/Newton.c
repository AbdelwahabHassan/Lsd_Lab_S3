float Newton(float(*f)(float),float(*g)(float) , float a0 , int n)
{	float a;
	for(int i = 0; i < n ; i++)
	{
		a = a0 -((*f)(a0)/(*g)(a0));
	}
	return a;
}


float f(float x)
{
	return x*x + 3*x;
}

float g(float x)
{
	return 2*x + 3;
}

// EXERCIE N°5 :

/* EN utilisant les fonctions implémenter précedement calculon la valeur approchée de :

sqrt(2), avec a = 0,b = 3,α0 = 3,n = 3,10,30
