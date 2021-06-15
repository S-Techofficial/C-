#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    if(T>=1 && T<=50){
        for(int j=1; j<=T; j++){
        string S;
        cin >> S;

        int res = 0;
        
        int flag=0;
        for(int i=0; i<S.length(); i++){
            if(S[i] == '1' && flag == 0){
                res++;
                flag = 1;
            } else if(S[i] == '0' && flag == 1){
                flag = 0;
            }
        }

        
        cout << res << endl;
        }
    }
    
}