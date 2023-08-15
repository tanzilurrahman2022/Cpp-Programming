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
};
int main()
{
    Person* rumman=new Person("Tanzilur Rahman",26);
    Person* hanif=new Person("Abu Hanifa",30);
    rumman=hanif;
    cout<<rumman->name<<" "<<rumman->age<<endl;


    return 0;
}