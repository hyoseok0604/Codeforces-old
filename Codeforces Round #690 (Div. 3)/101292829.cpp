/*
    Contest Name : Codeforces Round #690 (Div. 3)
    Problem Title : D - Add to Neighbour and Remove
    Problem Url : https://codeforces.com/contest/1462/problem/D
    Verdict : Wrong answer on test 2
    Time : 31 ms
    Memory : 100 KB
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

    TC{
        int n;
        cin >> n;

        vector<int> v(n);
        rep(i, 0, n) cin >> v[i];

        bool check = true;
        rep(i, 0, n-1){
            check &= v[i] == v[i+1];
        }

        if(check){
            cout << "0\n";
            continue;
        }

        rep(i, 0, n-1){
            vector<int> tmp(v);
            sort(tmp.begin(), tmp.end());

            int idx = find(v.begin(), v.end(), tmp[0]) - v.begin();

            if(idx == 0) v[idx+1] += v[idx];
            else if(idx == v.size() - 1) v[idx-1] += v[idx];
            else{
                if(v[idx-1] <= v[idx+1]) v[idx-1] += v[idx];
                else v[idx+1] += v[idx];
            }

            v.erase(v.begin() + idx);

            check = true;

            rep(i, 0, v.size() - 1){
                check &= v[i] == v[i+1];
            }

            if(check){
                cout << i + 1 << '\n';
                break;
            }
        }
    }
}