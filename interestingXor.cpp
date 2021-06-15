#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getMaxXor(int C){
    int A = pow(2,floor(log2(C))) - 1;
    int B = A^C;
    return A*B;

}

int main(){
    int T;
    cin >> T;
    for(int i=1; i<=T; i++){
        int C;
        cin >> C;
        int ans = getMaxXor(C);
        cout << ans << endl;
    }
}