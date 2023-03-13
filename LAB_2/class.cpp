#include "Class.h"

  void Tests::Open(const std::string& path){
    filepath = path;
    file.open(path);
  }

  void Tests::Close(){
    file.close();
  }

  std::string Tests::Name(){
  return filepath.substr(filepath.find_last_of("/\\") + 1);
  }

  void Tests::isOpen(){
    if(file.is_open())
    {
      std::cout << "File is open\n";
    }
    else
    {
      std::cout << "File is not open\n";
    }
  }

  void Tests::String(const std::string& some){
    if(file.is_open())
    {
      file << some << '\n';
      std::cout << "Ok \n";
    }
    else
    {
      std::cout << "File is not open\n";
    }
  }

  void Tests::Integer(int num){
    if(file.is_open())
    {
      file << num << '\n';
      std::cout << "Ok \n";
    }
    else
    {
      std::cout << "File is not open\n";
    }
  }

  void Tests::Real(float number){
    if(file.is_open())
    {
      file << number << '\n';
      std::cout << "Ok \n";
    }
    else
    {
      std::cout << "File is not open\n";
    }
  }

