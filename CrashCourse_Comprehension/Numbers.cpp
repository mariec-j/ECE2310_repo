#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

int int_example = 1;
float float_ex = 2.0;
double double_ex = 2.0;

char char_ex = 'a';
bool bool_ex = true;

cout << "int_example: " << sizeof(int_example) << endl;
cout << "float_example: " << sizeof(float_ex) << endl;
cout << "double_example: " << sizeof(double_ex) << endl;

cout << "char_example: " << sizeof(char_ex) << endl;
cout << "boolean_example: " << sizeof(bool_ex) << endl;
}