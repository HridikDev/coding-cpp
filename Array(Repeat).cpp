#include<bits/stdc++.h>

using namespace std;

int main() {

	int n,m,i,j,count=0;
	cin>>n>>m;

	int a[n],b[m];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int j=0; j<m; j++) {
		cin>>b[j];
	}
	for(i=0; i<n; i++) {
	    int flag=0;
		for(j=0; j<m; j++) {
			if(a[i]==b[j]) {
				flag=1;
				break;
			}
		}
		if(flag==0) {
		    count++;
			cout<<a[i]<<" ";
		}
	}
	for(j=0; j<m; j++) {
	    int flag=0;
		for(i=0; i<n; i++) {
			if(a[i]==b[j]) {
				flag=1;
				break;
			}
		}
		if(flag==0) {
		    count++;
			cout<<b[j]<<" ";
		}
	}

	return 0;
}