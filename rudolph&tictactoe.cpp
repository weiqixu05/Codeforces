#include <bits/stdc++.h>
using namespace std;

void solve(){
    char c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> c[i][j];
        }
    }
    if(c[0][0]==c[0][1]&&c[0][1]==c[0][2]&&c[0][0]!='.'){
        if(c[0][0]=='X'){
            cout << "X\n";
        } else if(c[0][0]=='O'){
            cout << "O\n";
        } else{
            cout << "+\n";
        }
    }
    else if(c[1][0]==c[1][1]&&c[1][1]==c[1][2]&&c[1][1]!='.'){
        if(c[1][0]=='X'){
            cout << "X\n";
        } else if(c[1][0]=='O'){
            cout << "O\n";
        } else{
            cout << "+\n";
        }
    }
    else if(c[2][0]==c[2][1]&&c[2][1]==c[2][2]&&c[2][2]!='.'){
        if(c[2][0]=='X'){
            cout << "X\n";
        } else if(c[2][0]=='O'){
            cout << "O\n";
        } else{
            cout << "+\n";
        }
    }
    else if(c[1][0]==c[2][0]&&c[2][0]==c[0][0]&&c[0][0]!='.'){
        if(c[1][0]=='X'){
            cout << "X\n";
        } else if(c[1][0]=='O'){
            cout << "O\n";
        } else{
            cout << "+\n";
        }
    }
    else if(c[1][1]==c[2][1]&&c[2][1]==c[0][1]&&c[0][1]!='.'){
        if(c[1][1]=='X'){
            cout << "X\n";
        } else if(c[1][1]=='O'){
            cout << "O\n";
        } else{
            cout << "+\n";
        }
    }
    else if(c[1][2]==c[2][2]&&c[2][2]==c[0][2]&&c[0][2]!='.'){
            if(c[0][2]=='X'){
            cout << "X\n";
        } else if(c[0][2]=='O'){
            cout << "O\n";
        } else{
            cout << "+\n";
        }
    }
    else if(c[0][0]==c[1][1]&&c[1][1]==c[2][2]&&c[0][0]!='.'){
        if(c[0][0]=='X'){
            cout << "X\n";
        } else if(c[0][0]=='O'){
            cout << "O\n";
        } else{
            cout << "+\n";
        }
    }
    else if(c[0][2]==c[1][1]&&c[1][1]==c[2][0]&&c[1][1]!='.'){
        if(c[0][2]=='X'){
            cout << "X\n";
        } else if(c[0][2]=='O'){
            cout << "O\n";
        } else{
            cout << "+\n";
        }
    }
    else {cout << "DRAW\n";}
}

int main() {
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
