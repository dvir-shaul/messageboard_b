#include "Board.hpp"
#include <iostream>
#include <string>
#include "Direction.hpp"
using namespace std;


//clang++-9 -std=c++2a -Werror main.cpp snowman.cpp -o main
namespace ariel {
    

    void Board::post(u_int horizontal, u_int vertical, ariel::Direction loc, string message){
        if(loc == Direction::Horizontal ){
            for(unsigned int i=0; i < message.length() ; i++){
                this->boardMsg[horizontal][vertical].v = message.at(i);
                vertical += 1;
            }
        }
        else {
            for(unsigned int i=0; i < message.length() ; i++){
                this->boardMsg[horizontal][vertical].v = message.at(i);
                horizontal += 1;
            }
        }   
    }
    

    string Board::read(  u_int horizontal,  u_int vertical,ariel::Direction loc, u_int length) {
        string msg;
        for(int i=0; i < length ; i++){    
            msg+=this->boardMsg[horizontal][vertical].v;
            if(loc == Direction::Horizontal){
               vertical++;
            }
            else{     
                horizontal++;
            }
        }
    return msg;
    }



    void Board::show() {
        for(u_int i=0;i<bottom_y;i++){
            for(u_int j = 0; j< right_x;j++){
                 cout << this->boardMsg[i][j].v;
            }
            cout << "\n";
        }
    }
}