#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'renameFile' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING newName
 *  2. STRING oldName
 */

int renameFile(string newName, string oldName)
{
    int n = newName.size();
    int m = oldName.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 1));
    for (int i = 1; i <= n; i++)
    {
        vector<int> dpp(m + 1, 0);
        for (int j = i; j <= m; j++)
        {
            dpp[j] = dpp[j - 1];
            if (newName[i - 1] == oldName[j - 1])
            {
                dpp[j] += dp[i - 1][j - 1];
            }
        }
        dp[i] = dpp;
    }
    return fmod(dp[n][m], 1000000007);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string newName;
    getline(cin, newName);

    string oldName;
    getline(cin, oldName);

    int result = renameFile(newName, oldName);

    fout << result << "\n";

    fout.close();

    return 0;
}
