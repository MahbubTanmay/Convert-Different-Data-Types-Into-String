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

    str = string(1,d);  //This is important. For other : to_string(variable_name_here) , for char string(repeat_count , char_variable_name)
    // string(1,'A')   output: A
    // string(2,'A')   output: AA
     // string(3,'A')   output: AAA
    
    cout << "Char to String: " << str << endl;



    cout << "We can also do this without using string variable like " << "Int To String: " << to_string(a)<<" ,Float To String "<< b<< endl;
    return 0;
}
