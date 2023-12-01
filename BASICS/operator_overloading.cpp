#include <iostream>
/*
C++ doesn't necessarily know how to 'add' classes.
Define the plus operator and other binary operations
for class Position.
*/

class Position{
    public:
        int x;
        int y;

        Position operator + (Position pos){
            
            Position new_pos;
            new_pos.x = x + pos.x;
            new_pos.y = y + pos.y;
            return new_pos;
        }
        bool operator == (Position pos){
            if (x == pos.x && y == pos.y){
                return true;
            }
            return false;    
        }
};





// '<<' operator overloading takes place outside Class definition
std::ostream& operator << (std::ostream &output, const Position pos){
    output << "x-coordinate: " << pos.x 
        << ", y-coordinate: " << pos.y << std::endl;
    return output;
}
std::istream& operator >> (std::istream &input, Position &pos){
    input >> pos.x >> pos.y;
    return input;
}




int main(){
    Position pos1, pos2, pos3, pos4;
    pos1.x = 10; pos1.y = 20;
    pos2.x = 0; pos2.y = -12;
    pos3 = pos1 + pos2; 
    std::cin >> pos4;

    std::cout << pos3.x << " " << pos3.y << '\n' 
        << (pos1 == pos3) << '\n'
        << pos4 << std::endl; 

    return 0;
}
