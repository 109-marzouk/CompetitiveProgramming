// http://codeforces.com/contest/677/problem/A
#include <iostream>
using namespace std;
int main() {
  int n, h, r = 0, a;
  cin >> n >> h;
  for(int i = 0; i < n; i++){
    cin >> a;
    if(a > h) r += 2;
    else r += 1;
  }
  cout << r;
}