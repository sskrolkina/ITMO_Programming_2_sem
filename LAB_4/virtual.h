#ifndef LAB4__VIRTUAL_H_
#define LAB4__VIRTUAL_H_

#include <cmath>
#include <vector>
#include <string>
#include <iostream>

class IPrintable{
 public:
  virtual void print() = 0;
};

class IDialogInitiable{
 public:
  virtual void initFromDialog() = 0;
};

class BaseCObject : public IPrintable, public IDialogInitiable{
 public:
  virtual const char* classname() = 0;
  virtual unsigned int size() = 0;
};

class IGeoFig : public BaseCObject{
 public:
  virtual double square() = 0;
  virtual double perimeter() = 0;

  IGeoFig() = default;
  virtual ~IGeoFig() = default;
  IGeoFig(const IGeoFig& other) = default;
};

class Vector2D{
 public:
  double x;
  double y;
};

 class IPhysObject : public BaseCObject{
 public:
  virtual double mass() = 0;
  virtual Vector2D position() = 0;
  virtual bool operator== (IPhysObject& ob) = 0;
  virtual bool operator< (IPhysObject& ob)= 0;

   IPhysObject() = default;
   virtual ~IPhysObject() = default;
   IPhysObject(const IPhysObject& other) = default;
};

class Circle : public IGeoFig, public IPhysObject{
 private:
  Vector2D centre;
  double radius;
  double p;
 public:
  Circle() = default;
  ~Circle() override = default;
  Circle(const Circle& other) = default;

  void initFromDialog() override;

  const char* classname() override;

  unsigned int size() override;

  double square() override;

  double perimeter() override;

  void print() override;

  double mass() override;

  Vector2D position() override;

  bool operator== (IPhysObject & ob) override;

  bool operator< (IPhysObject & ob) override;

};

class Parallelogram : public IGeoFig, public IPhysObject{
 private:
  double a;
  double b;
  double h;
  double p;
  Vector2D centre;
 public:
  Parallelogram() = default;
  ~Parallelogram() override = default;
  Parallelogram(const Parallelogram& other) = default;


  void initFromDialog() override;

  const char* classname() override;

  unsigned int size() override;

  double square() override;

  double perimeter() override;

  void print() override;

  double mass() override;

  Vector2D position() override;

  bool operator== (IPhysObject & ob) override;

  bool operator< (IPhysObject & ob) override;
};

class Universum{
 private:
  std::vector<IGeoFig*> something;
  std::vector<IPhysObject*> objects;

 public:

  Universum() = default;
  ~Universum(){
    for(int i = 0; i < something.size(); i++){
      delete something[i];
    }
    for(int i = 0; i < objects.size(); i++){
      delete objects[i];
    }
  }
  Universum(const Universum& other) = default;

  void AddCircle();

  void AddParallelogram();

  void Show();

  void AllSquare();

  void AllPerimeter();

  void Mass();

  void Memory();

  void Sort();
};

#endif
