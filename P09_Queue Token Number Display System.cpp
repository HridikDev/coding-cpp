#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,i,j,s=0;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            s=i+1;
            cout<<s<<" ";
        }
    cout<<endl;
    }
    return 0;

}