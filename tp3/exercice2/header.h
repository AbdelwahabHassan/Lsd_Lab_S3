#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>

float function(float x);
float PolyLagrange(float *X,float x,int i,int size);
float InterpLagrane(float *X , float(*f)(float) , float x , int size);

#endif
