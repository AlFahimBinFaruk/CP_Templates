int main()
{
    string f = "";
    for(int i = 0; i < f.size(); i++)
    {
        string t = "";
        for(int j = i; j < f.size(); j++)
        {
            t += f[j];
            cout << t << "\n";
        }
    }
    return 0;
}
