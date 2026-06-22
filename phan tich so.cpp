#include <bits/stdc++.h>
using namespace std;
//đồ thị vô hướng 
//type == 1 : chuyển đổi một đồ thị dưới dạng ma trận kề thành dạng danh sách cạnh và danh sách kề 
//type == 2 : chuyển đổi một đồ thị dưới dạng danh sách cạnh thành dạng ma trận kề và danh sách kề 
//type == 3 : Chuyển đồ thị cho dưới dạng danh sách kề thành ma trận kề và danh sách cạnh
int a[105][105];     // ma trận kề
int ke[105][105];    // danh sách kề
int deg[105];        // số đỉnh kề của mỗi đỉnh
int u[10000], v[10000]; // danh sách cạnh

int main() {
    int type;
    cout << "Nhap type : ";
    cin >> type;
//trường hợp 1
    if (type == 1) {
        int n;
        cout << "Nhap n : ";
        cin >> n;

        // Nhập ma trận kề
        cout << "nhap ma tran ke " << endl;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];

        int m = 0; // số cạnh

        // Khởi tạo
        for (int i = 1; i <= n; i++)
            deg[i] = 0;

        // Chuyển sang danh sách cạnh và danh sách kề
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (a[i][j] == 1) {
                    m++;
                    u[m] = i;
                    v[m] = j;

                    ke[i][++deg[i]] = j;
                    ke[j][++deg[j]] = i;
                }
            }
        }

        cout << "danh sach canh" << endl;
        cout << n << " " << m << "\n";
        for (int i = 1; i <= m; i++)
            cout << u[i] << " " << v[i] << "\n";

        cout << "Danh sach ke" << endl;
        cout << n << "\n";
        for (int i = 1; i <= n; i++) {
            cout << "ke(" << i << ") = {";
            for (int j = 1; j <= deg[i]; j++){
            	if (j > 1) cout << ",";
            	cout << "" << ke[i][j] ;
			}        
            cout << "}";
            cout << "\n";
        }
    }
//Trường hợp 2
    else if (type == 2) {
        int n, m;
        cin >> n >> m;

        // Khởi tạo
        for (int i = 1; i <= n; i++) {
            deg[i] = 0;
            for (int j = 1; j <= n; j++)
                a[i][j] = 0;
        }

        cout << "Nhap danh sach canh" << endl;
        for (int i = 1; i <= m; i++) {
            cin >> u[i] >> v[i];
            a[u[i]][v[i]] = 1;
            a[v[i]][u[i]] = 1;

            ke[u[i]][++deg[u[i]]] = v[i];
            ke[v[i]][++deg[v[i]]] = u[i];
        }

        cout << "Ma tran ke" << endl;
        cout << n << "\n";
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
                cout << a[i][j] << " ";
            cout << "\n";
        }

        cout << "Danh sach ke" << endl;
        cout << n << "\n";
        for (int i = 1; i <= n; i++) {
            cout << "ke(" << i << ") = {";
            for (int j = 1; j <= deg[i]; j++){
            	if (j > 1) cout << ",";
            	cout << "" << ke[i][j] ;
			}        
            cout << "}";
            cout << "\n";
        }
    }
	else if (type == 3) {
	    int n;
	    cin >> n;
	
	    // Khởi tạo
	    for (int i = 1; i <= n; i++) {
	        deg[i] = 0;
	        for (int j = 1; j <= n; j++)
	            a[i][j] = 0;
	    }
	
	    // Nhập danh sách kề
	    for (int i = 1; i <= n; i++) {
	        int x, k;
	        cin >> x >> k;     // x: đỉnh, k: số đỉnh kề
	
	        deg[x] = k;
	        for (int j = 1; j <= k; j++) {
	            cin >> ke[x][j];
	        }
	    }
	
	    int m = 0; // số cạnh
	
	    // Chuyển sang ma trận kề + danh sách cạnh
	    for (int i = 1; i <= n; i++) {
	        for (int j = 1; j <= deg[i]; j++) {
	            int t = ke[i][j];
	            a[i][t] = a[t][i] = 1;   // đồ thị vô hướng
	
	            if (i < t) {             // tránh trùng cạnh
	                m++;
	                u[m] = i;
	                v[m] = t;
	            }
	        }
	    }
	
	    // In ma trận kề
	    cout << "Ma tran ke\n";
	    cout << n << "\n";
	    for (int i = 1; i <= n; i++) {
	        for (int j = 1; j <= n; j++)
	            cout << a[i][j] << " ";
	        cout << "\n";
	    }
	
	    // In danh sách cạnh
	    cout << "Danh sach canh\n";
	    cout << "Dau dinh  Dau cuoi\n";
	    for (int i = 1; i <= m; i++)
	        cout << u[i] << "        " << v[i] << "\n";
	}
		

    return 0;
}