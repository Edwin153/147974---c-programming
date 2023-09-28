//hello world program in c++
/*147974  tihs code was created by edwin irungu
first code to be written in c++
student in strathmore university
email: edwin.githaiga@strathmore.edu*/

//#include <iostream>//preprocessor directives
//using namespace std;

//int main()
//{
    /*cout<<"hello world \n";
    cout<<"my name is eddie \n";
    int age;
    cout<<"how old are you? \n";
    cin>>age;
    cout<<"i am ";
    cout<< age<<"years old" ;*/

   /* cout<<" Welcome to the wonderful world of c++! \n ";
    cout<<" This is my first C++ output statement \n";
    cout<<" Soon, i will learn how to input data into my program ";


    

    return 0;
}*/


#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Add bullet at the start of each sentence
    for (int i = 0; i < sentence.length(); i++) {
        if (i == 0 || sentence[i - 1] == '.') {
            cout << "* ";
        }
        cout << sentence[i];
    }

    return 0;
}
