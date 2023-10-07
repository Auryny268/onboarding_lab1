#include <iostream>
#include "name.hpp"
using namespace std;

int main() {
    const string username = get_user_name();
    cout << "Hello " << username << endl;
    return 0;
}

