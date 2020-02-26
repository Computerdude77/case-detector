#include <iostream> 
#include <cctype> 
using namespace std; 
int main(int argc, char *argv[]) 
{ 
    char x; 
    cin >> x; 
    if (islower(x)){
        cout << "This is an lower case letter."; 
        return -1;}
    else{
        cout << "This is a upper case letter.";     
        return 1;}
}