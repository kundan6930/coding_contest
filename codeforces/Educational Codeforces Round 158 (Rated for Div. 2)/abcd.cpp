vector<vector<string>> solve(vector<string> &aa, string bb)
{
    sort(aa.begin(), aa.end());
    int n = bb.size(), m = aa.size();
    int i = 0, l = 0, r = m - 1;
    vector<vector<string>> ans;
    while (i < n)
    {
        while (l <= r and (aa[l].size() == i || (aa[l][i] != bb[i])))
            l++;
        while (l <= r and (aa[r].size() == i || (aa[r][i] != bb[i])))
            r--;
        vector<string> ans;
        int k = l, count = 3;
        while (count--)
        {
            if (k > r)
                break;
            ans.push_back(aa[k++]);
        }
        ans.push_back(ans);
        i++;
    }
    return ans;
}