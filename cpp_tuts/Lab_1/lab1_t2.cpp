#include <iostream> 
#include <fstream>

int main(){
    std::ofstream output_file; 
    output_file.open("example.txt");
    if(output_file.is_open()){
        std::cout << "File opened successfully.\n";
    }
    output_file << "Hello";
    output_file.close();
}