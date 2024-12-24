#include <iostream>
using namespace std;
int main(){
    int var=5;

    //Store address of var
    int* point_var = &var;

    //print value of var
    cout << "var = " << var <<endl;

    //Print address of var
    cout<<"Address of var (&var): "<<var<<endl;

    //Print pointer point_var
    cout << "point_var" << point_var << endl;

    //print the content of the address point_var points to 
    cout<< "Content of the address pointer to by point_var (*point_var) = " << *point_var << endl;

    return 0;
}