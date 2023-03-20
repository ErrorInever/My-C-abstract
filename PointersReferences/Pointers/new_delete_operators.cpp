#include <cstddef>
#include <iostream>

int main(int, char**) {
    // Dynamic memory

    new int; // get memory from OS for int. Return pointer with adress memory
    int* iptr{ new int }; // define standart pointer
    *iptr = 7; 
    std::cout << "Pointer to dynamic memory = " << *iptr << std::endl;

    // standart initialization
    int* iptr1 { new int(5)};
    int* iptr2 { new int {6}};

    // We must free memory and we should assign nullptr to pointer.
    delete iptr;
    delete iptr1;
    delete iptr2;
    iptr = nullptr;
    iptr1 = nullptr;
    iptr2 = nullptr;

    // Dynamic memory for arrays
    int constexpr length {5};
    int* array{ new int[static_cast<std::size_t>(length)]{} };
    // Initialization
    int* array1{ new int[length]{ 9, 7, 5, 3, 1 } }; 
    // Free memory for arrays
    delete[] array;
    delete[] array1;

    return 0;
}