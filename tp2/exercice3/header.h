#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x);
float Newton(float(*f)(float),float(*g)(float) , float a0 , int n);
#endif
