#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<(i%2);
        }
        cout<<endl;
    }
    
    return 0;
}