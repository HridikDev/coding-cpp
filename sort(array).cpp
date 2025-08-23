#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,temp,i,j;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}