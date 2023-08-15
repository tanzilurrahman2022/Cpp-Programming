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
Student fun()
{
    char name[100]="Abdur Rahim";
    Student rahim(29,'A',7,name);
    return rahim;
}
int main()
{   
    Student rahim=fun();
    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.sec<<endl;
    cout<<rahim.cls<<endl;
    cout<<endl;
    return 0;
}