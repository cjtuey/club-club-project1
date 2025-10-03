/*
    main.cpp: written by Cian Tuey
*/

#include <iostream>
using namespace std;

#include "include/ingredients.h"
#include "include/ordering.h"
#include "include/mixing.h"
#include "include/payment.h"
#include "include/util.h"

void utilTest() {
    // Each test should echo the user's input if the input is valid, or retry if the input is invalid
    vector<string> options = {"Option #1", "Option #2", "Option #3"};
    cout << userMenu(&options) << endl; // test select from menu options
    cout << userInt(-1, 1) << endl; // test get integer from user
    cout << userDouble(-1.1, 1.1) << endl; // test get double from user
    cout << userString() << endl; // test get string from user
}

void stubs() {
    ingredientsStub();
    orderingStub();
    mixingStub();
    paymentStub();
}

int main() {
//    stubs(); // uncomment to run function stubs from each member's source file. Used to ensure the whole project is being integrated properly
//    utilTest(); // uncomment to run test code for util.h
    return 0;
}
