#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long T;
    cin >> T;
	while(T--){
		int N, start, end;
        cin >> N;
        start = floor(N / 12) * 12;
        end = start + 12;
        if(N % 12 == 0){
            end = start;
            start = end - 12;
        }
        int op = end - (N - start) + 1;
        cout << op << " " << (op % 6 == 0 || op % 6 == 1 ? "WS" : (op % 3 == 0 || op % 3 == 1 ? "AS" : "MS")) <<endl;
	}
}
