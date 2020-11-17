//
// Created by sam on 17/11/2020.
//
#include "timeseries.h"
std::vector<std::string> VectorCsv(const TimeSeries& t){
    std::ifstream csvfile;
    csvfile.open(t._filename);
    if (!csvfile.is_open()) throw std::runtime_error("coudn't open file");
    std::string line = "";
    std::vector<std::string> words;
    while (csvfile.good()) {
        getline(csvfile, line, ',');
        //words enter the vector.
        words.push_back(line);
        std::cout << line << std::endl;
    }
    csvfile.close();//close file.

    return words;
}
