#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
		int g, p, n;
		cin >> g >> p;
		cin >> n;
		int case1 = 0, case2 = 0;
		while(n--){
			int p1, p2;
			cin >> p1 >> p2;
			case1 += (p1 * g + p2 * p);
			case2 += (p1 * p + p2 * g);
		}
		if(case1 < case2) cout << case1 <<endl;
		else cout << case2 <<endl;
	}
}
