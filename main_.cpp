#include <iostream>
#include "vector_.h"

int main(){

    std::cout << "Hello World" << std::endl;

    Vector v1;
    Vector v2;

    v1.assing(0,0);
    v2.assing(1,1);

    v1.print();
    v2.print();

    v1 += v2;
    v1.print();

    return 0;
}