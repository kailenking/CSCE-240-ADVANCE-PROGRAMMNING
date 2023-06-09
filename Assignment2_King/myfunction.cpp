#include "myfunction.h"// include the header file so the functions are already declared
#include <iostream>
#include <cmath>
using namespace std;

// take in all the variables for the call by value
void var1(double x);

void var1(double a)
{
cin >> a;
}

void var2(double y);

void var2(double b)
{
cin >> b;
}

void var3(double z);

void var3(double c)
{
cin >> c;
}

void var4(double w);

void var4(double d)
{
cin >> d;
}

// call by refrence to calcuate the perimeter all functions
void PermFunction (double a, double b, double c, double d, double &p);

void PermFunction (double a, double b, double c, double d, double &p)
{
p = a+b+c+d;
cout << "the perimeter is" << p;
}

void PermFunction1 (double a, double b, double c, double &p);

void PermFunction1 (double a, double b, double c, double &p)
{
p = a+b+c;
cout << "the perimeter is" << p;
}

void PermFunction2 (double a, double b, double &p);

void PermFunction2 (double a, double b, double &p)
{
p = 2*(a+b);
cout << "the perimeter is" << p;
}

void PermFunction3 (double a, double &p);

void PermFunction3 (double a, double &p)
{
p = 4*a;
cout << "the perimeter is" << p;
}

// void function for a trapezoid perimeter
void answer(double x, double y, double z, double w, double &p)
{
cout << "To calcuate the perimeter of a trapezoid " <<endl;
cout << "Enter the length of the left side a" <<endl;
var1(x);//call by value for length a
cout << "Enter the length of the top b" <<endl;
var2(y);//call by value for length b
cout << "Enter the length of the right side c" <<endl;
var3(z);//call by value for length c
cout << "Enter the length of the bottom d" <<endl;
var4(w);//call by value for length d

PermFunction(x,y,z,w,p);//call by refrence for calcuating the trapezoid perimeter
}

// void function for a triangle perimeter
void answer(double x, double y, double z, double &p)
{
cout << "To calcuate the perimeter of a triangle " <<endl;
cout << "Enter the length of the left side a" <<endl;
var1(x);//call by value for length a
cout << "Enter the length of the right side b" <<endl;
var2(y);//call by value for length b
cout << "Enter the length of the bottom c" <<endl;
var3(z);//call by value for length c

PermFunction1(x,y,z,p);//call by refrence for calcuating the triangle perimeter
}

// void function for a rectange perimeter
void answer(double x, double y,double &p)
{
cout << "To calcuate the perimeter of a rectangle " <<endl;
cout << "Enter the length of the top and bottom  a" <<endl;
var1(x);//call by value for length a
cout << "Enter the length of the sidese b" <<endl;
var2(y);//call by value for length b

PermFunction2(x,y,p);//call by refrence for calcuating the rectangle perimeter
}

// void function for a square perimeter
void answer(double x,double &p)
{
cout << "To calcuate the perimeter of a square " <<endl;
cout << "Enter the length of the left side a" <<endl;
var1(x);//call by value for length a

PermFunction3(x,p);//call by refrence for calcuating the square perimeter
}

/*
// call by refrence functions
void PermFunction (double a, double b, double c, double d, double &p)
{
double perimeter = a+b+c+d;
cout << "the perimeter is" << perimeter;
}

void PermFunction1 (double a, double b, double c, double &p)
{
double perimeter = a+b+c;
cout << "the perimeter is" << perimeter;
}

void PermFunction2 (double a, double b, double &p)
{
double perimeter = 2*(a+b);
cout << "the perimeter is" << perimeter;
}

void PermFunction3 (double a, double &p)
{
double perimeter = 4*a;
cout << "the perimeter is" << perimeter;
}


// call by value functions
void var1(double a)
{
cin >> a;
}

void var2(double b)
{
cin >> b;
}

void var3(double c)
{
cin >> c;
}

void var4(double d)
{
cin >> d;
}
*/
