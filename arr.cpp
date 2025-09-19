#include <iostream>
using namespace std;

//int -> return type
//func1 -> name of function
//() -> arguments, int a, int b

int func1(int a, int b){
    //function definition
    int c = a+b;
    return c;
}

// int[] function1(){
//     return 
// } //pointer..

int main() {
    int arr[5];

    // dynamic
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
}
int x = 5; //int

void* ptr = &x; //& - address

//address - 00000 - FFFFF (Number? )

//pointer -> type of? int pointer. char*
//void* ptr = &x

char p = 'g';
char* ptr1 = &p;  // address is char? 

//address of p goes into ptr1
