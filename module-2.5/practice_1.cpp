#include <iostream>
#include <vector>

std::vector<int> get_array(int N) {
    std::vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    return arr;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> arr = get_array(N);
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
