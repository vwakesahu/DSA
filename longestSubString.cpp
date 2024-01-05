#include <iostream>
using namespace std;

int findElement(string str, char key)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == key)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    string str = "pwwkew";
    string ans; int left = 0;


    
    
    /*
    str pwwkew
    l: p
    r: w
    ans = pw

    comming w
    update r = w
    push w into ans
    check(w, ans) Yes, update l
    l = 1 = w
    r = w
    check right in ans (r, ans)  Yes, update l
    l = 2 = w
    if(r < l) r = l + 1
    */

    cout << "Counter: " << counter << endl
         << "String: " << ans;
}
