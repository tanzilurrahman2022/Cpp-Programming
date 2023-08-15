#include<bits/stdc++.h>
using namespace std;

string replaceString(string S, string X) {
    size_t pos = 0;
    while ((pos = S.find(X, pos)) != string::npos) {
        S.replace(pos, X.length(), "$");
        pos += 1; 
    }
    return S;
}

int main() {
    int T;

    cin >> T;
    cin.ignore(); 
    
    for (int i = 0; i < T; ++i) {
        string S, X;
        getline(cin, S, ' ');
        getline(cin, X);
        
        string modifiedString = replaceString(S, X);
        cout << modifiedString << endl;
    }
    
    return 0;
}

