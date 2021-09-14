/*
    Contest Name : Codeforces Round #705 (Div. 2)
    Problem Title : D - GCD of an Array
    Problem Url : https://codeforces.com/contest/1493/problem/D
    Verdict : Wrong answer on pretest 3
    Time : 15 ms
    Memory : 6300 KB
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

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

lli arr[800000], size;

void construct(){
    for(lli i=size; i>=1; i--){
        arr[i] = __gcd(arr[i*2], arr[i*2+1]);
    }
}

void update(lli idx, lli val){
    idx = size + idx;
    arr[idx] *= val;
    arr[idx] %= 1000000007;

    while(idx > 1){
        idx /= 2;
        arr[idx] = __gcd(arr[idx*2], arr[idx*2+1]);
    }
}

lli solve(lli L, lli R, lli vtx, lli nL, lli nR){
    if(nL > R || nR < L) return 0;
    if(L <= nL && nR <= R) return arr[vtx];

    int mid = (nL+nR)/2;
    return __gcd(solve(L,R,vtx*2,nL,mid), solve(L,R,vtx*2+1,mid+1,nR));
}


int main(){
    fastIO();

    int n, q;
    cin >> n >> q;

    int lv = 1;
    while(size + 1 < n){
        size += lv;
        lv *= 2;
    }

    rep1(i, 1, n){
        cin >> arr[size + i];
    }

    construct();

    rep(i, 0, q){
        int idx;
        lli x;
        cin >> idx >> x;

        update(idx, x);
        cout << arr[1] << '\n';
    }
}