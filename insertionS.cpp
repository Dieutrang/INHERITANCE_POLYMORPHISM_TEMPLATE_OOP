#include "insertionS.h"
template <class T>
void insertionS<T>::processing(vector<T>& a)
{
    int i, j;
    T key;
    int n = a.size();
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}


