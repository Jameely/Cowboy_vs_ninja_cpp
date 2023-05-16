#include "Cowboy.hpp"

namespace ariel{
    
     Cowboy::Cowboy(string name ,const Point&location):Character(name,location){

     }
            void Cowboy::shoot(Character * enemy){

            }
            bool Cowboy::hasBullets(){
                return false;
            }
            int Cowboy::getStockpile(){
                return 0;
            }
}