#include <iostream>
using namespace std;

string get_user_name() {
    string username;
    cout << "Enter your name: ";
    cin >> username;
    return username;
}