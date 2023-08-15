// #include <iostream>

// // Function returning a reference to a static object
// int& getStaticValue() {
//     static int staticValue = 10;
//     return staticValue;
// }

// int main() {
//     int& valueRef = getStaticValue();
//     valueRef = 20;
  
//     std::cout << "Static value: " << getStaticValue() << std::endl;
  
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Person {
// public:
//     std::string name;
//     int age;

//     Person(std::string personName, int personAge) {
//         name = personName;
//         age = personAge;
//     }
// };

// int main()
// {
//     Person person1("", 25);
//     Person person2("Bob", 30);

//     // Compare the ages and print the name of the person with the greater age
//     if (person1.age > person2.age) {
//         std::cout << person1.name << " is older." << std::endl;
//     } else if (person1.age < person2.age) {
//         std::cout << person2.name << " is older." << std::endl;
//     } else {
//         std::cout << "Both persons have the same age." << std::endl;
//     }
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string personName, int personAge) {
        name = personName;
        age = personAge;
    }
};

int main() {
    
    Person person1("Rahim", 30);
    Person person2("karim", 25);

    
    if (person1.age > person2.age) {
        cout << person1.name << " is older." << endl;
    } else if (person1.age < person2.age) {
        cout << person2.name << " is older." << endl;
    } else {
        cout << "Both persons have the same age." << endl;
    }

    return 0;
}

