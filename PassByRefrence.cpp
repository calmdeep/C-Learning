// PassByReference (where change occurs in actual value)
#include <iostream>
using namespace std;
void pouredChai(int &cups){
    cups = cups + 5;
    cout << "Poured Cups :" << cups << endl;
}
int main(){
    int cups = 3;
    pouredChai(cups);
    cout << "Poured cups:" << cups;
    return 0;
}
