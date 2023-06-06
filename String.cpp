#include<bits/stdc++.h>
 
using namespace std;
int main() {
    
    string s1; //Always define like ""
    char c = 'a'; // Always in single ''
    
    
    cout<<"Please enter some text : "<<endl;
    getline(cin, s1);
    
    cout<<"output is : "<<s1<<endl;
    
    cout<<"second letter of string s1 is : "<<s1[1]<<endl;
    
    cout<<"lenght of the given string is : "<<s1.length()<<endl;
    
    reverse(s1.begin(), s1.end());
    
    cout<<"Revesred string is : "<<s1<<endl;
    
}


/* OUTPUT.....
Please enter some text : 
pratham
output is : pratham
second letter of string s1 is : r
lenght of the given string is : 7
Revesred string is : mahtarp

*/
