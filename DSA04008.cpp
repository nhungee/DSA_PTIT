#include <bits/stdc++.h>
long long MOD = 1e9+7;
using namespace std;
struct matrix{
	int a[3][3];
};

matrix mulmatrix(matrix A, matrix B){
	matrix res;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j< 2; j++){
			res.a[i][j] = 0;
			for(int k = 0; k < 2; k++){
				res.a[i][j] = (res[i][j] + (A.a[i][k] * B.a[k][j]) % MOD) %MOD;
			}
		}
	}
	return res;
}

matrix powermatrix(matrix a, int p){
	if(n == 0) return 1;
	matrix tmp = power()
}
int main(){
	int t;
	cin >> t;
	while(t--){
		
	}
}
