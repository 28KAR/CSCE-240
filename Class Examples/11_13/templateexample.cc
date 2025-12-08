// Copyright 2025 bhipp
// show an example of a template function

#include<iostream>
using std::cout;
using std::endl;
#include"mytemplates.h"


int main() {
  double dubs[] = { 3, 4.7, 8.2, 9.6 };
  int ints[10] = {-5, 22, 7};
  char words[] = "hello";

  PrintArray(dubs, 4);
  PrintArray(ints, 10);
  PrintArray(words, 5);

  return 0;
}