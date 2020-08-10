#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void changeStrPigLatin(string& str)
{
    char temp = str[0];
    str.erase(str.begin());
    str.push_back(temp);
    str.append("ay");
    cout << str << " ";
}
int main()
{
    string str;
    getline(cin, str);
    size_t foundSpace=str.find(' ');
    string Substring = str.substr(0, foundSpace);
    while (foundSpace != string::npos)
    {
        changeStrPigLatin(Substring);
        foundSpace++;
        Substring = str.substr(foundSpace, (str.find(' ', foundSpace) - foundSpace));
        foundSpace = str.find(' ', foundSpace);
    }
    foundSpace = str.find_last_of(' ');
    Substring = str.substr(foundSpace+1,string::npos);
    changeStrPigLatin(Substring);
    return 0;
}
