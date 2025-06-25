#include <iostream>

int main () {

    long int a;

    std::cin >> a;

    if(a < 0) {
        a = -(a);
    }

    std::cout << a << std::endl;


    return 0;


}