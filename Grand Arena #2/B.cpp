//실패
#include <iostream>
#include <string>
#include <vector>

void print_FizzBuzz(int n) {
    if (n % 3 == 0) {
        if (n % 5 == 0) {
            std::cout << "FizzBuzz";
        }
        else {
            std::cout << "Fizz";
        }
    }
    else {
        if (n % 5 == 0) {
            std::cout << "Buzz";
        }
        else {
            std::cout << n;
        }
    }
}

int main() {
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    
    std::vector<std::string> v(3);
    std::vector<bool> isnum(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> v[i];
        if (v[i].back() < 58) isnum[i] = true;
        else false;
    }

    for (int i = 0; i < 3; i++) {
        if (isnum[i]) {
            int tmp = std::stoi(v[i]);
            std::cout << tmp + 3 - i;
            break;
        }
    }

    return 0;
}