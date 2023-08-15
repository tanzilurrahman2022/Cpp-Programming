#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};

bool compareStudents(const Student& a, const Student& b) {
    int total_marks_a = a.math_marks + a.eng_marks;
    int total_marks_b = b.math_marks + b.eng_marks;
    
    if (total_marks_a == total_marks_b) {
        return a.id < b.id;
    }
    
    return total_marks_a > total_marks_b;
}

int main() {
    int N;
    cin >> N;
    
    vector<Student> st(N);
    for (int i = 0; i < N; i++) {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
    }
    
    sort(st.begin(), st.end(), compareStudents);
    
    for (const auto& student : st) {
        cout << student.nm << " " << student.cls << " " << student.s << " " << student.id << " " << student.math_marks << " " << student.eng_marks << "\n";
    }
    
    return 0;
}
