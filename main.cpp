#include <iostream>
#include <string>
#include <list>
#include "calculate.h"

using namespace std;

int numOfClasses;
list<string> grade;

int getNumOfClasses(){
    cout << "Enter number of classes" << endl;
    cin >> numOfClasses;
    return numOfClasses;
}

void enterGrades(){
    string input;
    for(int i = 0; i <= numOfClasses; i++){
        cout << "Enter grade for class " << i << ": ";
        cin >> input;
        grade.push_front(input);
    }
}

int main(){
    getNumOfClasses();
    enterGrades();

}

