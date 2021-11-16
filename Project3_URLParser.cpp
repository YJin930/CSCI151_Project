//Yuanjin Liang
//Project 3: URLParser
//November 15th 2021

#include <iostream>
#include <string>

using namespace std;

void separateComponents() 
{
    cout << "Please enter a URL: ";
    string URL;
    cin >> URL;

    string scheme = URL.substr(0, URL.find_first_of("/"));
    cout << "Scheme: " + scheme << '\n';

    string author = URL.substr(URL.find_first_of("/"), URL.find_last_of(".")-2);
    cout << "Authority: " + author << '\n';

    string path = URL.substr(URL.find_last_of(".")+4);
    cout << "Path: " + path << '\n';
}

int main()
{
    separateComponents();
}    