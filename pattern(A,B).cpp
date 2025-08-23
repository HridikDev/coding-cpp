#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,t=64;
    cin>>n;
    for(int i=1;i<=n;i++){
           t=t+1;
        for(int k=1;k<=(n-i);k++){
            cout<<" ";
        }
        for(int j=1;j<2*i;j++){
            if(j<i) {
                cout<<char(t);
                t=t-1;
            }else if(i==j){
                cout<<char(t);
            }else{
                t=t+1;
                cout<<char(t);
            }
        }
        cout<<endl;
    }
     return 0;
}