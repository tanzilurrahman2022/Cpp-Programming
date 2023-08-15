#include<bits/stdc++.h>
using namespace std;

string checkForRatul(const string & s) {
    istringstream ss(s);
    string name;
    while (ss >> name) {
        if (name == "Ratul") {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    string inputString;
    getline(cin, inputString);

    cout << checkForRatul(inputString) << endl;
    
    return 0;
}
