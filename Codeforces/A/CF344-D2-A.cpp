// https://codeforces.com/contest/344/problem/A
#include <iostream>
#include <string>
using namespace std;
int main(){
	long long n;
	cin >> n;
	int cnt = 1;
	string prev;
	cin >> prev;
	while(--n){
		string i;
		cin >> i;
		if(i[0] == prev[1]) cnt++;
		prev[0] = i[0]; prev[1] = i[1];
	}
	cout << cnt;
}
