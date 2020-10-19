// https://codeforces.com/contest/263/problem/A
#include <iostream>
using namespace std;
int main(){
	int arr[5][5];
	int y, x;
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++){
			int e;
			cin >> e;
			if(e == 1){
				x = j;
				y = i;
			}
			arr[i][j] = e;
		}
	int steps = 0;
	while(y != 2 || x != 2){
        if(x != 2){
            int temp = arr[y][x];
            arr[y][x] = arr[y][(((int)x > 2) ? --x: ++x)];
            arr[y][x] = temp;
            steps++;
        }
		if(y == 2 && x == 2) break;
        if(y != 2){
            int temp = arr[y][x];
            arr[y][x] = arr[((int)y > 2) ? --y: ++y][x];
            arr[y][x] = temp;
            steps++;
        }
	}
	cout << steps;
}