#include <iostream>
#include <string.h>
using namespace std;

int main(){
  string phone_number; // to store phone number input from user
  cout << "Enter a phone number: ";
  cin >> phone_number; // read the phone number from user

  string first_three = phone_number.substr(0, 3); // get the first three digits
  string middle_four = phone_number.substr(3, 4); // get four digits in middle
  string last_four = phone_number.substr(7, 4); // get the last four

  cout << "The formatted phone number is: " << "(" << first_three << ") "
       << middle_four << " " << last_four; // display desired result
  return 0;
}
