#ifndef MEH__TESTS_H_
#define MEH__TESTS_H_

#include "func.h"
#include "assert.h"

  void Test(){
    int a = 5;
    int a_prev = a;
    int b = 6;
    int b_prev = b;
    Swap1(a, b);
    assert(a == b_prev);
    assert(b == a_prev);
    Swap2(&a, &b);
    assert(a == a_prev);
    assert(b == b_prev);
    std::cout << "Swap is fine\n";

    float c = 3.123;
    Integer(c);
    assert(c == 3);
    c = 3.123;
    Integer1(&c);
    assert(c == 3);
    std::cout << "Integer is fine\n";

    std::complex<double> d(1.0,2.0);
    std::complex<double> d1(1.0,2.0);
    float e = 1.5;
    Multiplication(d,e);
    assert(d.real() == 1.5 && d.imag() == 3.0);
    Multiplication1(&d1,&e);
    assert(d1.real() == 1.5 && d1.imag() == 3.0);
    std::cout << "Multiplication is fine\n";

    Circle s = {0,0};
    Vector t = {3,3};
    Circle s1 = {0,0};
    Vector t1 = {3,3};
    Move(s,t);
    assert(s.x == 3 && s.y == 3);
    Move1(&s1,&t1);
    assert(s.x == 3 && s.y == 3);
    std::cout << "Move is fine\n";
  }


#endif //MEH__TESTS_H_
