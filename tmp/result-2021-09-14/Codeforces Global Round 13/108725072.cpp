/*
    Contest Name : Codeforces Global Round 13
    Problem Title : C - Pekora and Trampoline
    Problem Url : https://codeforces.com/contest/1491/problem/C
    Verdict : Time limit exceeded on pretest 2
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

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int parent[5005];

int find(int x){
    if (parent[x] < 0){
        return x;
    }else{
        int y = find(parent[x]);
        parent[x] = y;
        return y;
    }
}

void unio(int x, int y){
    x = find(x);
    y = find(y);

    if (x == y)
    return;

    // parent[x], parent[y] 값은 음수이므로 값이 작은 경우가 더 높이가 큰 노드이다.
    if (parent[x] < parent[y]){
        parent[x] += parent[y];
        parent[y] = x;
    }
    else {
        parent[y] += parent[x];
        parent[x] = y;
    }
}

int main(){
    fastIO();

    TC{
        int n;
        cin >> n;

        mset(-1, parent);

        int s[n];
        lli k = 0;
        int noone = n;
        rep(i, 0, n){
            cin >> s[i], k += s[i];
            if(s[i] != 1 && noone == n) noone = i;
        }

        int t = n;
        rep2(i, n-1, 0){
            if(s[i] == 1) unio(i, i + 1);
        }

        lli ans = 0;

        while(noone < n){
            if(s[noone] > n - noone){
                ans += s[noone] - (n - noone);
                s[noone] = n - noone;
            }

            while(s[noone] != 1){
                rep(i, noone, n){
                    int tmp = s[i];
                    if(s[i] > 1){
                        s[i]--;
                        if(s[i] == 1) unio(i, i + 1);
                    }else i = find(i);

                    

                    i += tmp - 1;
                }
                ans++;
            }

            noone++;
        }

        cout << ans << '\n';
    }
}