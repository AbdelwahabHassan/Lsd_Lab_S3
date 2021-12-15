#include "header.h"
int main()
{	float X[]={0,2,-1,4};
	float x=1.5;
	float n[] ={10,20,30}; 
	//int size = sizeof(X)/sizeof(X[0]);
	printf("%f\n",PolyLagrange(X,x,1,n[0]));
	//float(*f)(float) = &function;
	//printf("hh %f\n",InterpLagrane(X,f,x,n[0]));
	return 0;
}
