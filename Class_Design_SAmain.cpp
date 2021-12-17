//Yuanjin Liang
//Project 4: Class Design Section A
//December 14th 2021

#include <iostream>
#include <string>
#include "Class_Design_SA.h"

using namespace std;

int main() 
{
    MyURL files;

    cout << "URL: ";
    string URL;
    cin >> URL;

    files.scheme = URL.substr(0, URL.find_first_of("/"));
    files.authority = URL.substr(URL.find_first_of("/"), URL.find_last_of(".")-2);
    files.path = URL.substr(URL.find_last_of(".")+4);

    cout << URL << "\n";
    cout << "Scheme: " << files.scheme << "\n";
    cout << "Authority: " << files.authority << "\n";
    cout << "Path: " << files.path << "\n";
}

