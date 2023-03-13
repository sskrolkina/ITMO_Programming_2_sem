#include "Class.h"


int main() {
  Tests meh;
  int num;
  float number;
  std::string something;
  std::string path;

  std:: cout << "1.Open 2.Close 3.Check 4.Name 5.Add string 6.Add real number 7.Add integer number \n";
  std::cout << "Enter = ";
  int command;
  while(std::cin >> command){
    switch(command){
      case 1:
        std::cout << "filepath = ";
        std::cin >> path;
        meh.Open(path);
        break;
      case 2:
        meh.Close();
        break;
      case 3:
        meh.isOpen();
        break;
      case 4:
        std:: cout << meh.Name() << '\n';
        break;
      case 5:
        std::cout << "string = ";
        std::cin >> something;
        meh.String(something);
        break;
      case 6:
        std::cout << "real number = ";
        std::cin >> number;
        meh.Real(number);
        break;
      case 7:
        std::cin >> num;
        meh.Integer(num);
        break;
    }
    std::cout << "Enter = ";
  }
  return 0;
}
