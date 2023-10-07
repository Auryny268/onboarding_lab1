#include <iostream>
#include "name.hpp"
using namespace std;

int main() {
    const string username = get_user_name();
    cout << "Hello World" << username << endl;
    return 0;
}

