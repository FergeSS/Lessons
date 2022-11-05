#include <iostream>
#include <cmath>

void fill_array(int *array, int len){
     for (int i =  0; i < len; ++i)
        array[i] = i;
}

void replace_array(int *array, int len){
    for (int i = 0; i < len / 2; ++i){
        int tmp = array[i];
        array[i] = array[len - i - 1];
        array[len - i - 1] = tmp;
    }
}

void print_array(int *array, int len){
    for (int i = 0; i < len; ++i)
        std::cout << array[i] << " ";
        
}

void print_array_2(int *array, int len){
    for (int i = 0; i < len / 2 + 1; ++i){
        std::cout << array[i] << " ";
        if (i != len / 2 )
            std::cout << array[len - 1 - i] << " ";
    }
        
}

void shift_array(int *array, int len, int shift){
    
    shift %= len;
}

int main(){
    size_t sz;
    
    std::cout<< "Input size: ";
    std::cin >> sz;
    std::cout << std::endl;
    int* array = new int[sz];
    int k;
    
    std::cout<< "Input shift: ";
    std::cin >> k;
    std::cout << std::endl;
    
   fill_array(array, sz);
        
    print_array(array, sz);
    
    std::cout << std::endl;
    
    replace_array(array, sz);
    
    std::cout << "Reverse: ";
    print_array(array, sz);
    
    replace_array(array, sz);
    
    std::cout << std::endl;
    std::cout << "Task4: ";
    print_array_2(array, sz);
    
    shift_array(array, sz, k);
    
    std::cout << std::endl;
    std::cout << "Task7: " << (-12)%(10);
    print_array(array, sz);
}


#include <iostream>

int main(){
    char str[] = "AsdDHFGFJDGFSDJdARsdsWFGFGds";
    int len = strlen(str);
    for (int i = 0; i < len; ++i){
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    std::cout << str;
    return 0;
}
