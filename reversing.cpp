#include <iostream>
using namespace std;

int main() {
    string s,invS=" ";
    cout << "Enter the string:";
    cin >> s;
    int i=s.length()-1;
    while(i>=0){
        invS+=s[i];
        i--;
    }
    cout << "Reversed String =" << invS;
    
}

OUTPUT:
Enter the string:hello!
Reversed String = !olleh

=== Code Execution Successful ===
