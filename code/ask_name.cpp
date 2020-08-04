#include <iostream>

using namespace std;

int ask_name()
{
    string first_name;
    string last_name;
    string full_name;
    cout << "What is your first name?" << endl;
    cin >> first_name;
    cout << "what is your second name?" << endl;
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << full_name << endl;
    return 0;
}