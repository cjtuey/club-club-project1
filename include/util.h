/*
    util.h header file: written by Cian Tuey
*/

#ifndef UTIL_H
#define UTIL_H

#include <exception>
#include <typeinfo>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

bool validateInt(string input, int min, int max); // used in userMenu and userInt; probably won't need to call directly

bool validateDouble(string input, double min, double max); // used in userDouble; probably won't need to call directly

int userMenu(vector<string> *options, string prompt = "Select option", string quitOption = "q"); // prints a numbered list of provided options and returns the index selected. I'd recommend changing the default prompt to something meaningful to the application, but the default quitOption is fine

int userInt(int min, int max, string prompt = "Enter an integer: "); // validates and returns an integer from the user within the given range. I'd recommend changing the default prompt to something meaningful to the application

double userDouble(double min, double max, string prompt = "Enter a double: "); // validates and returns a double from the user within the given range. I'd recommend changing the default prompt to something meaningful to the application

string userString(string prompt = "Enter a string: "); // returns a string from the user. I'd recommend changing the default prompt to something meaningful to the application

#endif
