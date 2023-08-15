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
    Student Rahim(29,'A',7,"Abdur Rahim");
    Student Karim(50,'B',15,"Karim Choudhury");

    cout<<Rahim.roll<<endl;
    cout<<Rahim.sec<<endl;
    cout<<Rahim.cls<<endl;
    cout<<Rahim.name<<endl;
    cout<<endl;
    
    cout<<Karim.roll<<endl;
    cout<<Karim.sec<<endl;
    cout<<Karim.cls<<endl;
    cout<<Karim.name<<endl;
    return 0;
}


