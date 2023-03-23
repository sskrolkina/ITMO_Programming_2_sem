#include "virtual.h"

int main() {
  int command;
  Universum universum;
  std::cout << "1.Add circle 2. Add parallelogram 3. Show figures 4. All squares 5. All perimeter 6. Mass of all figures 7. Memory 8. Sort figures"  << '\n';
  std::cout << "Chose option = ";
  while(std::cin >> command){
    switch (command) {
      case 1:
        universum.AddCircle();
        break;
      case 2:
        universum.AddParallelogram();
        break;
      case 3:
        universum.Show();
        break;
      case 4:
        universum.AllSquare();
        break;
      case 5:
        universum.AllPerimeter();
        break;
      case 6:
        universum.Mass();
        break;
      case 7:
        universum.Memory();
        break;
      case 8:
        universum.Sort();
        break;
    }
    std::cout << "Choose option = ";
  }
  return 0;
}
