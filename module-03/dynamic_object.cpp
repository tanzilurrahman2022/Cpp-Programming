#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char sec;

        Student(int r,int s,int c,char* n)
        {
            roll=r;
            sec=s;
            cls=c;
            strcpy(name,n);
        }
};
int main()
{   
    char name[100]="Abdur Rahim"; 
    //Student rahim(29,'A',11,name);
    Student* rahim = new Student(5,'A',11,name);
    (*rahim).roll=50;
    // int * a = new int;
    // *a=10;
    // cout<<*a<<endl;

    // cout<<(*rahim).name<<endl;
    // cout<<(*rahim).roll<<endl;
    // cout<<(*rahim).sec<<endl;
    // cout<<(*rahim).cls<<endl;

    //shortcut
    //(*rahim). = rahim->

    cout<<rahim->name<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->sec<<endl;
    cout<<rahim->cls<<endl;

    //delete an object
    delete rahim;
    
    cout<<rahim->name<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->sec<<endl;
    cout<<rahim->cls<<endl;
    return 0;
}