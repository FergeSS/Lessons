#include <iostream>

int main() {
    unsigned char val = 0;
    
    do {
        std::cout << (int)val << '\n';\
        ++val;
    }
    while (val != 0);

    return 0;
}

#include <iostream>

int main() {
    int n;
    double summ = 0;
    std::cout << "Input n (n > 0): ";
    std::cin >> n;
    
    for (int i = 1; i <= n; ++i){
        summ += 1./i;
    }
    
    std::cout << summ << std::endl;

    return 0;
}
