//
// Created by sam on 09/11/2020.
//

#ifndef UNTITLED_TIMESERIES_H
#define UNTITLED_TIMESERIES_H
using namespace std;

#include_next <map>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class TimeSeries {
public:
    char *_filename;

    TimeSeries(const char *filename) {
        setName(filename);
    }

    //the name of the file.
    void setName(const char *filename) {
        _filename = new char[strlen(filename) + 1];
        strcpy(_filename, filename);
    }




};

std::vector<std::string> VectorCsv(const TimeSeries& t);

#endif //UNTITLED_TIMESERIES_H
