#ifndef UNTITLED2__CBUF_H_
#define UNTITLED2__CBUF_H_

#include <iostream>

template <typename T>
class Cbuffer {
 private:
  T *arr;
  size_t cur_size;
  size_t capacity;
 public:
  class Iterator: public std::iterator<std::random_access_iterator_tag, T>{
   private:
    T* ptr;
   public:
    Iterator(){}
    Iterator(T *pointer): ptr(pointer){}
    ~Iterator() = default;

    T& operator* (){
      return *ptr;
    }

    T* operator-> (){
      return ptr;
    }

    Iterator& operator+=(size_t x){
      ptr += x;
      return *this;
    }

    Iterator& operator-=(size_t x){
      ptr -= x;
      return *this;
    }

    Iterator operator+ (size_t x){
      return Iterator(x + ptr);
    }

    Iterator operator- (size_t x){
      return Iterator(ptr - x);
    }

    Iterator operator++ () {
      ptr++;
      return *this;
    }

    Iterator operator++(T) {
      Iterator iterator(* this);
      ++ptr;
      return iterator;
    }

    Iterator operator-- () {
      ptr--;
      return *this;
    }

    Iterator operator--(T) {
      Iterator iterator(* this);
      --ptr;
      return iterator;
    }

    bool operator> (const Iterator& iter);
    bool operator< (const Iterator& iter);
    bool operator== (const Iterator& iter);
    bool operator!= (const Iterator& iter);

    bool operator<=(Iterator& iter) {
      return ptr <= iter.ptr;
    }

    bool operator>=(Iterator& iter) {
      return ptr >= iter.ptr;
    }

    using difference_type = typename std::iterator<std::random_access_iterator_tag, T>::difference_type;

    difference_type operator-(Iterator & iterator) {
      return (ptr - iterator.ptr);
    }

  };

  T& operator[](size_t x) const{
    return arr[x % capacity];
  }

  Iterator Begin = nullptr;
  Iterator End = nullptr;

  size_t pb_i = 0;
  size_t pf_i = 0;


  void init(int begin_i, int end_i) {
    arr = new T[capacity];

    if (begin_i > -1) {
      Begin = & arr[begin_i];
    }

    End = &arr[end_i];
  }

 public:
  Cbuffer(size_t n){
    capacity = n;
    arr = new T[n];
    cur_size = 0;
    init(-1,0);
  }

  Cbuffer(const Cbuffer& buf){
    capacity = buf.capacity;
    cur_size = buf.size;
    arr = new T[capacity];
    init(0,capacity);

    for(size_t i = 0; i < cur_size; i++){
      arr[i] = buf.arr[i];
    }
  }

  ~Cbuffer() {
    delete []arr;
  }

  Iterator begin() { return Begin; }

  Iterator end() { return End; }

  void push_back(const T& x);

  void pop_back();

  void push_front(const T& x);

  void pop_front();

  void show();

  void insert(size_t i,T x);

  void Delete(size_t i);

  void resize(size_t n);
};

#endif
