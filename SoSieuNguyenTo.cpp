#include <bits/stdc++.h>

using namespace std;
//ham sang so nguyen to;
bool isPrime[1e7+1];
void sang(){
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i*i <= n; i++){
		isPrime[i] = true;
	}
	for(int i = 2; i*i <= n; i++){
		if(isPrime[i]){
			for(int j = i*i; j < n; j += i){
				isPrime[j] = false;
			}
		}
	}
} 

//sang so nguyen to ver2
bool isPrime[1e7+1];
vector<int> primes;

int main(){
	int n = 100000000;
	int cnt = 0;
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i <n ; i++){
		isPrime[i] = true;
	}
	for(int i = 2; i <n ; i++){
	 	if(isPrime[i]) primes.push_back(i);
		for(int p : primes){
			if(i*p > n) break;
			isPrime[i*p] = false;
			cnt ++;
			if(i % p == 0) break;
		}
	}
	for(int p : primes){
		cout << p << endl;
	}
}

//stack
#include <stack>

int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	while(!s.empty()){
	cout << s.top()<<endl;
	s.pop();
	}
}
//sinh xau nhi phan

int n;
char ans[21];
void backtrack(int pos){
	if(pos > n){
		for(int i = 1; i <= n ;i++){
			cout << asn[i];
		}
		cout << endl;
		return;
	}
	for(char i = '0'; i <= '1'; i++){
		ans[pos] = i;
		backtrack(pos + 1);
	}
}
int main(){
	cin >> n;
	backtrack(1);
	return 0;
}
