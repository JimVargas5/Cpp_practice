#include <iostream>
#include <string>

#ifndef USER_H
#define USER_H

class User{
    std::string status;
    static int user_count;

    public:
        std::string first_name;
        std::string last_name;

        std::string get_status();
        void set_status(std::string status);
        static int get_user_count();

        User();
        User(std::string first_name, std::string last_name);
        ~User();

        friend std::ostream& operator << (std::ostream& output, const User user);
        friend std::istream& operator >> (std::istream &input, User &user);
};

#endif