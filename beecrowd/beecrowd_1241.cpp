#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int len_a = a.length();
        int len_b = b.length();

        if (len_a < len_b)
        {
            cout << "nao encaixa" << endl;
        }
        else
        {
            int len = len_a - len_b;

                      if (a.compare(a.size() - b.size(), b.size(), b) == 0)
            {
                cout << "encaixa" << endl;
            }
            else
            {
                cout << "nao encaixa" << endl;
            }
        }
    }

    return 0;
}