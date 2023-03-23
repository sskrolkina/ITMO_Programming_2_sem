#include "virtual.h"

void Circle :: initFromDialog(){
  std::cout << "Enter your radius = ";
  std::cin >> radius;
  std::cout << "Enter your density = ";
  std::cin >> p;
  std::cout << "Enter your centre = ";
  std::cin >> centre.x >> centre.y;

}

const char* Circle :: classname(){
  return "Circle";
}

unsigned int Circle :: size(){
  return sizeof(*this);
}

double Circle ::square(){
  return radius * radius * 3,14;
}

double Circle :: perimeter(){
  return 2 * radius * 3,14;
}

double Circle :: mass(){
  return (((4 * 3,14 * pow(radius,3))/3) * p);
}

Vector2D Circle :: position(){
  return centre;
}

bool Circle ::operator==(IPhysObject &ob){
  return this -> mass() == ob.mass();
}

bool Circle ::operator<(IPhysObject &ob) {
  return this -> mass() < ob.mass();
}

void Circle :: print(){
  std::cout << "Triangle = " << '\n';
  std::cout << "Radius = " << radius << '\n';
  std::cout << "Density = " << p << '\n';
  std::cout << "Centre x = " << centre.x << " y = " << centre.y << '\n';
}

void Parallelogram :: initFromDialog(){
  std::cout << "Enter your a side = ";
  std::cin >> a;
  std::cout << "Enter your b side = ";
  std::cin >> b;
  std::cout << "Enter your height = ";
  std::cin >> h;
  std::cout << "Enter your density = ";
  std::cin >> p;
  std::cout << "Enter your centre = ";
  std::cin >> centre.x >> centre.y;
}

const char* Parallelogram :: classname(){
  return "Parallelogram";
}

unsigned int Parallelogram :: size(){
  return sizeof(*this);
}

double Parallelogram ::square(){
  return a * h;
}

double Parallelogram :: perimeter(){
  return 2 * (a + b);
}

double Parallelogram :: mass(){
  return ((a * b * h) * p);
}

Vector2D Parallelogram :: position(){
  return centre;
}

bool Parallelogram ::operator==(IPhysObject &ob){
  return this -> mass() == ob.mass();
}

bool Parallelogram ::operator<(IPhysObject &ob){
  return this -> mass() < ob.mass();
}

void Parallelogram :: print(){
  std::cout << "Parallelogram = " << '\n';
    std::cout << "a side = " << a << '\n';
    std::cout << "b side = " << b << '\n';
    std::cout << "height = " << h << '\n';
    std::cout << "Density = " << p << '\n';
  std::cout << "Centre x = " << centre.x << " y = " << centre.y << '\n';
}

void Universum :: AddCircle(){
  Circle* circle = new Circle();
  circle->initFromDialog();
  something.push_back(circle);
  objects.push_back(circle);
}

void Universum :: AddParallelogram(){
  {
    Parallelogram* parallelogram = new Parallelogram();
    parallelogram->initFromDialog();
    something.push_back(parallelogram);
    objects.push_back(parallelogram);
  }
}

void Universum :: Show(){
  if(something.empty()){
    std::cout << "Empty" << '\n';
  }
  else {
    for (int i = 0; i < something.size(); i++) {
      something[i]->print();
    }
  }
}

void Universum :: AllSquare(){
  if(something.empty()){
    std::cout << "Empty" << '\n';
  }
  else {
    double result = 0;
    for (int i = 0; i < something.size(); i++) {
      result += something[i]->square();
    }
    std::cout << "Sum of all squares = " << result << '\n';
  }
}

void Universum :: AllPerimeter(){
  if(something.empty()){
    std::cout << "Empty" << '\n';
  }
  else {
    double result = 0;
    for (int i = 0; i < something.size(); i++) {
      result += something[i]->perimeter();
    }
    std::cout << "Sum of all perimeters = " << result << '\n';
  }
}

void Universum ::Mass() {
  if(objects.empty()){
    std::cout << "Empty" << '\n';
  }
  else {
    double numerator = 0;
    double denominator = 0;
    for (int i = 0; i < objects.size(); i++) {
      double x = objects[i]->position().x;
      double y = objects[i]->position().y;
      numerator += (objects[i]->mass() * x * y);
      denominator += objects[i]->mass();
    }
    std::cout << numerator / denominator << '\n';
  }
}

void Universum ::Memory(){
  if(something.empty()){
    std::cout << "Empty" << '\n';
  }
  else {
    unsigned int result = 0;
    for (int i = 0; i < something.size(); i++) {
      result += something[i]->size();
    }
    std::cout << "Sum of all memory = " << result << '\n';
  }
}

void Universum ::Sort() {
  if(something.empty()){
    std::cout << "Empty" << '\n';
  }
  else {
    for (int i = 1; i < objects.size(); i++) {
      for (int j = i; j > 0 && objects[j - 1]->mass() > objects[j]->mass(); j--) {
        std::swap(objects[j - 1], objects[j]);
      }
    }
    for (int i = 0; i < objects.size(); i++) {
      std::cout << objects[i]->mass() << " ";
    }
  }
}
