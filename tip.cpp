#include <iostream>
using namespace std;

int main(){
  double price, tip_percentage;

  cout << "Enter the price (pounds): £";
  cin >> price;
  cout << "Enter the tip percentage: ";
  cin >> tip_percentage;

  double tip_amount = (tip_percentage / 100) * price;
  double total_amount = tip_amount + price;

  cout << "The tip is £" << tip_amount << endl;
  cout << "The total amount to pay is £" << total_amount;
  return 0;
}
