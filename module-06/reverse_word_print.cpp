#include<bits/stdc++.h>
using namespace std;
void print (stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        // cout<<word<<endl;
        // print(ss);

        print(ss);// reverse
        cout<<word<<endl;//reverse
    }

}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    //string word;
    // while(ss>>word)
    // {
    //     cout<<word<<endl;
    // }
    return 0;
}