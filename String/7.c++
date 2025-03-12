/*Given 3 Strings, check whether the 3rd string contains all the characters of string 1 and 2 in any order. If all the characters are present, print "YES" otherwise print "NO".

There should not be any extra character and any missing character.

The string s contains uppercase Latin letters only.*/

#include <cstdlib>
#include <algorithm>
using namespace std;

void answer(string s1,string s2,string s)
{
    string s3 = s1+s2;
    int len =0;

    sort(s.begin(),s.end());
    sort(s3.begin(),s3.end());
    
    int size = s3.size();

    for(int i =0;i<size;i++){
        if(s[i]==s3[i]){
            ++len;
        }
    }
    if(len==size){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return ;
}
