#include <iostream>
#include <string>
#include  "user.h"





        std::string User::get_status(){
            return status;
        }

        void User::set_status(std::string status){
            this->status = status;
        }

        int User::get_user_count(){
            return user_count;
        }
        
        void User::output(){
            std::cout << "This is a User\n";
        }

        User::User(){ // default constructor
            std::cout << "User created" << std::endl;
            user_count++;
        }
        User::User(std::string first_name, std::string last_name){ // have both constructors
            this->first_name = first_name;
            this->last_name = last_name;
            user_count++;
        }
        User::~User(){ // destructor
            user_count--;
        }

int User::user_count = 0;

std::ostream& operator << (std::ostream& output, const User user){
    output << "First name: " << user.first_name
        << ", Last name: " << user.last_name << std::endl;
};

std::istream& operator >> (std::istream &input, User &user){
    input >> user.first_name >> user.last_name;
};

