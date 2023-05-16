#pragma once 
#include"Point.hpp"
#include"Cowboy.hpp"
#include"OldNinja.hpp"
#include"YoungNinja.hpp"
#include"TrainedNinja.hpp"
#include "Ninja.hpp"
#include <vector>

namespace ariel {
    class Team{
        public:
            Team();
            Team(Character * character);
            void add(Character* character);
            int stillAlive();
            void print();
            void attack(Team* team);

    };

}

