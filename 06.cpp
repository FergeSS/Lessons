#include <iostream>
int task1(){
    int n, i, summ = 0;
    
    std::cout << "Input N: ";
    std::cin >> n;
    
    for(i = 1; i<=n; i++)
        summ += i;
        
    std::cout << double(summ) / n << std::endl;
    
    return 0;
}

int task2(){
    int n, k, i;
    
    std::cout << "Input N: ";
    std::cin >> n;  
    
    for(i = 1; i <= n; i++){
        for(k = 0; k < i; k++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}

int task3(){
    int n, k, i, j;
    
    std::cout << "Input N: ";
    std::cin >> n; 
    std::cout << "\n\n";
    
    for(i = 1; i <= n; i++){
        for(k = 0; k < n - i; k++){
            std::cout << " ";
        }
        for(j = 1; j < i * 2; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int task4(){
    int n, k, i, j;
    
    std::cout << "Input N: ";
    std::cin >> n; 
    std::cout << "\n\n";
    
    for(i = 1; i <= n; i++){
        for(k = 0; k < n - i; k++){
            std::cout << " ";
        }
        for(j = 1; j < i * 2; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for(i = 1; i <= n - 1; i++){
        for(k = n; k > n - i; k--){
            std::cout << " ";
        }
        for(j = n * 2 - 1; j > i * 2; j--){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main(){
    int t;
    
    std::cout << "Input task: ";
    std::cin >> t;
    
    if(t == 1){
        task1();
    }
    
    if(t == 2){
        task2();
    }
    
    if(t == 3){
        task3();
    }
    
    if(t == 4){
        task4();
    }
    return 0;
}

