#include "vec3.h"
#include <cmath>
#include <stdlib.h>
#include <iostream>

using namespace std;

vec3::vec3()
{
    componants[0] = 0;
    componants[1] = 0;
    componants[2] = 0;
}

vec3::vec3(double x, double y, double z)
{
    componants[0] = x;
    componants[1] = y;
    componants[2] = z;
}

vec3 &vec3::operator-=(vec3 rhs)
{
    componants[0] -= rhs[0];
    componants[1] -= rhs[1];
    componants[2] -= rhs[2];
    return *this;
}

vec3 &vec3::operator+=(vec3 rhs)
{
    componants[0] += rhs[0];
    componants[1] += rhs[1];
    componants[2] += rhs[2];
    return *this;
}

vec3 &vec3::operator *=(double c){
    componants[0] *= c;
    componants[1] *= c;
    componants[2] *= c;
    return *this;
}


vec3 &vec3::operator /=(double c){
    componants[0] /= c;
    componants[1] /= c;
    componants[2] /= c;
    return *this;
}

vec3 &vec3::operator /=(vec3 rhs){
    componants[0] /= rhs[0];
    componants[1] /= rhs[1];
    componants[2] /= rhs[2];
    return *this;
}

vec3 &vec3::operator=(vec3 rhs)
{
    componants[0] = rhs[0];
    componants[1] = rhs[1];
    componants[2] = rhs[2];
    return *this;
}

vec3 &vec3::operator=(double s)
{
    componants[0] = s;
    componants[1] = s;
    componants[2] = s;
    return *this;
}



vec3 vec3::randint(int min, int max)
{
    componants[0] = rand()%(max-min + 1) + min;
    componants[1] = rand()%(max-min + 1) + min;
    componants[2] = rand()%(max-min + 1) + min;
    return *this;
}

void vec3::normalize(){
    *this = *this/length();
}

void vec3::print(){
    cout << "[" << componants[0] << "," << componants[1] << "," << componants[2] << "]" << endl;
}

vec3 vec3::cross(vec3 otherVec){
    return vec3(y()*otherVec.z()-z()*otherVec.y(), (z()*otherVec.x()-x()*otherVec.z()), x()*otherVec.y()-y()*otherVec.x());
}

double vec3::lengthSquared()
{
    return componants[0]*componants[0] + componants[1]*componants[1] + componants[2]*componants[2];
}

double vec3::length()
{
   return sqrt(lengthSquared());
}


