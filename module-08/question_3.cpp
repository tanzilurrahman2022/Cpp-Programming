#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string nm;
        int cls;
        char s;
        int math_marks;
        int eng_marks;
};

int main() {
    int N;
    cin >> N;

    vector<Student> s(N);

    for (int i = 0; i < N; i++) {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].math_marks >> s[i].eng_marks;
    }

    reverse(s.begin(), s.end());

    for (const auto & student : s) {
        cout << student.nm << " " << student.cls << " " << student.s << " " << student.math_marks << " " << student.eng_marks << endl;
    }

    return 0;
}
