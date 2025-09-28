// Copyright 2025 bhipp
// examples with decisions, switch statements, and loops
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  // output the odd integers from 77 to 23
//  int i = 77;
//  while ( i >= 23 ) {
//    cout << i << " ";
//    i -= 2;
//  }

//  int i;
//  for ( i = 77; i >= 23; i -= 2 )
//    cout << i << " ";
//  cout << "\nAfter the loop i = " << i << endl;

  for ( int i = 10, j = 1; i > j; --i, ++j )
    cout << i << " * " << j << " = " << i * j << endl;

  return 0;
}






/*
int main() {
  // user will enter simple arithmetic expressions of the form
  // 1-digit number  operator (+-* /)   1-digit number   =  answer
  // let them know whether or not they got the correct answer (and what it is
  // if not)
  // enter as many expressions as they like, entering q to quit
  int x, y, answer, correct;
  char op, equal_sign, first_input;
  cout << "Enter an expresion like 3 + 4 = 10\n";
  cin >> first_input;
  while ( first_input != 'q' ) {
    x = first_input - '0';
    cin >> op >> y >> equal_sign >> answer;

  //  cout << x << " " << op << " " << y << " " << equal_sign << " " << answer
  //       << endl;
    if ( op == '+' ) {
      correct = x + y;
    } else if ( op == '-' ) {
      correct = x - y;
    } else if ( op == '*' ) {
      correct = x * y;
    } else if ( op == '/' ) {
      if ( y == 0 ) {
        cout << "Can't divide by zero!" << endl;
        correct = 0;
      } else {
        correct = x / y;
      }
    } else {
      cout << "Unrecognized operator " << op << " (expected +, -, *, or /) "
           << endl;
      correct = 0;
    }

    if ( answer == correct ) {
      cout << "Great job!" << endl;
    } else {
      cout << "Correct answer is " << correct << ". Keep trying!" << endl;
    }
    cin >> first_input;
  }
  return 0;
}
*/




/*
int main() {
  // ask the user to enter an alphabetic character
  // output if it's a vowel
  char c;
  do {
    cout << "Enter an alphabetic character ";
    cin >> c;
        // NOT (   uppercase letter   OR      lowercase letter )
  } while ( !( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ) );

  switch (c) {
    case 'y': case 'Y':
      cout << "sometimes ";
    case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o':
    case 'O': case 'u': case 'U':
      cout << "a vowel" << endl;
      break;
    default:
      cout << "consonant" << endl;
  }

  return 0;
}
*/






