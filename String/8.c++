/*ou are given a string ‘STR’ containing space-separated words. A word is a 
sequence of non-space characters. Your task is to reverse the order of words in ‘STR’.

Note: Try to do it in-place without allocating extra space.

Example:
‘STR’ = “when in doubt use brute force”
The reverse order of words in ‘STR’ is: “force brute use doubt in when”.
Note:
1. ‘STR’ does not contain any leading or trailing spaces.
2. The words are always separated by a single whitespace character.*/

#include<bits/stdc++.h>
using namespace std;

string reverseOrderWords(string str) {
    int size = str.size();
    string s;
    string answer;
    for(int i =size-1;i>=0;i--){
        if(str[i]!=' '){
            s += str[i];
        }else{
            reverse(s.begin(), s.end());
            answer += s+' ';
            s.clear();
        }
    }
    if(!s.empty()){
        reverse(s.begin(),s.end());
        answer +=s;
    }
    return answer;
}

int main(){
    string s;
    cout<<"Enter the string you want to reverse:";
    getline(cin,s);

    string a = reverseOrderWords(s);
    cout<<"The reverse String is:"<<a<<endl;

    return 0;
}