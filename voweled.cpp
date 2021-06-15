#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char v[100];
    cin.getline(v,sizeof(v));
    string word = (string) v;
    istringstream iss(word);
    string subs;
    int score;
    do{
        iss >> subs;
        int subscore;
        for(string::size_type i=0; i< subs.size(); i++){
            if(subs[i] == "a"){

            }
        }
    } while(iss);
    return 0;
}