#include <iostream>
#include <string>

int main(int, char**) {
    // Type string
    
    // Init strings
    std::string s1 = "S-1";
    std::string s2 = "S-2";
    std::string s3;

    std::cout << "String 1 = " << s1 << std::endl;
    std::cout << "String 2 = " << s2 << std::endl;
    // Operation with strings

    //Concat
    std::cout << "\nConcat\n";
    s3 = s1 + s2;
    std::cout << s3 << std::endl;

    // +=
    std::cout << "+=\n";
    s3 += "abc";
    std::cout << s3 << std::endl;
    
}
