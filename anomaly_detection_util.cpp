
/*
 * animaly_detection_util.cpp
 *
 * Author: 316550961 Sam Katz.
 */

#include <iostream>
#include <cmath>
#include "anomaly_detection_util.h"

float var(float* x, int size) {
    //first we will calculate the average.
    float sum = 0;
    float squareSum = 0;
    for (int i = 0; i < size; i++) {
        sum += x[i];
        squareSum += pow(x[i], 2);
    }
    auto avg = sum / size; //average.
    auto variance = (squareSum / size) - pow(avg, 2);
    return variance;
}

float cov(float* x, float* y, int size) {
    float sumx = 0, sumy = 0, simplecov = 0;
    for (int i = 0; i < size; i++) {
        sumx += x[i];
        sumy += y[i];
    }
    auto avgx = sumx / size; //average calculation
    auto avgy = sumy / size; //average calculation
    for (int i = 0; i < size; i++) {
        simplecov = simplecov + (x[i] - avgx) * (y[i] - avgy);
    }
    auto covariance = simplecov / size;
    return covariance;
}

float pearson(float* x, float* y, int size) {
    float covariance = cov(x, y, size);
    auto stx = sqrt(var(x, size));
    auto sty = sqrt(var(y, size));
    auto pearcorrelation = (covariance) / (stx * sty);
    return pearcorrelation;

}


Line linear_reg(Point** points, int size) {
    float sumx1 = 0, sumy1 = 0;
    float x = 0, y = 0;
    float arrayx[size];
    float arrayy[size];

    for (int i = 0; i < size; i++) {
        Point first = Point(points[i]->x, points[i]->y);
        sumx1 += first.x;
        sumy1 += first.y;
        arrayx[i] = points[i]->x;
        arrayy[i] = points[i]->y;

    }
    auto avgx = sumx1 / size;
    auto avgy = sumy1 / size;
    float a = cov(arrayx, arrayy, size) / var(arrayx, size);
    float b = avgy - a * avgx;

    Line line = Line(a, b);
    return line;





}




// returns the deviation between point p and the line equation of the points
float dev(Point p, Point** points, int size) {

    Line line = linear_reg(points, size);
    auto y = line.f(p.x);
    if (y - p.y < 0)
        return p.y - y;
    else return y - p.y;

}

// returns the deviation between point p and the line
float dev(Point p, Line l) {
    auto y = l.f(p.x);
    if (y - p.y < 0)
        return p.y - y;
    else return y - p.y;
}















