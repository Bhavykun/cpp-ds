// #include <stdio.h> --> library including, no of functions predefined.

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }

//g++ new.cpp -o new - compile step
//./new - run step

//c lang - legacy, oops no, c++ yes oops
//array -> inbuilt

int arr[5]; //implemnt
//linked list > implement
//sll dll cll


//group of strings -> string array
//group of numbers ->  


#include <iostream>
//using namespace std; -> namespaces
//
std::cout<<

namespace circle{
    double area(double radius) {
    return 3.14 * radius * radius;
}
}
//implementation diff, name and parameters same.
namespace square{
    double area(double side) {
    return side*side;

}
}

circle::area(10);
square::area(10);
:: -> scope
int a;
int a;