#include <bits/stdc++.h>

using namespace std;

int partition(int arr[],int l,int r){
	int x=arr[r]; int i=l-1;
	for(int j=l;j<=r-1;j++){
		if(arr[j]<=x){
			i++; 
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[r]);
	return i+1;
}
void QS(int a[], int l, int r){
	if(l < r){
		int pivot = partition(a, l, r);
		QS(a, l, pivot-1);
		QS(a, pivot+1, r);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n; 
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		QS(a, 0, n);
		for(int i = 0; i < n ;i++){
			cout << a[i] << " ";
		}
		cout  << endl;
	}
}
