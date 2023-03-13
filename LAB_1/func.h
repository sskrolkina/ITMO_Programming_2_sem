#ifndef MEH__FUNC_H_
#define MEH__FUNC_H_

#include <iostream>
#include <cmath>
#include <complex>

struct Circle
{
  float x;
  float y;
};

struct Vector
{
  float x1;
  float y1;
};

void Swap1(int &a,int &b);

void Swap2(int *a1,int *b1);

void Integer(float &c);

void Integer1(float *c1);

void Multiplication(std::complex<double> &d,float &e);

void Multiplication1(std::complex<double> *d1,float *e1);

void Move(Circle& A,Vector& B);

void Move1(Circle* A1,Vector* B1);

#endif
