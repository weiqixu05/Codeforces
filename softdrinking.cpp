#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int lime=c*d/n;
    int drink=k*l;
    int drinkRound=n*nl;
    int drinks=drink/drinkRound;
    int salt=p/(n*np)
    int stuff=[drink,drinkRound,salt];
    if(drinks<salt&&drinks<stuff){
        cout << drinks;
    }
    else if(salt<drinks&&salt<stuff){
        cout << salt;
    }
    else{cout << stuff;}
}
