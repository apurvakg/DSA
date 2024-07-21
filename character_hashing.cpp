#include <bits/stdc++.h>
using namespace std;

void frequencyCount(string str, int N, int P)
{
    int hashh[P+1] = {0};
    // creating hash array
    for (int i = 0; i < N; i++)
    {
        hashh[str[i]- 'a'] += 1;
    }
    // printing hash array
    cout << "Hash array: " << endl;
    for (int i = 0; i < P + 1; i++)
    {
        cout << char(97+i) <<":"<< hashh[i] << " ";
    }
    cout << endl;
    // printing max and least freq of elements
    int maxFreq = 0, minFreq = N;
    char maxEl = 0, minEl = 0;
    for (int i = 1; i < P + 1; i++)
    {
        if (hashh[i] >= maxFreq)
        {
            maxEl = 97+i;
            maxFreq = hashh[i];
        }
        if (hashh[i] < minFreq)
        {
            minEl = 97+i;
            minFreq = hashh[i];
        }
    }
    cout << endl
         << "MAx freq is of element: " << maxEl << endl
         << "MinFreq is of element: " << minEl;
}

int main()
{
    string str;
    char ch;
    // size of array
    cin >> str;
    // max number which can be present in array
    cin >> ch;
    // calling frequncycount() function
    frequencyCount(str, str.size(), ch - 'a');
    return 0;
}
