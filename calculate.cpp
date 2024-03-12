#include <iostream>
#include <cmath>
#include <list>
#include <string>

using namespace std;

double calculateTotal(const list<string>& grades) {
    double total = 0;
    for(const string& grade : grades){
        if(grade == "A+"){
            total += 4.3;
        }else if(grade == "A"){
            total += 4;
        }else if(grade == "A-"){
            total += 3.7;
        }else if(grade == "B+"){
            total += 3.3;
        }else if(grade == "B"){
            total += 3;
        }else if(grade == "B-"){
            total += 2.7;
        }else if(grade == "C+"){
            total += 2.3;
        }else if(grade == "C"){
            total += 2;
        }else if(grade == "C-"){
            total += 1.7;
        }else if(grade == "D+"){
            total += 1.3;
        }else if(grade == "D"){
            total += 1;
        }else{
            total += 0;
        }
    }
    return total;
}

double calcGPA(double total, int numClasses){
    double gpa = total / numClasses;
    return gpa;
}