#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string nm,int ag)
        {
            name=nm;
            age=ag;
        }
};
int main()
{
    Person rumman("Tanzilur Rahman",26);
    cout<<rumman.name<<" "<<rumman.age<<endl;
    return 0;
}