#include <iostream>
#include "Cube.h"

int main(){
    uu::Cube p;
    p.setLength(2);

    std::cout << p.getVolume() << " " << p.getSurfacearea() << std::endl;

    

    return 0;
}