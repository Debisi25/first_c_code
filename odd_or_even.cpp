#include <iostream>
#include <string>
using namespace std;
 
void message(string a){
 cout<<a<<endl;
}
int main(){
    int inp;
    cout << "Enter a number: " << "\n";
    cin >> inp;
    if (cin.fail()) {
        message("Invalid input. Please enter an integer.");
        return 1; 
    }
    if(inp == 0){
        message("A 0; Do with that information what you want ");
        return 0;
    }
    int res = inp % 2;
    if(res != 0){
        message("The number is odd");
    } else {
         message("The number is even");
    }
    return 0;
}