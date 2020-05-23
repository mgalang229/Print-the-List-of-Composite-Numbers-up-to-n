#include <bits/stdc++.h>

using namespace std;

void composite(int n){
	bool c[n+1];
	memset(c, true, sizeof(c));
	for(int i = 2; i*i <= n; i++){
		if(c[i] == true){
			for(int j = i*i; j <= n; j += i){
				c[j] = false;
			}
		}
	}
	for(int i = 2; i <= n; i++){
		if(!c[i]){
			cout << i << " ";
		}
	}
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int num;
	cin >> num;
	composite(num);
	return 0;
}
