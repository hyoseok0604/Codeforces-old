/*
    Contest Name : Codeforces Round #716 (Div. 2)
    Problem Title : C - Product 1 Modulo N
    Problem Url : https://codeforces.com/contest/1514/problem/C
    Verdict : Wrong answer on pretest 1
    Time : 15 ms
    Memory : 400 KB
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

    lli n;
    cin >> n;

    vector<lli> ans;
    vector<lli> primes;

    bool p[100001];
    mset(0, p);

    rep(i, 2, 320){
        for(int j = 2 ; j * i <= 100000 ; j++){
            p[j * i] = true;
        }
    }

    rep(i, 2, 100001) if(!p[i]) primes.push_back(i);

    vector<int> md[n];
    md[1] = {1};

    rep(i, 0, primes.size()){
        if(primes[i] >= n) break;
        rep(j, 0, n){
            if(md[j].size() != 0 && md[j][md[j].size() - 1] != primes[i]){
                int next = (j * primes[i]) % n;
                if(md[next].size() < md[j].size()){
                    md[next] = md[j];
                    md[next].push_back(primes[i]);
                }
            }
        }
    }


    // lli k = 1;

    rep(i, 0, md[1].size()){
        cout << md[1][i] << ' ';
        // k *= md[1][i];
        // k %= n;
        while(i < md[1].size() - 1 && md[1][i] == md[1][i+1]) i++;
    }

    // cout << k;
}