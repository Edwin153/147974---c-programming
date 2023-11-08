#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"please enter the age :";
    cin>>age;

    if(age >=7){
        cout<<"admit to grade school"<<endl;
    }
    else if(age>=5&&age<=6){
        cout<<"admit to kindergarten"<<endl;
    }
    else if(age>=3&&age<=4){
        cout<<"admit to preschool"<<endl;
    }
    else if(age>=1&&age<=2){
        cout<<"admit to play school"<<endl;
    } 
    else {
        cout<<"reject"<<endl;
    }
    
    return 0;
}