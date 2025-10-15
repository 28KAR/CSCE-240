// Copyright 2025 bhipp
// Introduction to Pointers in C++
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int num_grades;
  int * grades;
  cout << "How many assignments are there in your class? ";
  cin >> num_grades;
  // new returns the address of the block of memory reserved, need to
  // hold that in a pointer variable
  grades = new int[num_grades];

  for ( int i = 0; i < num_grades; ++i )
    cin >> grades[i];

  char more;
  cout << "I got " << num_grades << ". Are there more? ";
  cin >> more;
  if ( more == 'y' ) {
    int extra;
    cout << "How many more? ";
    cin >> extra;
    // we need to reallocate memory for the full block
    int * temp = new int[num_grades + extra];
    // copy the old values over
    for ( int i = 0; i < num_grades; ++i )
      temp[i] = grades[i];
    delete [] grades;  // plugging the memory leak
    grades = temp;
    // get the new ones in
    cout << "Gimme those " << extra << " extra grades ";
    for ( int i = num_grades; i < num_grades + extra; ++i )
      cin >> grades[i];
    num_grades += extra;
  }


  cout << "Here's what I got: ";
  for ( int i = 0; i < num_grades; ++i )
    cout << grades[i] << (i < num_grades - 1 ? ", " : "\n");

  delete [] grades;  // releases the memory that grades is pointing to

  return 0;
}




/*
void Square(int * x) {
  *x *= *x;
}

int main() {
  int y = 7;
  Square(&y);
  cout << y << endl;
  return 0;
}
*/





/*
int main() {
  double * dptr, x = 3.14;

  dptr = &x;
  cout << "x = " << x << "\n&x = " << &x << endl;
  cout << "dptr = " << dptr << "\n*dptr = " << *dptr
       << "\n&dptr = " << &dptr
       << "\n*&x = " << *(&x) << endl;
  //     << "\n&*x = " << &(*x) << endl;

  int numbers[10] = { 23, 18, 100, -4, 7, 19 };
  cout << numbers << endl;
  cout << numbers[2] << endl;
  cout << *(numbers + 2) << endl;

  char mycstring[] = "how's it going?";
  cout << (mycstring + 6) << endl;
  char * cptr = mycstring;
  cptr += 2;  // cptr now holds the address 2 down from the start of
              // the array
  *cptr = 'O';  // changes the character the pointer is pointing to
                // to 'O'
  cout << mycstring << endl;
  return 0;
}
*/







