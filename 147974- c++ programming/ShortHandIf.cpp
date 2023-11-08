#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"please enter the age :";
    cin>>age;

    string message=(age>=4)?"admitted to school":"declined! minimum age not reached";
    cout<<message;
    return 0;
}