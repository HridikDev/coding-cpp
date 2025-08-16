#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,i,j,count=0;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}