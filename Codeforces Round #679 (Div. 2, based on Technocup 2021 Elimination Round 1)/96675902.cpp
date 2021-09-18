/*
    Contest Name : Codeforces Round #679 (Div. 2, based on Technocup 2021 Elimination Round 1)
    Problem Title : D - Shurikens
    Problem Url : https://codeforces.com/contest/1435/problem/D
    Verdict : Accepted
    Time : 92 ms
    Memory : 2600 KB
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

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;
    stack<int> s;

    pair<char, int> q[n * 2];

    rep(i, 0, n * 2){
        char c;
        int m = 0;
        cin >> c;
        if(c == '-') cin >> m;
        q[i] = {c, m};
    }
    
    rep2(i, n * 2 - 1, 0){
        char c = q[i].first;
        if(c == '+'){
            if(pq.empty()) return cout << "NO\n", 0;
            s.push(pq.top());
            pq.pop();
        }else{
            int v = q[i].second;
            pq.push(v);
            if(pq.top() != v) return cout << "NO\n", 0;
        }
    }

    if(s.size() != n) return cout << "NO\n", 0;

    cout << "YES\n";
    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }
}