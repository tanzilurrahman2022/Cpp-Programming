#include <iostream>
#include <climits>

int main() {
    int N;
    std::cin >> N;

    int maximum = INT_MIN;

    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;
        if (num > maximum) {
            maximum = num;
        }
    }

    std::cout << maximum << std::endl;

    return 0;
}
