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

#include <iostream>

int main() {
    int n;
    int n_2 = 1;
    long double summ = 1;
    
    std::cout << "Input n (n > 0): ";
    std::cin >> n;
    
    for(int i = 2; i <= n; ++i){
        n_2 *= 2;
        summ += 1./n_2;
    }
    
    std::cout << summ << std::endl;

    return 0;
}

#include <iostream>
#include <cmath>

int main() {
    int n;
    double x;
    double summ = 0;
    
    std::cout << "Input n (n > 0): ";
    std::cin >> n;
    
    std::cout << "Input x (0 <= x <= 3.1415926...): ";
    std::cin >> x;
    
    for(int i = 1; i <= n; ++i){
        x = sin(x);
        summ += x;
    }
    
    std::cout << summ << std::endl;

    return 0;
}

#include <iostream>
#include <cmath>

int main() {
    int i = -1;
    int z = 1;
    double n;
    double pi = 0;
    
    std::cout << "Input n(n > pi): ";
    std::cin >> n;
    
    while(n <= pi){
        i *= -1;
        pi += 4*i*1./z;
        z += 2;  
    }
    
    
    std::cout << pi << std::endl;

    return 0;
}
