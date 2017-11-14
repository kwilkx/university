#include <iostream>
#include <string>
#include "test.h"
#include "logic/file.h"

using namespace std;

//bool testWriteName() {
//
//    outToMonitor(writeName(ask()));
//
//
//    string name = inFromKeyboard();
//    string s = writeName(name);
//    string all = string("Hello ") + name + "!";
//    return s == all;
//}

string text;
string out;

string simulateKeyboard(){
    return text;
}

void printedOnScreen(string s){
    out = s;
}

bool TestAnia() {
    text = "Ania";
    start();
    return (out == "Hello " + text + "!");
}
bool TestEmpty() {
    text = "";
    start();
    return (out == "Hello " + text + "!");
}
bool test() {
    return TestAnia() && TestEmpty();
}
