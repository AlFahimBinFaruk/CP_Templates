string armstrongNumber(int n)
{
    string s = to_string(n);
    int N = n, r = 0;
    while (n > 0)
    {
        int nw = n % 10;
        r += pow(nw, s.size());
        n = n / 10;
    }
    if (r == N)
        return "Yes";
    else
        return "No";
}
