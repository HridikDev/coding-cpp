#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N,i,j;
    cin>>N;
    
    for(i=0;i<N;i++){
        for(j=0;j<=N-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}