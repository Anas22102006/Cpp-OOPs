#include <mysql.h>
#include <iostream>

using namespace std;

int main() {
    cout << mysql_get_client_info() << endl;
}