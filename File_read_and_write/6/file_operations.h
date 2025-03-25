#include <fstream>
#include <vector>
#include <string>
#include <iostream>

std::string read_from_file(std::string filename){
    std::ifstream in(filename);
    std::string result;
    char c;

    while(in >> c){
        result += c;
    }
    in.close();
    return result;
}

void to_write(std::string data, std::string filename){
    std::ofstream out(filename);
    for(int i = 0; i < data.size(); ++i){
        out << data[i];
    }
    out.close();
}
