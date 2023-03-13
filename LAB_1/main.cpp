#include "func.h"
#include "Tests.h"

int main() {
  int a,b;
  float c,c1;
  float e,e1;
  Circle f{};
  Vector g{};
  Circle f1 = {};
  Vector g1 = {};

  std::complex<double> d(1.0,2.0);
  std::complex<double> d1(1.0,2.0);

  std::cout << "Enter numbers for swap = ";
  std::cin >> a >> b;

  Swap1(a,b);
  std::cout << "Swap = " << a << ' ' << b << " and ";

  Swap2(&a,&b);
  std::cout << a << ' ' << b << '\n';

  std::cout << "Enter real numbers = ";
  std::cin >> c >> c1;

  Integer(c);
  Integer1(&c1);
  std::cout << "Integer = " << c << ' ' << c1 <<'\n';
  
  std::cout << "Enter real numbers = ";
  std::cin >> e >> e1;

  Multiplication(d,e);
  Multiplication1(&d1,&e1);
  std::cout << "Multiplication = " << d << ' ' << d1 << '\n';


  std::cout << "Enter coordinates = ";
  std::cin >> f.x >> f.y;
  std::cout << "Enter vector = ";
  std::cin >> g1.x1 >> g1.y1;

  Move(f,g);
  Move(f1,g1);
  std::cout << "Move = (" << f.x << " " << f.y << ")(" << f1.x << " " << f1.y << ")"<<'\n';

  std::cout << '\n' << "Tests:" << '\n';
  Test();
}
