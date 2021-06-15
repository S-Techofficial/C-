#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans = 0;
    int noOfPackets;
    cin >> noOfPackets;
    while(noOfPackets--){
        int sum=0,n;
        cin >> n;
        if(sum + n > 10){
            ans += 1;
            sum = 0;
        }
        if(sum + n <= 10){
            sum = sum + n;
        }
    }

    cout << ans;
}