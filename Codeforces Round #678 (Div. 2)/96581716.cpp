/*
    Contest Name : Codeforces Round #678 (Div. 2)
    Problem Title : C - Binary Search
    Problem Url : https://codeforces.com/contest/1436/problem/C
    Verdict : Wrong answer on test 10
    Time : 30 ms
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

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();

    int n, x, pos;
    cin >> n >> x >> pos;

    lli k = 1;

    lli mod = 1e9 + 7;
    
    vector<int> ll;
    vector<int> rr;

    int l = 0;
    int r = n;

    while(l < r){
        int mid = (l + r) / 2;

        if(mid <= pos){
            l = mid + 1;
            ll.push_back(mid);
        }else{
            r = mid;
            rr.push_back(mid);
        }

        if(l - 1 == pos) break;
    }

    lli lc = x - 1;
    lli rc = n - x;

    rep(i, 0, ll.size() - 1){
        k *= lc;
        lc--;
        k %= mod;
    }

    rep(i, 0, rr.size()){
        k *= rc;
        rc--;
        k %= mod;
    }

    int ls = ll.size();
    int rs = rr.size();

    rep1(i, 1, n - ls - rs){
        k *= i;
        k %= mod;
    }

    cout << k;
}