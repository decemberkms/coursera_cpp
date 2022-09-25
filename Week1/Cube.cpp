#include "Cube.h"

namespace uu{
    double Cube::getVolume(){
        return length_ * length_ * length_;

    }

    double Cube::getSurfacearea(){
        return length_ * length_ * 6;
    }

    bool Cube::setLength(double length){
        length_ = length;
        return true;
    }
}