#include<bits/stdc++.h>
using namespace std;

vector<int> res;

bool prime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void Try(int n){
    // nếu vượt giới hạn thì dừng
    if(n > 1e9) return;

    res.push_back(n);

    // thêm các chữ số vào cuối
    for(int d : {1, 3, 5, 7, 9}){
        int x = n * 10 + d;

        // chỉ sinh tiếp nếu vẫn nguyên tố
        if(prime(x)){
            Try(x);
        }
    }
}

int main(){
    // sinh tất cả số siêu nguyên tố
    Try(2);
    Try(3);
    Try(5);
    Try(7);
    int L, R;
    cin >> L >> R;
    int cnt = 0;
    for(int x : res){
        if(x >= L && x <= R){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}