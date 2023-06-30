void recurse(long long cur, long long n, vector<long long> &res)
{
    if (cur > n)
    {
        return;
    }

    if (cur != 0)
    {
        res.push_back(cur);
    }

    recurse(cur * 10 + 2, n, res);
    recurse(cur * 10 + 5, n, res);
}

vector<long long> createSequence(long long n)
{
    vector<long long> res;
    recurse(0, n, res);
    sort(res.begin(), res.end());
    return res;
}