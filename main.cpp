#include <iostream> 
#include <cctype> 
using namespace std; 
bool legal_int(char *str) {
    while (*str)
        if (!islower(*str++))
            return false;
    return true;
}

bool legal_num(char *str) {
    while (*str)
        if (!isdigit(*str++))
            return false;
    return true;
}

int main(int argc, char *argv[]) 
{ 
    if (argc != 2 || legal_num(argv[1]) == true){
        cout << "Please only input letters for this program." << endl;
        return 0;
    }
    if( (legal_int(argv[1]) == true) ){
        cout << "This is an lower case letter." << endl; 
        return -1;}
    else{
        cout << "This is a upper case letter." << endl;     
        return 1;}
}