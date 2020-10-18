// http://codeforces.com/contest/791/problem/A
#include <iostream>
using namespace std;
int main() {
  int l, b, y = 0;
  cin >> l >> b;
  while(l <= b){
    l *= 3;
    b *= 2;
    y += 1;
  }
  cout << y <<endl;
}