#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    // string s0;
    // string s1 {"Apple"};
    // string s2 {"Banana"};
    // string s3 {"Kiwi"};
    // string s4 {"apple"};
    // string s5 {s1};      //Apple
    // string s6 {s1,0,3};   //App
    // string s7 (10, 'X');  // XXXXXXXXXX

    // cout << s0 << endl;        //No garbage
    // cout << s0.length() << endl;   // empty string
    // cout << s1 << endl;
    // cout << s2 << endl;
    // cout << s3 << endl;
    // cout << s4 << endl;
    // cout << s5 << endl;
    // cout << s6 << endl;
    // cout << s7 << endl;

    // cout << "=====================\n";
    // cout << boolalpha;
    // cout << (s1==s5) << endl;
    // cout << (s1==s2) << endl;   
    // cout << (s1 > s4) << endl;
    // cout << (s1 == "Apple") << endl;


    cout << "----------------------------\n";
    string s1 = {"The secret world is Boo"};
    string word;
    cout << "Enter your word to find:"; cin >> word;
    size_t position = s1.find(word);
    if(position != string::npos)
        cout << position << endl;
    else
        cout << "Not found word" << endl;
    return 0;
}