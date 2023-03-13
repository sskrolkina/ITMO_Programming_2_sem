#include "func.h"

void Swap1(int &a,int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
void Swap2(int *a1,int *b1)
{
  int temp = *a1;
  *a1 = *b1;
  *b1 = temp;
}

void Integer(float &c)
{
  float tmp;
  tmp = modf( c, &c );
}

void Integer1(float *c1)
{
  float tmp;
  tmp = modf( *c1, c1 );
}

void Multiplication(std::complex<double> &d,float &e)
{
  d *= e;
}

void Multiplication1(std::complex<double> *d1,float *e1)
{
  *d1 *= *e1;
}

void Move(Circle &A,Vector &B)
{
  A.x += B.x1;
  A.y += B.y1;
}

void Move1(Circle* A1,Vector* B1)
{
  A1->x += B1->x1;
  A1->y += B1->y1;
}

