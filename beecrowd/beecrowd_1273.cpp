#include <bits/stdc++.h>
using namespace std;
int count_length(vector<string> v)
{
    int size = v.size();
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = v[i].size();
        v[i].clear();
    }
    int max_size = *max_element(arr, arr + size);
    return max_size;
}
void display(string str, int s)
{
    int size = str.size();
    int final = s - size;
    for (int i = 0; i < final; i++)
    {
        cout << " ";
    }
    cout << str << endl;
}
int main()
{
    int t;
    while (cin >> t)
    {
        if (t == 0)
        {
            break;
        }
        else
        {
            vector<string> v;
            string str;
            int arr[t];
            for (int i = 0; i < t; i++)
            {
                cin >> str;
                v.push_back(str);
            }
            int s = count_length(v);

            for (int i = 0; i < t; i++)
            {
                string st = v[i];
                display(st, s);
            }
            cout << endl;
        }
    }
    return 0;
}