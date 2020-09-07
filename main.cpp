/*Put your code here*/

#include "main.hpp"
#include "mainFunctions.cpp"

int main()
{   
    string lol;
    float age = 0;
    getline(cin, lol);
    stringstream(lol) >> age;
    int user_age = getage (age);
    cout << "Your Birth year is " << user_age;
    return 0;
}
