#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0 ;
    string s ;
    cin>>n;
    while(n>0){
        cin >> s;
        if(s.size()>10){
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl ;
        }
        else{
            cout << s << endl ;
        }
        n--;
    }
}
