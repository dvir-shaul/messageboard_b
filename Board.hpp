#include <string>
#include <map>
#include "Direction.hpp"

struct wdsadwechar{
    char v='_'; // this is the default value of each character types in our board
};


namespace ariel {

    class Board{
        
            std::map< u_int, std::map< u_int,wdsadwechar>> boardMsg;
            unsigned int left_X, right_x, top_y, bottom_y;

        public: 
             Board(){
                 left_X = top_y = right_x =  bottom_y = 0;
             }
             ~Board(){};
            void show();
            void post(  u_int horizontal,  u_int vertical,ariel::Direction loc, std::string message);
            std::string read(  u_int horizontal,  u_int vertical,ariel::Direction loc, u_int length);        
    };
}
