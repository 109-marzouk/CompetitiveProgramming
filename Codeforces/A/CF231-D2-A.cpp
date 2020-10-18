// https://codeforces.com/contest/231/problem/A
#include <iostream>
using namespace std;
int main(){
	int n, cnt = 0;
	cin >> n;
	while(n--){
		int x, y, z;
		cin >> x >> y >> z;
		if (x + y + z == 3 || x+y+z == 2) cnt++;
	}
	cout << cnt;
}
