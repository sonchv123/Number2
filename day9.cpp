#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[10001111], b[10001111], dz[10001111];
ll k, m;
string S;
int main() {
    cin>>S;
    cin>>k;
    n = S.size();
    S = ' ' + S;
    for(int i = 1; i <= n; i++) 
        a[i] = int(S[i]) - 48;
        a[0] = a[1];
    for(int i = 0; i <= n; i++) 
        b[i] = i+1;
    for(int i = 1; i <= n - 1; i++) {
        if(m == k) break;
        if(dz[i] == 0)
            if(a[i] > a[b[i]]) {
                dz[i] = -1;
                int j = i;
                while(j > 2 && dz[j] == -1)
                j--;
                b[j] = b[i];
                i = j - 1;
                m++;        
            }
    }
    for(int i = n ; i >= 1; i--) {
        if(m == k) break;
        if(dz[i] == 0) {
            dz[i] = - 1;
            m++;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(dz[i] != -1) 
        cout<<a[i];   
    }
}
