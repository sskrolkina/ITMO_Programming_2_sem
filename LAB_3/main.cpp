#include "Class.h"

int main (){
  int n;
  double a;
  double b;
  double c;
  int k;

  std::cout << "Enter sides of first triangle = ";
  std::cin >> a >> b >> c;
  Triangle tri1(a,b,c);
  std::cout << "Enter sides of second triangle = ";
  std::cin >> a >> b >> c;
  Triangle tri2(a,b,c);

  bool check1 = tri1.Area() == tri2.Area();

  bool check2 = tri1.Area() != tri2.Area();

  bool check3 = tri1.Area() > tri2.Area();

  bool check4 = tri1.Area() < tri2.Area();

  std::cout << "Enter your vector = ";
  std::cin >> a >> b >> c;
  tri1.Add(a,b,c);

  if(check1){
    std::cout << "== true" << "\n" << "!= false" << '\n';
  }
  else{
    std::cout << "== false" << "\n" << "!= true" << '\n';
  }

  if(check3){
    std::cout << "> true" << "\n" << "< false" << '\n';
  }
  else{
    std::cout << "> false" << "\n" << "< true>" << '\n';
  }
  tri1.Show();

  std::cout << "Enter size of first and numbers";
  std::cin >> n;
  Array mas1(n);
  for(int i = 0; i < n; i++){
    std:: cin >> k;
    mas1[i] = k;
  }

  std::cout << "Enter size of second and numbers";
  std::cin >> n;
  Array mas2(n);
  for(int i = 0; i < n; i++){
    std:: cin >> k;
    mas2[i] = k;
  }


  bool check12 = mas1.Size() == mas2.Size();

  bool check22 = mas1.Size() != mas2.Size();

  bool check32 = mas1.Size() > mas2.Size();

  bool check42 = mas1.Size() < mas2.Size();

  if(check12){
    std::cout << "== true" << "\n" << "!= false" << '\n';
  }
  else{
    std::cout << "== false" << "\n" << "!= true" << '\n';
  }

  if(check32){
    std::cout << "> true" << "\n" << "< false" << '\n';
  }
  else{
    std::cout << "> false" << "\n" << "< true>" << '\n';
  }

  mas1 + mas2;
  mas1.Show();

  return 0;
}
