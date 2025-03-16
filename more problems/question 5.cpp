/*a c++ program that check if number is prime or not*/
#include <iostream>
using namespace std;
bool check_prime(int n) {
  bool is_prime = true;
  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }
  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }
  return is_prime;
}
int main(void){
    int x;
    cout<<"enter the value of x";
    cin>>x;
    cout<<check_prime(x)<<endl;
    cout<<"if 0 then it is not prime number if 1 then it is a prime number"<<endl;
}