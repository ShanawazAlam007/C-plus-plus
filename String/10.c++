/*

Determine if a given string ‘S’ is a palindrome using recursion. 
Return a Boolean value of true if it is a palindrome and false if it is not.

Note: You are not required to print anything, just implement the function. 
Example:
Input: s = "racecar"
Output: true
Explanation: "racecar" is a palindrome.

*/

#include<iostream>
#include<string>
using namespace std;

bool checkPal(string &str, int s, int e){
    if(s<=e){
        if(str[s]!=str[e]){
            return false;
        }
        return checkPal(str,++s,--e);
    }
}

bool isPalindrome(string& str) {
    
    return checkPal(str,0,str.size()-1);
}


int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;

    bool a = isPalindrome(s);
    if(a){
        cout<<"The string is Palindrome"<<endl;
    }else{
        cout<<"The string is not Palindrome"<<endl;
    }

    return 0;
}