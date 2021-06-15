#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int N, int B){
    int value = 0;
    vector<int> v;
    for(int i=1; i<=N; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i=1; i<=N; i++){
        if(v[i-1] <= B){
            value += 1;
            B -= v[i-1];
        }
    }
    return value;
}


int main(){
    int t;
    cin >> t;
    for(int x=1; x<=t; x++){
        int N, B;
        cin >> N >> B;
        int ans = solve(N,B);
        cout << "Case" << " " << "#" << x << ":" << " " << ans <<endl;
    }
}