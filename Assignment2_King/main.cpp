/*  COPYRIGHT 2020 Kailen King
Author: Kailen King
Date: September 30,2020
Purpose: Assignment 2
Details: write a program that calculates the perimeter of quaderlaterals with 4 separate void functions with call by value funcitons for the lengths presented in the formulas
all functions need to have the same name with variables all being doubles.
also create a makefile for the program.
*/


#include<iostream>    // library
#include<cmath>
#include "myfunction.cpp"
using namespace std;

/*
//declare take in all the variables for the call by value
void var1(double a);

void var2(double b);

void var3(double c);

void var3(double c)

void var4(double d);

//declare  call by refrence to calcuate the perimeter all functions
void PermFunction (double a, double b, double c, double d, double &p);

void PermFunction1 (double a, double b, double c, double &p);

void PermFunction2 (double a, double b, double &p);

void PermFunction3 (double a, double &p);
*/

int main()
{// the basic interface
cout << "Welcome to perimeter calculator \n" << endl;
cout << "To specifiy which shape, select a number \n" <<endl;
cout << "1: Trapezoid \n" <<endl;
cout << "2: Triangle \n" <<endl;
cout << "3: Rectangle \n" <<endl;
cout << "4: Square \n" <<endl;


int choice;
cin >> choice;


// actual variables
double w=1;
double x=2;
double y=3;
double z=4;
double pt=10;

// all choices for the perimeter being calculated
switch(choice)
{
case 1:
cout << "trapezoid "<<endl;
answer(x,y,z,w,pt);// should ask for all the variables and calcuate the trapezoid perimeter using the defined functions above
break;
case 2:
cout << "triangle "<<endl;
answer(x,y,z,pt);// should ask for all the variables and calcuate the triangle perimeter using the defined functions above
break;
case 3:
cout << "rectangle "<<endl;
answer(x,y,pt);// should ask for all the variables and calcuate the rectangle perimeter using the defined functions above
break;
case 4:
cout << "square "<<endl;
answer(x,pt);// should ask for all the variables and calcuate the square perimeter using the defined functions above
break;
default:
cout << "Not Valid "<<endl;
break;
}
return 0;
}

/*
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
*/
