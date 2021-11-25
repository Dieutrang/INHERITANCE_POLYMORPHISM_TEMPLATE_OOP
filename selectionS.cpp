#include "selectionS.h"

template <class T>
void selectionS<T>::processing(vector<T>& a)
{
	int n = a.size() - 1;
	for (int i = 0; i < n; i++)
	{
		int idMin = i;
		for (int j = i + 1; j <= n; j++)
		{
			if (a[j] < a[idMin])
				idMin = j;
		}
		T temp = a[idMin];
		a[idMin] = a[i];
		a[i] = temp;
	}
}

