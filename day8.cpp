#include<bits/stdc++.h>
using namespace std;
#define fr(i, q) for (int i = 1; i <= q; ++i)
const int N = 20;
int n, S, xs[N], t[N];

void ktra() {
	for (int i = 1; i <= n; ++i)
	    cout << xs[i];
	cout << endl;
	return;
}
void quaylui(int i) {
    if (i > n) { 
        ktra();
        return;
    }
    for (int j = 0; j < 2; ++j) {
        xs[i] = j;
        quaylui(i + 1);
    }
}
int main() {
    cin >> n;
    quaylui(1);
}
    
