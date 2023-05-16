#pragma once
#include "Point.hpp"
#include <string>
using namespace std;
namespace ariel {
    class Character {
    private:
        // data

    public:
        Character(string name, const Point& location);
        virtual ~Character();

        // Disable the copy and move operations
        Character(const Character&) = delete;
        Character& operator=(const Character&) = delete;
        Character(Character&&) = delete;
        Character& operator=(Character&&) = delete;

        double distance(const Point& other);
        virtual string print();
        Point getLocation();
        string getName();
        int getHealth();
    };
}
