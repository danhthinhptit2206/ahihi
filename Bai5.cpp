#include<bits/stdc++.h>
using namespace std;
bool isPrime( string n){

    for ( int j = 0; j<n.length();j++){
        if (n[j] != '2' || n[j] != '3' || n[j] != '5' || n[j] != '7')
        return false;
    }
    return true;
}
int main(){
    string S;
    getline(cin,S);
    vector<string> v;
    for ( int i = 0; i<S.length();i++){
        string empty = "";
        while(S[i] != ' ' && i<S.length() )
            empty += S[i++];
        if(empty != "") v.push_back(empty);
    }

    for ( int i = 0; i<v.size(); i++){
        int test = 0;
        for ( int j = 0; j<v[i].length();j++){
                if (v[i][j] == '2' || v[i][j] == '3' || v[i][j] == '5' || v[i][j] == '7')
                test++;
            }
        if (test == v[i].length()){
            int count = 1;
            for ( int j = i+1; j<v.size(); j++){
                if (v[i] == v[j]){
                    count++;
                    v[j] = "1";
                }
            }
            cout << v[i] << " " << count << endl;
        }
    }
}    