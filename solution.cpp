#include <iostream>
#include<vector>
#include<stack>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    string d;
    stack<char>s;
    for (int i = input.length() - 1; i >= 0; i--) {
        if(input[i]!=' ')
        {
            s.push(input[i]);
        }
        else{
            while(!s.empty())
            {
                d+=s.top();
                s.pop();
            }
            d+=' ';
        }
        
    }
    while(!s.empty())
            {
                d+=s.top();
                s.pop();
            }
            d+=' ';
    return d;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
