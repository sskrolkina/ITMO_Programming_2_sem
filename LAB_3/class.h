#ifndef LAB3__CLASS_H_
#define LAB3__CLASS_H_

#include <iostream>
#include <cmath>

class Figure {
 public:
  virtual double Area() = 0;
};

class Triangle : public Figure{
 private:
  double a;
  double b;
  double c;
 public:
  Triangle(double a, double b, double c) : a(a), b(b), c(c){}

  Triangle() : a(0), b(0), c(0) {}

  Triangle(const Triangle& other) : a(other.a), b(other.b), c(other.c){}

  ~Triangle() = default;

  double Area() override;

  void Add(double a1, double b1, double c1);

  void Show() const;
};

class Array{
 private:
  unsigned int size;
  int *array;
 public:
  Array(int n){
    this -> array = new int[n];
    this -> size = n;
  }

  Array(const Array& other){
    this -> size = other.size;
    this->array = new int[other.size];
    for(int i = 0; i < this->size; i++){
      this->array[i] = other.array[i];
    }
  }

  ~Array(){
    this->size = 0;
    delete[] this->array;
  }

  unsigned int Size() const{
    return size;
  }

  Array operator + (const Array& other);

  int &operator [](const int i){
    return array[i];
  }



  void Show();
};

#endif
