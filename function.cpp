#include <iostream>
using namespace std;

//int checkTemp(int Temperature){
   // return Temperature;
//}
void serveTea(int cups); // function used to return integer return type
void  serveTea(string teaType){
    cout << teaType;
}
int main(){
    //int temp = checkTemp(44);
    //cout << temp;
    //serveTea(22);
    serveTea("Green Tea"); //function Overloading give name to another function.
    return 0;
}
void serveTea(int cups){
    cout << cups;
}
