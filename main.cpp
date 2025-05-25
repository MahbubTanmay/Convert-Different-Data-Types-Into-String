#include <iostream>
#include <string>



using namespace std;
using std::string;


int main(){

    string str;

    int a=10;
    float b=3.14;
    double c=2.71828;
    char d='A';



    str = to_string(a);
    cout << "Int to String: " << str << endl;
    
    
    str = to_string(b);
    cout << "Float to String: " << str << endl;

    str = to_string(c);
    cout << "Double to String: " << str << endl;

    str = d;  //This is important. For char no need to use to_string() to convert as char is already a string with single letter
    cout << "Char to String: " << str << endl;



    cout << "We can also do this without using string variable like " << "Int To String: " << to_string(a)<<" ,Float To String "<< b<< endl;
    return 0;
}
