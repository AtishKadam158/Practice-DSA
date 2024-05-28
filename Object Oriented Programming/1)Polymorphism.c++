#include <bits/stdc++.h>
using namespace  std;
class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    MathOperations math;
    int result1 = math.add(3, 5);          // Calls int add(int a, int b)
    double result2 = math.add(2.5, 3.7);   // Calls double add(double a, double b)

    std::cout << "Result1: " << result1 << std::endl;
    std::cout << "Result2: " << result2 << std::endl;
    return 0;
}
