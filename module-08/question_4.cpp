#include<bits/stdc++.h>
using namespace std;

struct Student {
    string nm;
    int cls;
    char s;
    int id;
};

int main() {
    int N;
    cin >> N;
    
    vector<Student> a(N);
    for (int i = 0; i < N; i++) {
        cin >>a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }
    
    for (int i = 0; i < N / 2; i++) {
        swap(a[i].id, a[N - i - 1].id);
    }
    
    for (const auto& student : a) {
        cout << student.nm << " " << student.cls << " " << student.s << " " << student.id << endl;
    }
    
    return 0;
}
