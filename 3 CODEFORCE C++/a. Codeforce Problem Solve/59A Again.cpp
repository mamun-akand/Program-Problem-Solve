#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int l=0, u=0, i;

    for(i=0 ; i<s.size() ; i++){

        if(islower(s[i])) l++;
        else u++;

    }

    for(i=0 ; i<s.size() ; i++){

        if( l >= u && isupper(s[i]) )
            s[i] += 32;

        else if ( l < u && islower(s[i]) )
            s[i] -= 32;

    }

    cout << s << endl;

    return 0;

}
