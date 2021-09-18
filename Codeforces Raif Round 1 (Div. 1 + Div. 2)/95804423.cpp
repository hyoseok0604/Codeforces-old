/*
    Contest Name : Codeforces Raif Round 1 (Div. 1 + Div. 2)
    Problem Title : E - Carrots for Rabbits
    Problem Url : https://codeforces.com/contest/1428/problem/E
    Verdict : Wrong answer on pretest 4
    Time : 46 ms
    Memory : 1600 KB
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

    lli n, k;
    cin >> n >> k;

    priority_queue<lli> pq;
    rep(i, 0, n){
        lli a;
        cin >> a;
        pq.push(a);
    }

    while(pq.size() < k){
        lli a = pq.top();
        pq.pop();
        lli b = 1;

        if(pq.size() > 0) b = pq.top();

        lli l = 2;
        while(pq.size() + l < k && (a / l) >= b && a > l + 1){
            l++;
        }

        //cout << a << ' ' << l << '\n';

        rep(i, 0, a - (a / l * l)){
            pq.push(a / l + 1);
            //cout2("push", a / l + 1);
        }

        rep(i, 0, l - a + (a / l * l)){
            pq.push(a / l);
            //cout2("push", a / l);
        }
    }

    lli ans = 0;
    while(!pq.empty()){
        lli a = pq.top();
        //cout << a << ' ';
        ans += a * a;
        pq.pop();
    }
    cout << ans;
}