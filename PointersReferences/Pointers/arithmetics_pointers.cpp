#include <iostream>

int main(int, char**) {
    
    int array[5] = {10, 21, 33, 45, 51};
    int* arrPtr = array + 3;
    printf("%d\n", *arrPtr); 
    printf("%d\n", arrPtr[-1]);
    return 0;
}