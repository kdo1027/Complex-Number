// Khanh Do
// Complex.cpp
// This file contains the class implementation for the Complex number class
// Date: 03/22/2023
// Update: 03/27/2023

#include <sstream> 
#include "Complex.h"
#include <iomanip>
#include <math.h>

//================================================
// Complex(void)
// Default constructor
// Parameters: None
// Return value: None
// Creates a complex variable with value 0+0i
//=================================================
Complex::Complex(void)
{
	real=0;
	imag=0;
}

//=================================================
// Complex(a,b)
// complex constructor
// Parameters: Float a, b
// Return value: None
// Creates a complex variable with value a+bi
//=================================================
Complex::Complex(float a, float b){
	real=a;
	imag=b;
}

//=================================================
// Complex(const Complex &c)
// Complex constructor
// Parameters: Constant reference to Complex c
// Return value: None
// Creates a new complex same with the existing one
//=================================================
Complex::Complex(const Complex &c){
	real=c.real;
	imag=c.imag;
}

//=================================================
// to_string(void) const
// Parameters: none
// Return value: a string containing "a+bi" where a and b are the real and complex parts of the number.  
// Both a and b will be with fixed decimal length up to two places.  
//=================================================
string 	Complex::to_string(void) const
{
	stringstream stream;
	stream << fixed << setprecision(3) << real;
	if ( imag >= 0 )
		stream << "+" << fixed << setprecision(3) << imag << "i";
	else
		stream << "-" << fixed << setprecision(3) << fabs(imag) << "i";
	
	return stream.str();
}

//=================================================
// add(const Complex c) const
// Additional computation: c1=c2+c3
// Parameter: Constant Complex c 
// Return value: Value of the sum
//=================================================
Complex Complex::add(const Complex c) const{
	Complex res;
	res.real=real+c.real;
	res.imag=imag+c.imag;
	return res;
}

//=================================================
// add(float a) const
// Additional computation with float: c1=c2+a
// Parameter: Float a
// Return value: Value of the sum
//=================================================
Complex Complex::add(float a) const{
	Complex res;
	res.real=real+a;
	res.imag=imag;
	return res;
}

//=================================================
// abs(void) const
// Compute the absolute value: Distance from origin (real^2+imag^2)
// Parameter: None
// Return value: Absolute value
//=================================================
float Complex::abs(void) const{
	float dis;
	dis=sqrt(pow(real, 2)+pow(imag,2));
	return dis;
}

//=================================================
// setReal(float a) 
// Construct real part of complex number
// Parameter: Float a
// Return value: None
//=================================================
void Complex::setReal(float a){
	real=a;
}

//=================================================
// getReal(void) const 
// Execute real part of complex number
// Parameter: None
// Return value: Real part of complex number
//=================================================
float Complex::getReal(void) const{
	return real;
}

//=================================================
// setImag(float b) 
// Construct imaginary part of complex number
// Parameter: Float b
// Return value: None
//=================================================
void Complex::setImag(float b){
	imag=b;
}

//=================================================
// getImag(void) const 
// Execute imaginary part of complex number
// Parameter: None
// Return value: Imaginary part of complex number
//=================================================
float Complex::getImag(void) const{
	return imag;
}

//=================================================
// makeCopy(const Complex c) 
// Construct identical version of complex number
// Parameter: Constant Complex c
// Return value: None
//=================================================
void Complex::makeCopy(const Complex c){
	real=c.real;
	imag=c.imag;
}