//ma trận xoắn
#include<bits/stdc++.h>
using namespace std;
int n, demn, a[1000][1000];
void matrix(int b[1000][1000],int demnn, int nn2,int ntong) {
    int z = ntong - demnn + 1;
    
    for(int i = demnn; i <= z; i++) {
        b[demnn][i] = nn2;
        //nn2++;
        //cout<<demnn<<" "<<i<<endl;
    }
    for(int i = demnn + 1; i <= z - 1; i++) {
        b[i][z] = nn2;
        //nn2++;
        //cout<<i<<" "<<nn<<endl;
    }
    for(int i = z; i >= demnn; i--) {
        b[z][i] = nn2;
        //nn2++;
        //cout<<z<<" "<<i<<endl;
    }
    for(int i = z - 1; i >= demnn + 1; i--) {
        b[i][demnn] = nn2;
        //nn2++;
        //cout<<i<<" "<<demnn<<endl;
    }
}
int main() {
    cin>>n;
    for(int i = n; i >= 1; i--) {
        demn++; 
        //cout<<a<<" "<<i<<" "<<demn<<" "<<n2<<" "<<n<<endl; 
        matrix(a, demn, i, n * 2 - 1);
        //demn++;
        //n2 = n2 + i * 2 + (i - 2) * 2;
    }   
    //if(n % 2 != 0)  a[n/2+1][n/2+1] = 1;
    
     for(int i = 1; i <= n*2-1; i++) {
        for(int j = 1; j <= n*2-1; j++)
            cout<<a[i][j];
        cout<<endl;
     }
}
    
