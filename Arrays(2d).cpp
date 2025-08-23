#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }
    int k,i,j;
    cin>>k;
    int flag =0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(k==a[i][j]) {
                cout<<"("<<i<<","<<" "<<j<<")";
                flag =1;
                break;
            }
        }

    }
    if(flag ==0){
        cout<<"(-1,-1)";
    }

    return 0;
}