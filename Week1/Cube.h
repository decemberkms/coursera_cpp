#pragma once

namespace uu{
class Cube {
    private:
        double length_;
    public:
        double getVolume();
        double getSurfacearea();
        bool setLength(double length);
};
}