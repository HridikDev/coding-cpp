#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(i%2==0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
    
    return 0;
}