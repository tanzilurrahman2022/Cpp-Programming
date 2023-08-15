#include<bits/stdc++.h>
using namespace std;
namespace Rumman
{
    int age=26;
    void hello()
    {
        cout<<"Rumman namespace"<<endl;
    }
}    
namespace Tanzil
{
    int age=25;
    void hello()
    {
        cout<<"Tanzil namespace"<<endl;
    }
}
// using namespace Tanzil;
// int main()
// {
//     cout<<age<<endl;
//     // cout<<Rumman::age<<endl;
//     // cout<<Tanzil::age<<endl;
//     return 0;
// }

using namespace Rumman;
int main()
{
    cout<<age<<endl;
    hello();
    Tanzil::hello();
    return 0;
}