#ifndef LAB2__CLASS_H_
#define LAB2__CLASS_H_

#include <iostream>
#include <fstream>
#include <string>

class Tests{
 private:
  std::ofstream file;
  std::string filepath;
 public:
  void Open(const std::string& path);

  void Close();

  std::string Name();

  void isOpen();

  void String(const std::string& some);

  void Integer(int num);

  void Real(float number);
};

#endif
