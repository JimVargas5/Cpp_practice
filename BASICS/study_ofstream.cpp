#include <iostream>
#include <fstream>
#include <vector>

/*
the file "hello.txt" is over-written each time the program is ran
*/

int main(){
    // creating and writing to files
    std::ofstream file ("hello.txt");


    std::string input_filename;
    std::cout << "Type 'poop.txt' without quotes below:" << std::endl;
    std::cin >> input_filename;
    // the line below adds to the existing file
    std::ofstream file2 (input_filename, std::ios::app);


    file << "hello poop 1" << std::endl;
    file2 << "hello poop 1" << std::endl;

    std::vector<std::string> names;
    names.push_back("Jim Vargas");
    names.push_back("Zach Neuhaus");
    names.push_back("Evan Neuhaus");

    for (std::string name : names){
        file << name << std::endl;
    }






    // reading from an existing file
    std::ifstream file_existing ("epic_data.txt"); 

    std::vector<std::string> epic_names;
    std::string input; // this will not respect whitespace

    while (file_existing >> input){ // return file_existing -> true if file reading was successful
        epic_names.push_back(input);
    }
    for (std::string name : epic_names){
        std::cout << name << std::endl;
    }
    std::cout << std::endl;


    /*
    std::vector<std::string> epic_names2;
    std::string whole_line;
    while (file_existing >> whole_line){ 
        epic_names2.push_back(getline(file_existing, whole_line));
    }
    for (std::string name : epic_names2){
        std::cout << name << std::endl;
    }
    */



    file.close();
    file2.close();
    file_existing.close();
    return 0;
}