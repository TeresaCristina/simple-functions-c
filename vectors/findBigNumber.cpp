#include <bits/stdc++.h>


using namespace std;

int findBig(std::vector<int>);

int main()
{
    std::vector<int> newArray;
    newArray.push_back(234);
    newArray.push_back(10000);
    newArray.push_back(4567);
    newArray.push_back(2);

    cout << "The biggest number is " << findBig(newArray) << endl;

    return 0;
}

int findBig(std::vector<int> mySeq){
    int bigger = 0;
    for (int it: mySeq){
        if (it > bigger){
            bigger = it;
        }
    }
    return bigger;
}