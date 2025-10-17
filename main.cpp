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
    vector<string> options = { "Option #1", "Option #2", "Option #3" };
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

    // The following is Cian's contingency code, in case no contributions are received by midnight. It's a pale imitation of the project idea, but it's better than nothing.
    vector<string> drinks = {"Bourbon","Old Fashioned","Rye Whiskey","Espresso Martini","Vodka","Manhattan"};
    vector<string> recipes = {"Pouring bourbon...","Pouring bourbon...\nAdding sugar...\nAdding Angostura bitters...\nAdding water...\nGarnishing with orange twist...","Pouring rye whiskey...","Pouring vodka...\nAdding coffee liquer...\nAdding espresso...\nAdding simple syrup...\nGarnishing with coffee beans...","Pouring vodka...","Pouring rye whiskey...\nAdding sweet vermouth...\nAdding Angostura bitters...\nGarnishing with brandied cherry..."};
    vector<double> prices = {4,7,3,8,3,5};
    int drink = userMenu(&drinks, "Welcome to Club Club! What can I get you? (Enter number):") - 1;
    if (drink > -1) {
        cout << recipes.at(drink) << endl;
        cout << "Done! Your total is $" << prices.at(drink) << endl;
    }
    return 0;
}
