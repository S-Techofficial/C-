#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=1; i<=T; i++){
        int N;
        cin >> N;
        vector<int> v;
        for(int j=0; j<N; j++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end()); //Sorting of vector
        
        int ans = 0;
        int temp = 0;
        for(int i=0; i<N; i++){
            //if all element is greater than its index+1 than temp=1 i.e. player looses
            if(i+1 < v[i]){
                temp = 1; 
                break;
            }
            //else difference between each index and its element is incremented to the sum
            ans += (i+1-v[i]);
        }

        // if given all element is greater than first player loose
        if(temp == 1){
            cout << "Second\n";
        }
        else{
            // if value of sum is odd than player first wins
            if(ans % 2 == 1){
                cout << "First\n";
            }
            // else value of sum is even then player second wins
            else{
                cout << "Second\n";
            }
        }
    }
}