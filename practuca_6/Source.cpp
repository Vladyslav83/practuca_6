#include <iostream>
#include <map>
#include <numeric>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;

    int num;
    std::cout << "Enter numbers (enter -1 to finish):\n";
    while (true) {
        std::cin >> num;
        if (num == -1)
            break;
        numbers.push_back(num);
    }

    std::map<int, int> M;

    for (int num : numbers) {
        int lastDigit = num % 10;
        M[lastDigit] += lastDigit;
    }

    for (const auto& pair : M) {
        std::cout << "Last Digit: " << pair.first << ", Sum: " << pair.second << std::endl;
    }

    return 0;
}