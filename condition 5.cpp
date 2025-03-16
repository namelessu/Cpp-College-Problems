/* a c++ program that is tiring and uncomplete*/
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Declare variables to store account information
  int accountNumber;
  char accountType;
  int minimumBalance;
  int currentBalance;
  double interestRate;

  // Read in account information
  cout << "Enter account number: ";
  cin >> accountNumber;

  cout << "Enter account type (S for savings, C for checking): ";
  cin >> accountType;

  cout << "Enter minimum balance: ";
  cin >> minimumBalance;

  cout << "Enter current balance: ";
  cin >> currentBalance;
  if(currentBalance<minimumBalance){
    if(accountType=='s'){
    currentBalance-=10;
  }
   else if(accountType=='c'){
   currentBalance-=25;
  }
  }
  if(currentBalance>=minimumBalance){
    if(accountType=='s'){
    interestRate=0.04;
    cout<<"interest rate "<<interestRate;
    }
  }

  else if(accountType=='c'){
   if (currentBalance > minimumBalance + 5000){
    interestRate=0.03;
    cout<<"interest rate "<<interestRate;
   }
   else {
    interestRate=0.05;
    cout<<"interest rate "<<interestRate;
   }
  }
  cout << "Account number: " << accountNumber << endl;
  cout << "Account type: " << accountType << endl;
  cout << "Current balance: $" << currentBalance << endl;}