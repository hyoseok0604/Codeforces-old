/*
    Contest Name : Codeforces Round #662 (Div. 2)
    Problem Title : B - Applejack and Storages
    Problem Url : https://codeforces.com/contest/1393/problem/B
    Verdict : Accepted
    Time : 93 ms
    Memory : 4000 KB
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

    int n;
    cin >> n;

    int ar[100001];
    mset(0, ar);

    int two = 0;
    int four = 0;
    int six = 0;
    int eight = 0;
    rep(i, 0, n){
        int k;
        cin >> k;
        ar[k]++;
        if(ar[k] == 8){
            eight++;
            six--;
        }else if(ar[k] == 6){
            six++;
            four--;
        }else if(ar[k] == 4){
            four++;
            two--;
        }else if(ar[k] == 2){
            two++;
        }
    }

    int q;
    cin >> q;
    rep(i, 0, q){
        char c;
        int k;
        cin >> c >> k;
        
        if(c == '+'){
            ar[k]++;
            if(ar[k] == 8){
                eight++;
                six--;
            }else if(ar[k] == 6){
                six++;
                four--;
            }else if(ar[k] == 4){
                four++;
                two--;
            }else if(ar[k] == 2){
                two++;
            }
        }else{
            if(ar[k] == 8){
                eight--;
                six++;
            }else if(ar[k] == 6){
                six--;
                four++;
            }else if(ar[k] == 4){
                four--;
                two++;
            }else if(ar[k] == 2){
                two--;
            }
            ar[k]--;
        }
        if(four > 0 || six > 0 || eight > 0){
            if(two * 2 + four * 4 + six * 6 + eight * 8 >= 8) cout << "YES\n";
            else cout << "NO\n";
        }else{
            cout << "NO\n";
        }
    }
}