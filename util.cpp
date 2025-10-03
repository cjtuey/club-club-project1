/*
    util.cpp: written by Cian Tuey
 */

#include "include/util.h"

bool validateInt(string input, int min, int max) {
    try {
        string inputTrimmed;
        if (input.at(0) == '-') {
            inputTrimmed = input.substr(1, input.size() - 1);
        } else {
            inputTrimmed = input;
        }
        for (char c : inputTrimmed) {
            stoi(string(1, c));
        }
        int converted = stoi(input);
        if (converted < min || converted > max) {
            throw exception();
        }
    } catch (exception &e) {
        cout << "Input must be an integer in range " << min << " to " << max << endl;
        return false;
    }
    return true;
}

bool validateDouble(string input, double min, double max) {
    try {
        bool foundDecimal = false;
        string inputTrimmed;
        if (input.at(0) == '-') {
            inputTrimmed = input.substr(1, input.size() - 1);
        } else {
            inputTrimmed = input;
        }
        for (char c : inputTrimmed) {
            if (foundDecimal || c != '.') {
                stod(string(1, c));
            } else {
                foundDecimal = true;
            }
        }
        double converted = stod(input);
        if (converted < min || converted > max) {
            throw exception();
        }
    } catch (exception &e) {
        cout << "Input must be a double in range " << min << " to " << max << endl;
        return false;
    }
    return true;
}

int userMenu(vector<string> *options, string prompt, string quitOption) {
    string userIn;
    cout << prompt << endl;
    cout << "(1-" << options->size() << ", or \"" << quitOption << "\" to cancel:" << endl;
    for (int i = 1; i <= options->size(); ++i) {
        cout << i << ". " << options->at(i - 1) << endl;
    }
    do {
        getline(cin, userIn);
        if (userIn == quitOption) {
            return 0;
        }
    } while (!validateInt(userIn, 1, options->size()));
    return stoi(userIn);
}

int userInt(int min, int max, string prompt) {
    string userIn;
    do {
        cout << prompt;
        getline(cin, userIn);
    } while (!validateInt(userIn, min, max));
    return stoi(userIn);
}

double userDouble(double min, double max, string prompt) {
    string userIn;
    do {
        cout << prompt;
        getline(cin, userIn);
    } while (!validateDouble(userIn, min, max));
    return stod(userIn);
}

string userString(string prompt) {
    string userIn;
    cout << prompt;
    getline(cin, userIn);
    return userIn;
}