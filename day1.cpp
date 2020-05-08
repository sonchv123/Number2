#include<iostream>
#include<math.h>
#define ll long long
const ll maxn = 100111;
using namespace std;
ll n;
ll sp[maxn], a[maxn], b[maxn];
ll maxx, tong, dz;
int main() {
    cin>>n;
    for(int i = 1; i <= n ; i++) cin>> a[i];
    for(int i = 1; i <= n ; i++) {
        cin>> b[i];
        b[i] = b[i - 1] + b[i];
    }
    
    a[0] = 1000000001;
    for(int i = 1; i <= n ; i++) 
        if(a[i] >= a[i - 1]) 
            sp[i] = sp[i - 1]; 
        else 
            sp[i] = i;  
    for(int i = n; i >= 1 ; i--) 
        while(a[i] >= a[sp[i] - 1]) 
            sp[i] = sp[sp[i]-1];    
        
    for(int i = 1; i <= n ; i++) {
        //cout<<sp[i];
        tong = b[i] - b[sp[i] - 1];
        if(tong > maxx) {
            maxx = tong;
            dz = i;
        }
    }
    cout<<sp[dz] - 1<<" "<<dz - 1;
}
