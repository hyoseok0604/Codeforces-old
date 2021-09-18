/*
    Contest Name : Codeforces Raif Round 1 (Div. 1 + Div. 2)
    Problem Title : E - Carrots for Rabbits
    Problem Url : https://codeforces.com/contest/1428/problem/E
    Verdict : Wrong answer on pretest 3
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

    int n, k;
    cin >> n >> k;

    priority_queue<int> pq;
    rep(i, 0, n){
        int a;
        cin >> a;
        pq.push(a);
    }

    while(pq.size() < k){
        int a = pq.top();
        pq.pop();
        pq.push(a / 2);
        pq.push(a - a / 2);
    }

    lli ans = 0;
    while(!pq.empty()){
        int a = pq.top();
        ans += a * a;
        pq.pop();
    }
    cout << ans;
}