#include<iostream>
using namespace std ;

string replacepi(string s){
    //creat a empty string ;
    string p;
    int size = s.size();
    for (int i = 0; i < size; ++i) {
 
        if (i + 1 < size and s[i] == 'p' and s[i + 1] == 'i') {
            p += "3.14";
            i++;
        }
 
        // Append the current letter
        else {
            p += s[i];
        }
    }
    return p;

}
int main(){
    string s;
    getline(cin,s);
    cout<<replacepi(s);

}