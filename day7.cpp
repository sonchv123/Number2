//KMP
#include<bits/stdc++.h>
using namespace std;
string P;
int lenP, nextP[1000111];
string T;
int lenT, aT[1000111];
pair<ll, ll> a[1000111];
int main() {
    cin>>P>>T;
    lenP = P.size();
    lenT = T.size();
    P = ' ' + P;
    T = ' ' + T;
    
    int j = nextP[1] = 0;    
    for(int i = 2; i <= lenP; i++) {
        while(j > 0 && P[j + 1] != P[i]) j = nextP[j];
        if(P[j + 1] == P[i]) j++;
        nextP[i] = j;  
        //cout<<nextP[i]<<" ";  
    }   //cout<<endl;
    
    j = 0;
    for(int i = 1; i <= lenT; i++) {
        while(j > 0 && P[j + 1] != T[i]) j = nextP[j];
        // đưa j về phía sau (thường là về = 0) cho đến khi a(j+1 = 1) == Ti
        if(P[j + 1] == T[i]) j++;
        if(j + 1 > lenP) {
            cout<<i - lenP + 1<<endl;
            j = nextP[j];
        }
        
    }   
}
