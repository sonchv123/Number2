//Tìm số đẹp (số powerful)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn = 10000010;
bool v[maxn];
int sp[maxn];
int fp[maxn];
int fb[maxn];
ll n, m, dem;
//int a[1000][1000];
int b[maxn];

void sieve() {
    for(ll i = 2; i < maxn; i = i + 2)
       sp[i] = 2;
        
    for(ll i = 3; i < maxn; i = i + 2) {
        if(!v[i]) {
            sp[i] = i;
            for(ll j = i; (i * j) < maxn; j = j + 2) {
                if(!v[j * i]) 
                    v[j * i] = true,
                   sp[j * i] = i;
            }
        }
    } 
}

void fibo(){
    fp[0] = 0; fb[0] = 1;
    fp[1] = 1; fb[1] = 1;

    for(int i = 2; i <= 35; i++) {
        fp[i] = fp[i - 1] + fp[i - 2]; 
        fb[fp[i]] = 1;
    }    
}


int main() {
    sieve();
    //fibo();
    cin>>n>>m; if(n > m) swap(n, m);
    for(int i = n; i <= m; i++) {
        if(sp[i] == i && i != 0) {
            ll j = i;
            ll newi = 0;
            while(j > 0) {
                ll a = j % 10;
                newi  = newi * 10 + a;
                j = j / 10;
            }
            if(sp[newi] == newi && newi != 0 && newi != i)
            cout<<i<<" ";   
        }
    }
}
























