// a study on vectors
#include <iostream>
#include <vector>

// vectors are like arrays, but can be dynamically allocated sizes in memory


void print_vector(std::vector<int> sample_vect){ // pass by VALUE
//void print_vector(std::vector<int> &sample_vect){ pass by REFERENCE
    sample_vect.push_back(31415); // adds this number TEMPORARILY if passed by VALUE
    for (int i=0; i<sample_vect.size(); i++){
        std::cout << sample_vect[i] << '\t';
    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> data = {1,2,3};
    data.push_back(32);
    std::cout << data[3] << std::endl; //prints 32

    data.pop_back();
    std::cout << data[data.size()-1] << std::endl; //prints 3

    print_vector(data);
    print_vector(data); // would keep adding 31415 with each function call if passed by REF.
}