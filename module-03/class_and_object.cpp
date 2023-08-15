#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char sec;
};
int main()
{   
    Student Rahim;
    Rahim.roll=10;
    Rahim.cls=8;
    Rahim.sec='A';
    char nm[100]="Abdur Rahim";
    strcpy(Rahim.name,nm);

    Student Karim;
    Karim.roll=15;
    Karim.cls=10;
    Karim.sec='B';
    char nm2[100]="Karim Uddin";
    strcpy(Karim.name,nm);
    
    cout<<Rahim.name;
    return 0;
}