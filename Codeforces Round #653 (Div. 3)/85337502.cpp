/*
    Contest Name : Codeforces Round #653 (Div. 3)
    Problem Title : B - Multiply by 2, divide by 6
    Problem Url : https://codeforces.com/contest/1374/problem/B
    Verdict : Accepted
    Time : 124 ms
    Memory : 3900 KB
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int two = 0, three = 0;
        int n;
        cin >> n;
        bool flag = true;
        while(n > 1 && flag){
            if(n % 3 == 0){
                three++;
                n /= 3;
            }else if(n % 2 == 0){
                two++;
                n /= 2;
            }else{
                flag = false;
            }
        }
        if(flag){
            if(two <= three) cout << three - two + three;
            else cout << -1;
        }else{
            cout << -1;
        }
        cout << '\n';
    }
}