// PassByValue
// copy of actual data
// All the changes happens in the copy data , not the orignal one is affected.
#include <iostream>
using namespace std;
void pouredChai(int cups){
    cups = cups + 5;
    cout << "Poured Cups :" << cups << endl;
}
int main(){
    int cups = 4;
    pouredChai(cups);
    cout << "Cups of chai:" << cups;
    return 0;
}
