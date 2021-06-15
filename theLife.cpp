#include <iostream>
using namespace std;

int main(){
    int n;
    for(int i=0; i<100; i++){
        cin >> n;
        if(i == 42){
            break;
        }
        else cout<<n<<endl;
    }
    
}