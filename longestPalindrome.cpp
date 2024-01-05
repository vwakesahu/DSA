#include <iostream>
using namespace std;

string reverseString(string str)
{
    int length = str.length();
    string ans(length, ' '); 

    for (int i = length - 1, j = 0; i >= 0; i--, j++)
    {
        ans[j] = str[i];
    }
    return ans;
}

int main()
{
    string q = "kyyrjtdplseovzwjkykrjwhxquwxsfsorjiumvxjhjmgeueafubtonhlerrgsgohfosqssmizcuqryqomsipovhhodpfyudtusjhonlqabhxfahfcjqxyckycstcqwxvicwkjeuboerkmjshfgiglceycmycadpnvoeaurqatesivajoqdilynbcihnidbizwkuaoegmytopzdmvvoewvhebqzskseeubnretjgnmyjwwgcooytfojeuzcuyhsznbcaiqpwcyusyyywqmmvqzvvceylnuwcbxybhqpvjumzomnabrjgcfaabqmiotlfojnyuolostmtacbwmwlqdfkbfikusuqtupdwdrjwqmuudbcvtpieiwteqbeyfyqejglmxofdjksqmzeugwvuniaxdrunyunnqpbnfbgqemvamaxuhjbyzqmhalrprhnindrkbopwbwsjeqrmyqipnqvjqzpjalqyfvaavyhytetllzupxjwozdfpmjhjlrnitnjgapzrakcqahaqetwllaaiadalmxgvpawqpgecojxfvcgxsbrldktufdrogkogbltcezflyctklpqrjymqzyzmtlssnavzcquytcskcnjzzrytsvawkavzboncxlhqfiofuohehaygxidxsofhmhzygklliovnwqbwwiiyarxtoihvjkdrzqsnmhdtdlpckuayhtfyirnhkrhbrwkdymjrjklonyggqnxhfvtkqxoicakzsxmgczpwhpkzcntkcwhkdkxvfnjbvjjoumczjyvdgkfukfuldolqnauvoyhoheoqvpwoisniv", str = "", reverse, ans;
    int ansLength = 0;

    for (int i = 0; i < q.length(); i++)
    {
        for (int j = i; j < q.length(); j++)
        {
            str += q[j];
            reverse = reverseString(str);
            if (str == reverse)
            {
                if (str.length() > ansLength)
                {
                    ans = str;
                    ansLength = ans.length();
                }
            }
        }
        str = "";
    }
    cout << ans;
}