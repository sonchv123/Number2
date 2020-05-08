#include<iostream>
using namespace std;
int n;
int a[1000111];

int main() {
    cin>>n;
    for(int i = 1; i <= n; i++) {
	    int nhap; cin>>nhap;
	    if(a[nhap] == 0)
	    cout<<nhap<<" ";
	    a[nhap]++;
    }
}
