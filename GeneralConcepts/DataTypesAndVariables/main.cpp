#include <iostream>

int main(int, char**) {
    
    // Base data types 

    // Integer data types
    std::cout << "Integer data types:" << std::endl;
    std::cout << "sizeof(short int) = " << sizeof(short int) << std::endl;
    std::cout << "sizeof(unsigned short int) = " << sizeof(unsigned short int) << std::endl;
    std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
    std::cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << std::endl;
    std::cout << "sizeof(long) = " << sizeof(long) << std::endl;
    std::cout << "sizeof(unsigned long) = " << sizeof(unsigned long) << std::endl;
    std::cout << "sizeof(long long) = " << sizeof(long long) << std::endl;
    std::cout << "sizeof(unsigned long long) = " << sizeof(unsigned long long) << std::endl;
    
    // Point data types
    std::cout << "\nPoint data types:" << std::endl;
    std::cout << "sizeof(float) = " << sizeof(float) << std::endl;
    std::cout << "sizeof(double) = " << sizeof(double) << std::endl;
    std::cout << "sizeof(long double) = " << sizeof(long double) << std::endl;
    
    // Char data types  
    std::cout << "\nChar data type:" << std::endl;
    std::cout << "sizeof(char) = " << sizeof(char) << std::endl;
    
    // Boolean 
    std::cout << "sizeof(bool) = " << sizeof(bool) << std::endl;
    
    // Variables initialization of different types
    int a = 5;
    int listed_variable = {5};
    float b = float(5.4);
    char c = 'k';
}
