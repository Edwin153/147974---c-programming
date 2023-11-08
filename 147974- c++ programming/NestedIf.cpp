#include <iostream>
using namespace std;
int main(){
    int age;
    string interest, interest2;
    cout<<"please enter the age :";
    cin>>age;

    if (age>=4&&age<=10)
    {
        cout<<"please enter interest:";
        cin>>interest;
        if (interest=="soccer")
        {
        cout<<"admit and assign to soccer play group";
        }
            if (interest=="art"){
                cout<<"admit and assign to art group";

            }else{
                cout<< "amit to another group";
            }
    }

            else {
                cout<<" admission unsuccessful. age invalid";
            }
    

        return 0;
    }


