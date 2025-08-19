#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%400==0){
        cout<<n;
    }
    else if(n%100!=0 && n%4==0){
        cout<<n;
    }
    else{
        cout<<0;
    }
    return 0;
}