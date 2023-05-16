#pragma once

#include"Character.hpp"
#include "Point.hpp"
using namespace std;

namespace ariel{
    class Cowboy: public Character{
        private:
            int stockpile;
        public:
            Cowboy(string name ,const Point&location);
            void shoot(Character * enemy);
            bool hasBullets();
            int getStockpile();

    };
}