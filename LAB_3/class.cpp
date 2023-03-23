#include "Class.h"

double Triangle :: Area() {
double p = (a + b + c) / 2;
return sqrt(p * (p - a) * (p - b) * (p - c));
}

void Triangle :: Add(double a1, double b1, double c1){
  a += a1;
  b += b1;
  c += c1;
}

void Triangle :: Show() const{
  std::cout << "New triangle = "<< a << " " << b << " " << c << '\n';
}

bool operator == (Triangle tri1, Triangle tri2)
{
  return tri1.Area() == tri2.Area();
}
bool operator != (Triangle tri1, Triangle tri2)
{
  return tri1.Area() != tri2.Area();
}
bool operator > (Triangle tri1, Triangle tri2)
{
  return tri1.Area() > tri2.Area();
}
bool operator < (Triangle tri1, Triangle tri2)
{
  return tri1.Area() < tri2.Area();
}

Array Array::operator+(const Array &other)
{
  unsigned int n = this -> size + other.size;

  int *mas = new int[n];
  for(int i = 0; i < this -> size; i++) {
      mas[i] = this->array[i];
  }

  for(int i = 0; i < other.size; i++){
    mas[i + this->size] = other.array[i];
  }

  delete[] this->array;
  this -> array = mas;
  this -> size = n;

  return *this;
}

void Array :: Show(){
  std::cout << "New array = ";
  for(int i = 0; i < this -> size; i++){
    std::cout << this -> array[i] << " ";
  }
}

bool operator == (Array mas1, Array mas2){
  return mas1.Size() == mas2.Size();
}

bool operator != (Array mas1, Array mas2)
{
  return mas1.Size() != mas2.Size();
}

bool operator > (Array mas1, Array mas2)
{
  return mas1.Size() > mas2.Size();
}

bool operator < (Array mas1, Array mas2)
{
  return mas1.Size() < mas2.Size();
}
