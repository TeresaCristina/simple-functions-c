*  string_to_number.cpp
*
*  sep/2020 - Teresa Costa
*
*  Summary: Converts a number from string to int.*/




#include <iostream>
#include <string>
#include <sstream>

#define NOTNUMBER 0

using namespace std;

int returnInt(string);
void printInfo(string, int);

int main(){

	string wordOne = "01978";
        string wordTwo = "Teresa";
	printInfo(wordOne, returnInt(wordOne));
        printInfo(wordTwo, returnInt(wordTwo));

	return 0;
}

int returnInt(string myString){
        stringstream newStr(myString);
        int myNumb = NOTNUMBER;

        newStr >> myNumb;

        return myNumb;
}

void printInfo(string myWord, int myNumber){
	cout << "Word: " << myWord << "  ==>  ";

	if (myNumber == NOTNUMBER){
                cout << "Not a number!" << endl;
        } else {
                cout << "Number: " << myNumber << endl;
        }
}
