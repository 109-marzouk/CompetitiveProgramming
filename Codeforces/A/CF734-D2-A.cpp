// http://codeforces.com/contest/734/problem/A
#include <iostream>
using namespace std;
int main() {
  
  int n, a = 0, d = 0;
  char x;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x;
    if(x == 'A') a += 1;
    else d += 1;
  }
  cout << (a > d ? "Anton" : (a == d ? "Friendship" : "Danik"));
}
