/*
    Contest Name : Codeforces Round #694 (Div. 2)
    Problem Title : E - Strange Shuffle
    Problem Url : https://codeforces.com/contest/1471/problem/E
    Verdict : Wrong answer on pretest 3
    Time : 202 ms
    Memory : 200 KB
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

    vector<lli> now(n, k);
    vector<lli> next(n, 0);

    cout << "? 1" << endl;
    cout.flush();

    lli a;
    cin >> a;

    vector<int> p;

    rep1(g, 1, 999){
        next = vector<lli>(n, 0);

        rep(i, 0, n){
            if(i == 0){
                next[i+1] += now[i];
                continue;
            }
            next[(i + 1) % n] += (now[i] + 1) / 2;
            next[(i - 1 + n) % n] += now[i] / 2;
        }
        
        now = next;

        cout << "? 1" << endl;
        cin >> a;

        if(a != k){
            rep(i, 0, n){
                if(now[i] == a){
                    p.push_back(i);
                }
            }
            break;
        }
    }

    if(p.size() != 0){
        cout << "! " << ((n - p[0]) % n + 1);
    }else{
        next = vector<lli>(n, 0);

        rep(i, 0, n){
            if(i == 0){
                next[i+1] += now[i];
                continue;
            }
            next[(i + 1) % n] += (now[i] + 1) / 2;
            next[(i - 1 + n) % n] += now[i] / 2;
        }
        
        now = next;
        
        int pos = n / 2 + 1;
        cout << "? " << pos << endl;
        cout.flush();

        cin >> a;
        rep(i, 0, n){
            if(now[i] == a){
                p.push_back(i);
            }

            cout << "! " << ((n - p[0] + pos) % n + 1);
        }
    }
}