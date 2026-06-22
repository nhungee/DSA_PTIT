#include <bits/stdc++.h>

using namespace std;
int n;

void chuyen(char a,char b, char c){
	cout << a << " -> " << c << endl;
}
void Try(int n, char a, char b, char c){
	if(n == 1){
		chuyen(a, b, c);
		return;
	}
	Try(n-1, a, c, b);
	chuyen(a, b, c);
	Try(n-1, b, a, c);
	
	
}
int main(){
	cin >> n;
	Try(n, 'A', 'B', 'C');
}
