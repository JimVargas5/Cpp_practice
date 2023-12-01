#include <iostream>

/*struct User{
    std::string first_name;
    std::string last_name;

    std::string get_status()
    {
        return status;
    }

private:
    std::string status = "Epic";
};
For Classes, all attributes are default private, and public
attributes need to be explicitly labeled as such.
Just swap things.
*/
class User{
    std::string status;
    static int user_count;


    public:
        std::string first_name;
        std::string last_name;

        std::string get_status(){
            return status;
        }

        void set_status(std::string status){
            this->status = status;
        }

        static int get_user_count(){
            return user_count;
        }


        User(){ // default constructor
            user_count++;
        }
        User(std::string first_name, std::string last_name){ // have both constructors
            this->first_name = first_name;
            this->last_name = last_name;
            user_count++;
        }
        ~User(){ // destructor
            user_count--;
        }
};

int User::user_count = 0;



int main(){
    User me;
    me.first_name = "Jim";
    me.last_name = "Vargas";
    me.set_status("Epic");

    User Abe("Abraham", "Lincon");
    Abe.~User();

    // me.status = "Hungry"; this line is illegal, since status is a private attribute
    std::cout << me.first_name << " " << me.last_name <<
        " \nStatus: " << me.get_status() << std::endl; 

    std::cout << User::get_user_count() << std::endl;

    return 0;
}