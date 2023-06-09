/*  COPYRIGHT 2020 Kailen King
Author: Kailen King
Date: October 29,2020
Purpose: Assignment 4
Details: write a program that subtracts real and immaginary numbers.
this will cover friend functions, vectors, a constuctor, accessors, mutators, and private members.
also create a makefile for the program.
*/

#include<iostream>    // library
#include<cmath>
#include<vector>
using namespace std;

class Complex
{
        private:
double Real;
double Imaginary;

friend void function();

        public:
Complex();
Complex(double real,double imag);

/*
double getReal();
double getImaginary();
void setReal(double real);
void setImaginary(double imag);
*/

double getReal(double real)
{
return Real;
}

void setReal(double real)
{
Real = real;
}

double getImaginary()
{
return Imaginary;
}

void setImaginary(double imag)
{
Imaginary = imag;
}

void subtracts(double subtract,double subtract2, double r1, double r2, double i1, double i2)
{
subtract = r1-r2;
subtract2 = i1-i2;
cout<<"first number - second number: " << subtract << " + " << subtract2 <<"i"<< endl;
}

void equals(double r1,double r2,double i1,double i2)
{
if(r1 == r2 || i1 == i2)
{
cout<< "The first and second numbers are equal: "<< boolalpha << true << endl;
}else{
cout<< "The first and second numbers are equal: "<< boolalpha << false << endl;
}
}

void print()
{
cout << "The complex number is: " << Real << " + " << Imaginary << "i" << endl;
}

void function(vector<double> vect, double r1,double r2 ,double i1, double i2)
{
vect.resize(4);

 for (double i=0; i<vect.size(); i++)
       cout << "the value that is stored in index " <<i << " of the vector: " << vect[i] << " " << endl;
}


//static double getImaginary();
/*
Complex operator-(Complex second)
{
Complex result;
result.real = real+second.real;
result.immaginary = imaginary+second.imagionary;
return result;
}

Complex operator = (Complex second)
{
double n2 = second.get_value;
if(real = imaginary){
return true;
}else{
return false;
}
}
*/
};


double getReal();
double getImaginary();
void setReal(double real);
void setImaginary(double imag);

Complex::Complex(){
Real = 0;
Imaginary = 0;
}
/*
void function(vector<double> vect, double r1,double r2 ,double i1, double i2)
{
//vector<double> vec;
vect.resize(4);
//vect.push_back(Real);
//vect.push_back(Imaginary);

//vect = vec;
}
*/

int main()
{
vector<double> vect;
double re;
double im;
double re2;
double im2;
double s=0;
double s2=0;

Complex vi;

cout << "Enter your first complex number:" << endl;
cin >>re;
cin >>im;
vect.push_back(re);
vect.push_back(im);

cout << "The first complex number: "<< re << " + " << im <<"i" <<endl;

cout << "Enter your second complex number:" << endl;
cin >>re2;
cin >>im2;
vect.push_back(re2);
vect.push_back(im2);
cout << "The second complex number: " << re2 << " + " << im2 <<"i" <<endl;

vi.subtracts(s,s2,re,re2,im,im2);

vi.equals(re,re2,im,im2);

vi.function(vect,re,re2,im,im2);

return 0;
}

