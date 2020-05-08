//HASH
#include<bits/stdc++.h>
#define pb push_back
#define fi first
#define se second,m,
#define int long long
 
using namespace std;
 
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef vector<int> vi;
typedef vector<ii> vii;
 
const int oo = 1e17 + 7;
const int maxN = 1e6 + 1;
const int MOD = 1e9 + 7;
const int base = 26;
 
int hashA[maxN], hashB, pw[maxN];
string A, B;
 
int getHash(int l, int r)
{
	return (hashA[r] - hashA[l - 1] * pw[r - l + 1] + MOD * MOD) % MOD;
}
 
 
main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> A;	A = " " + A;	
	cin >> B;	B = " " + B;
	int lenA = A.size() - 1;
	int lenB = B.size() - 1;
	pw[0] = 1;
	for (int i = 1; i <= lenA; i++) 
		pw[i] = (pw[i - 1] * base) % MOD;
	
	for (int i = 1; i <= lenA; i++)
		hashA[i] = (hashA[i - 1] * base + (A[i] - 'a')) % MOD;
	
	for (int i = 1; i <= lenB; i++)
		hashB = (hashB * base + (B[i] - 'a')) % MOD;
	
	for (int i = 1; i <= lenA - lenB + 1; i++)
	{
		int P = getHash(i, i + lenB - 1);
		if (P == hashB)	cout << i << " ";
	}
	return 0;
}
