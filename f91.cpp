#include <iostream>

int f91(int N) {
    if (N <= 100) return f91(f91(N + 11));
    return N - 10;
}

int main() {
    int N;
    while (std::cin >> N, N) {
        std::cout << "f91(" << N << ") = " << f91(N) << std::endl;
    }
    return 0;
}
