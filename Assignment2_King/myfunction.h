#include<iostream>// library
#include<cmath>

#ifndef MYFUNCTION_H
#define MYFUNCTION_H

using namespace std;

extern void answer(double x,double y,double z,double w, double &p);// declare the trapezoid function

extern void answer(double x,double y,double z, double &p);// declare the triangle function

extern void answer(double x,double y, double &p);// declare the rectangle function

extern void answer(double x, double &p);// declare the square function

/*
// call by value to get the input

void var1(double a)

void var2(double b)

void var3(double c)

void var4(double d)

// call by refrence to calcuate the perimeter

void PermFunction (double a, double b, double c, double d, double &p);

void PermFunction1 (double a, double b, double c, double &p);

void PermFunction2 (double a, double b, double &p);

void PermFunction3 (double a, double &p);
*/

#endif
