#include <iostream>
#include <vector>

int main() {
    int N;
    std::cout << " ";
    std::cin >> N;

    std::vector<int> A(N);
    std::cout << " ";
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int M;
    std::cout << " ";
    std::cin >> M;

    std::vector<int> B(A);  // Copy elements of A to B

    A.clear();  // Delete array A

    B.resize(M);  // Resize B to accommodate additional elements

    std::cout << " ";
    for (int i = N; i < M; i++) {
        std::cin >> B[i];
    }

    std::cout << " ";
    for (int i = 0; i < M; i++) {
        std::cout << B[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
