// https://codeforces.com/contest/381/problem/A
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		int e;
		cin >> e;
		arr[i] = e;
	}
	int start = 0, end = n - 1, s = 0, d = 0, t = 1;
	while(start <= end){
		if(arr[start] > arr[end]){
			if(t % 2 == 1) s += arr[start];
			else d += arr[start];
			start++;
		}else{
			if(t % 2 == 1) s += arr[end];
			else d += arr[end];
			end--;
		}
		t++;
	}
    cout << s << " " << d << endl;
}

