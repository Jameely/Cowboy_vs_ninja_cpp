 #include "Character.hpp"

 namespace ariel{
     Character::Character(string name ,const Point & location){

     }
       Character::~Character(){

        }
        double Character::distance(const Point& other){
            return 0;
        }
        string  Character::print(){
            return "";
        }
        Point Character::getLocation(){
            return Point(0,0);
        }
        string Character::getName(){
            return "";
        }
        int Character::getHealth(){
            return 0;
        }
 }