/*printing 20 terms of fibonachi series*/
#include <iostream>
using namespace std;
int main() {
 int n=20, firstTerm = 1, secondTerm = 0, nextTerm;
 for (int i = 1; i <= n; i++) {
 nextTerm = firstTerm + secondTerm;
 cout << nextTerm << " + ";
 firstTerm = secondTerm;
 secondTerm = nextTerm;
 }
 cout << "Sum of Fibonacci Series: "<< nextTerm<< endl;
}