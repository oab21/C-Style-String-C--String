#include <iostream>
#include <cstring>  // for c-style string function
#include <cctype>   // for character based-function

using namespace std;

int main(){
    char first_name[20] {} ;
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    // cout << first_name << endl;  //will be the garbage when unitialized, quay lên khởi tạo

    // cout << "Please enter your first name:"; cin >> first_name;
    // cout << "Please enter your last name:"; cin >> last_name;
    // cout << "----------------------------\n";

    // cout << "Hello  " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "and your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;

    // strcpy(full_name, first_name); //copy first_name to full_name
    // strcat(full_name, " "); //concatenate full_name and a space
    // strcat(full_name, last_name); //concatenate last_name to full_name
    // cout << "Your full name is " << full_name << endl;


    // cout << "------------------------------" << endl;
    // cout << "Enter your full name:";
    // cin >> full_name;

    // cout << "Your full name is " << full_name << endl;


    cout << "Enter your full name:";
    cin.getline(full_name, 50);
    cout << "Your name is " << full_name << endl;

    cout << "--------------------" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " is different" << endl;
    cout << "---------------------\n";


    for(size_t i = 0; i < strlen(full_name); ++i){
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;

    cout << "----------------------\n";
    if(strcmp(full_name, temp) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " is different" << endl;

    cout << "-------------------------\n";
    cout << "Result of comparing: " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing: " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;
    return 0;
}