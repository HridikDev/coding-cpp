#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,i,j,k;
    cin>>n;
    for(i=0;i<=n/2;i++){
        
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(k=0;k<n-2*i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
     for(i=n/2-1;i>=0;i--){
        
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(k=0;k<n-2*i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}