#include <iostream>
#include <vector>

template<typename T>
bool none_of(typename std::vector<T>::iterator iter, typename std::vector<T>::iterator iter2, T x){
  while(iter != iter2){
    if(*iter == x){
      return false;
    }
    iter++;
  }
  return true;
}

template<typename T>
bool is_sorted(typename std::vector<T>::iterator iter, typename std::vector<T>::iterator iter2,unsigned int size){
  for(int i = 0; i < size - 1; i++){
    if(*iter > *iter2){
      return false;
    }
    iter++;
    iter2++;
  }
  return true;
}

template<typename T>
int find_backward(typename std::vector<T>::iterator iter2, T x,int size){
  for(int i = size; i >= 0; i--){
    if(*iter2 == x){
      return i + 1;
    }
    iter2--;
  }
  return 0;
}

int main(){
  std::vector<int> something;
  int n;
  int a;
  int k;

  std::cin >> n;

  for(int i = 0; i < n; i++){
    std::cin >> a;
    something.push_back(a);
  }

  std::cout << "Enter what you are looking for = ";
  std:: cin >> k;

  std::vector<int>::iterator iter = something.begin();
  std::vector<int>::iterator iter2 = something.end();

  if(none_of<int>(iter,iter2,k)){
    std::cout << "There is none of " << k << '\n';
  }
  else{
    std:: cout << "There is " << k << '\n';
  }

  iter = something.begin();
  iter2 = something.begin() + 1;

  if(is_sorted<int>(iter,iter2,something.size())){
    std::cout << "Vector is sorted" << '\n';
  }
  else{
    std:: cout << "Vector isn't sorted" << '\n';
  }

  iter2 = something.end();

  std::cout << "The last postion is = " << find_backward<int>(iter2,k,something.size()) << '\n';
}
