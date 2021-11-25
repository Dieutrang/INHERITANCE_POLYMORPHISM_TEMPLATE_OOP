#include "interchangeS.h"

template <class T>
void interchangeS<T>::processing(vector<T>& a)
{
	int n = a.size();
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				T temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}