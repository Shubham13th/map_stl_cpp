#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{

    map<string, int> marksMap;
    marksMap["shubham"] = 98;
    marksMap["rakesh"] = 88;
    marksMap["nitesh"] = 78;
    marksMap["raj"] = 68;

    map<string, int>::iterator itr;

    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " = " << (*itr).second << endl;
    }

    cout << "How to count string frequency" << endl;

    string arr[10] = {"d", "b", "c", "b", "c", "a"};

    map<string, int> stringCount;

    for (int i = 0; i < 6; i++)
    {
        string str = arr[i];
        stringCount[str] = stringCount[str] + 1;
    }

    map<string, int>::iterator itrr;

    for (itrr = stringCount.begin(); itrr != stringCount.end(); itrr++)
    {
        cout << (*itrr).first << " = " << (*itrr).second << endl;
    }

    cout << "Another way of print map" << endl;

    for (itrr = stringCount.begin(); itrr != stringCount.end(); itrr++)
    {
        cout << itrr->first << " = " << itrr->second << endl;
    }
    return 0;
}