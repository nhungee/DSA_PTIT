#include <bits/stdc++.h>

using namespace std;
int n;
long long k;

long long Fibo[93];
long long fibo(int n){
	if(Fibo[n] != 0) return Fibo[n];
	if(n < 2) return n;
	long long tmp = fibo(n-1) + fibo(n-2);
	Fibo[n] = tmp;
	return Fibo[n];
}
char tim(int N,long long K){
	if(N==1) return 'A';
	if(N==2) return 'B';
	if(K<=Fibo[N-2]) tim(N-2,K);
	else tim(N-1,K-Fibo[N-2]);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << fibo(n) << endl;
		char c  = tim(n, k);
		cout << c << endl;
	}
}
