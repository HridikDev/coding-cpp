#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N,i,j;
    cin>>N;
    for(i=0;i<N;i++){
        for(j=0;j<=N-1;j++){
            if(i==0||j==0||i==N-1||j==N-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}