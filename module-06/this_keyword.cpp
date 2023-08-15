#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        void hello()
        {
            cout<<"Hello"<<endl;
        }
};
int main()
{
    Person rumman("Tanzilur Rahman",26);
    cout<<rumman.name<<" "<<rumman.age<<endl;
    return 0;
}