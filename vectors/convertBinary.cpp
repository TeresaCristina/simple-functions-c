#include <bits/stdc++.h>

using namespace std;

std::vector<int> convertBinary(int);

int main()
{
    int number = 23;
    cout << number << " in binary is ";

    for (int numberB : convertBinary(number)) {
    	cout << numberB;
    }
    cout << endl;

    return 0;
}

std::vector<int> convertBinary(int myNumber){
    std::vector<int> nBinary;

    while(myNumber > 0){
    	nBinary.insert(nBinary.begin(), myNumber%2);
        myNumber = myNumber/2;
    }

    return nBinary;
}