/*
    Contest Name : Codeforces Round #646 (Div. 2)
    Problem Title : A - Odd Selection
    Problem Url : https://codeforces.com/contest/1363/problem/A
    Verdict : Wrong answer on pretest 3
    Time : 30 ms
    Memory : 100 KB
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        int c1 = 0, c2 = 0;
        cin >> n >> x;
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
            if(v[i] % 2 == 0) c1++;
            else c2++;
        }
        if(c2 % 2 == 1){
            cout << "Yes\n";
        }else{
            if(x - (c2 - 1) <= c1){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }
    }
}