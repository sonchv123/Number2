
#include<bits/stdc++.h>
using namespace std;

string T;
string P;
int lenP, lenT;
int demP, demT;
int dpr;
pair<int , string> vsP[1000111];
map<string, int> umap;

int main() {
	getline(cin, P); lenP = P.size(); P = ' ' + P;
	getline(cin, T); lenT = T.size(); T = ' ' + T;
	
	for(int i = 1; i <= lenT; i++) {
	    if(T[i] != ' ' && T[i-1] == ' ') {
	        int k = 0;
	        for(int j = i; j <= lenT; j++) {
	            if(T[j] == ' ') break;
	            k++;    
	        }
	        umap[T.substr(i, k)] = 31;
	    }
	}
	for(int i = 1; i <= lenP; i++) {
	    if(P[i] != ' ' && P[i-1] == ' ') {
	        int k = 0;
	        for(int j = i; j <= lenP; j++) {
	            if(P[j] == ' ') break;
	            k++;    
	        }
	        if(umap[P.substr(i, k)] != 31) {
	            dpr++;
	            vsP[dpr].first = int(P[i]);
	            vsP[dpr].second = P.substr(i, k);
	            //vsP.push_back( make_pair(int(P[i]), P.substr(i, k)) );
	        }
	    }
	}
	sort(vsP + 1, vsP + dpr + 1);
	for(int i = 1; i <= dpr; i++) {
	    if(umap[vsP[i].second] != 31) {
	        cout<<vsP[i].second<<" ";
	        umap[vsP[i].second] = 31; 
	    }
    }
}









