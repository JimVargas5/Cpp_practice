#include <iostream>
#include <limits>


void print_array(int array[], int size){
    for (int i=0; i<size; i++){
        std::cout << array[i] << '\t';
    }
    std::cout << std::endl;
}



int main(){
    std::cout << "poop" << std::endl;
    const int SIZE = 100;
    int guesses[SIZE];

    int count = 0;
    std::cout << "Input some integers for an array" << std::endl;
    for (int i=0; i<SIZE; i++){
        if(std::cin >> guesses[i]){ //returns cin -> true if input worked
            count++;
        }
        else{
            break;
        }
    }

    print_array(guesses, count);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear the entire input stream

    std::string test;
    std:: cin >> test;
    std::cout << test << std::endl;

    
    return 0;
}