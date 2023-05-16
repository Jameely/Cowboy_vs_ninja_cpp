#pragma once
#include "Character.hpp"

namespace ariel{
    class Ninja : public Character{
        public:
            Ninja(string name, const Point & location);
            void move(Character * character);
            void slash(Character * character);

    };
}