#include <iostream>
#include "vector.h"

int main(){

    std::cout << "Hello World" << std::endl;

    Vector2D v0;
    v0.assing(1,2);
    v0.print();

    Vector2D v1;
    v1.assing(2,3);
    v1.print();

    v0 += v1; //연산자 오버로딩된 연산자 +
    v0.print();

    v0 *= v1;
    v0.print();

    v0 *= 2;
    v0.print();

    return 0;
}
//unital algebra : 결합 대수 
//dot product : 내적  inner product (n dimension 내적)