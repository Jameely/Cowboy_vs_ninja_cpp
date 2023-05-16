#pragma once

namespace ariel{

    class Point{

        private:
            double x_coo;
            double y_coo;
        
        public:
            Point(double x_coo,double y_coo);
            double distance(Point & Other);
            double getX();
            double getY();

    };

}
