//
// Created by sam on 11/11/2020.
//

#include "SimpleAnomalyDetector.h"
#include "AnomalyDetector.h"
#include "anomaly_detection_util.h"

SimpleAnomalyDetector::SimpleAnomalyDetector() {
    // TODO Auto-generated constructor stub

}

SimpleAnomalyDetector::~SimpleAnomalyDetector() {
    // TODO Auto-generated destructor stub
}


void SimpleAnomalyDetector::learnNormal(const TimeSeries& ts){
    // TODO Auto-generated destructor stub
    /*
    TimeSeries csvInformation = ts;
    float first[csvInformation.numberofrows()];
    float second[csvInformation.numberofrows()];
    vector<std::string> propertyvector=csvInformation.listofproperties();
    std::vector<std::string> ::iterator it;
    int counter=0;
    std::string s;
    for (int i=0; i<csvInformation.numberofcolumns();i++) {
        s=propertyvector.at(i).data();
   csvInformation.returnArrayBasedOnProperties(&s);


    }*/
}

vector<AnomalyReport> SimpleAnomalyDetector::detect(const TimeSeries& ts){
    // TODO Auto-generated destructor stub
}

