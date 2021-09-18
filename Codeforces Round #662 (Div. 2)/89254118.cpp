/*
    Contest Name : Codeforces Round #662 (Div. 2)
    Problem Title : D - Rarity and New Dress
    Problem Url : https://codeforces.com/contest/1393/problem/D
    Verdict : Runtime error on pretest 5
    Time : 30 ms
    Memory : 4600 KB
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
#define print(a) cout << (a)
#define println(a) cout << (a) << '\n'

int main(){
    fastIO();

    
        int n, m;
        cin >> n >> m;

        char arr[n+2][m+2];
        mset(0, arr);
        rep1(i, 1, n){
            string s;
            cin >> s;
            rep1(j, 1, m){
                arr[i][j] = s[j-1];
            }
        }

        int arr2[n+2][m+2][4];

        rep(i, 0, n+2){
            rep(j, 0, m+2){
                rep(k, 0, 4){
                    arr2[i][j][k] = 1;
                }
            }
        }

        rep1(i, 1, n){
            rep1(j, 1, m){
                if(arr[i][j] == arr[i][j-1]) arr2[i][j][0] = arr2[i][j-1][0] + 1;
            }
        }

        rep1(i, 1, n){
            rep2(j, m, 1){
                if(arr[i][j] == arr[i][j+1]) arr2[i][j][1] = arr2[i][j+1][1] + 1;
            }
        }

        rep1(j, 1, n){
            rep1(i, 1, m){
                if(arr[i][j] == arr[i-1][j]) arr2[i][j][2] = arr2[i-1][j][2] + 1;
            }
        }

        rep1(j, 1, n){
            rep2(i, m, 1){
                if(arr[i][j] == arr[i+1][j]) arr2[i][j][3] = arr2[i+1][j][3] + 1;
            }
        }

        lli ans = 0;
        rep1(i, 1, n){
            rep1(j, 1, m){
                int k = min(min(arr2[i][j][0], arr2[i][j][1]), min(arr2[i][j][2], arr2[i][j][3]));
                // cout << k << ' ';
                ans += k;
            }
        }

        cout << ans;
    
}