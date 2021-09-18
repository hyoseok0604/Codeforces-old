/*
    Contest Name : Educational Codeforces Round 93 (Rated for Div. 2)
    Problem Title : D - Colored Rectangles
    Problem Url : https://codeforces.com/contest/1398/problem/D
    Verdict : Time limit exceeded on test 8
    Time : 2000 ms
    Memory : 0 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))
#define piii pair<lli, pair<lli, lli>>
#define piiii pair<pair<lli, lli>, pair<lli, lli>>
#define ff first
#define ss second
#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

vector<int> R(200);
vector<int> G(200);
vector<int> B(200);

int cr, cg, cb;

lli f(int r, int g, int b){
    if((r == cr && g == cg) || (r == cr && b == cb) || (g == cg && b == cb)){
        return 0;
    }

    lli rg = R[r] * G[g];
    lli gb = G[g] * B[b];
    lli br = B[b] * R[r];
    lli res = 0;
    if(r != cr && g != cg) uMax(res, rg + f(r + 1, g + 1, b));
    if(r != cr && b != cb) uMax(res, br + f(r + 1, g, b + 1));
    if(g != cg && b != cb) uMax(res, gb + f(r, g + 1, b + 1));

    return res;
}

int main(){
    fastIO();

    cin >> cr >> cg >> cb;

    rep(i, 0, cr){
        cin >> R[i];
    }
    rep(i, 0, cg){
        cin >> G[i];
    }
    rep(i, 0, cb){
        cin >> B[i];
    }

    sort(R.begin(), R.end(), greater<lli>());
    sort(G.begin(), G.end(), greater<lli>());
    sort(B.begin(), B.end(), greater<lli>());

    cout << f(0, 0, 0);
}