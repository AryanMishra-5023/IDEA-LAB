#include<iostream>
#include<string>
using namespace std;
class StringConcatenate{
public:
    string concatenate(const string& str1, const string& str2) {
    return str1 + str2;
    }
    };
    int main()
    {
    StringConcatenate sc;
    string first ="Hello,";
    string second="World!";
    string result=sc.concatenate(first , second);
    cout<<result<<endl;
    return 0;
    }
    
