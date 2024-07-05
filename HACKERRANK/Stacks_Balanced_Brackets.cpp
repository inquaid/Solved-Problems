#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING expression as parameter.
 */

string isBalanced(string expression)
{
    string s = expression;
    stack<int> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (st.empty() && (s[i] == '(' || s[i] == '{' || s[i] == '['))
        {
            st.push(s[i]);
        }
        else if (st.empty() && (s[i] != '(' || s[i] != '{' || s[i] != '['))
        {
            // st.push(s[i]);
            return "NO";
        }
        else
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            // else if (st.top() == s[i])
            // {
            //     st.push(s[i]);
            // }
            else if (st.top() == '(' && s[i] == ')')
                st.pop();
            else if (st.top() == '{' && s[i] == '}')
                st.pop();
            else if (st.top() == '[' && s[i] == ']')
                st.pop();
            else
                return "NO";
        }
    }
    if (st.empty())
        return "YES";
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string expression;
        getline(cin, expression);

        string res = isBalanced(expression);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
