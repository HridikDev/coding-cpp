#include<bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>a[i][j];
		}

	}
	int x,y;
	cin>>x>>y;
	int b[x][y];
	for(int i=0; i<x; i++) {
		for(int j=0; j<y; j++) {
			cin>>b[i][j];
		}
	}
	
	if (m != x) {
        cout << "Matrix multiplication not possible (columns of A != rows of B)" << endl;
        return 0;
    }
    
	int result[n][y]={0};
	for(int i=0; i<n; i++) {
		for(int j=0; j<y; j++) {
			for(int k=0; k<m; k++) {
				result[i][j]+=a[i][k] * b[k][j];
			}
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<y; j++) {
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}