#include <iostream>
#include <string>
#include "user.h"
#include "teacher.h"



int main(){
    User user;
    std::cin >> user;
    std::cout << user << std::endl;

    Teacher Erdos; // Erdos is a Teacher and a User
    Erdos.first_name = "Paul";
    Erdos.last_name = "Erdos";
    std::cout << Erdos.first_name << Erdos.last_name << std::endl;

    User &u = Erdos; // u is a reference to a type User, but will act as type Teacher
    u.output(); // u will say it's a Teacher, thanks to the 'virtual' keyword.
}

