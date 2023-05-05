#include<bits/stdc++.h>
using namespace std;

#define endl "\n";
#define int long long

int n,k;
//map<int, int> freq;
int freq[10];
vector<int> currentPermutation;

void rec(int level) {
    if (level == n) {
        k--;
        if (k == 0) {
            for(int e:currentPermutation) {
                cout<<e<<" ";
            }
            cout<<endl;
        }
        return;
    }

    for (int e = 1; e <= n; e++) {
        if (freq[e] == 0) {
            freq[e] = 1;
            currentPermutation.push_back(e);
            rec(level+1);
            currentPermutation.pop_back();
            freq[e] = 0;
        }
    }
}

void solve() {
    cin>>n>>k;

    int temp;
    // for (size_t i = 0; i < n; i++){
    //     //cin>>temp;
    //     freq[i+1]++;
    // }

    rec(0);
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int cases;
    //cin>>cases;
    //while(cases--) 
    solve();

}