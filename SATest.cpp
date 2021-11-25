#include "SATest.h"

template <class T>
istream& operator>>(istream& inDev, vector<T>& a)
{
	int n;
	inDev >> n;
	if (n > 0)
	{
		a.resize(n);
		for (int i = 0; i < a.size(); i++)
		{
			inDev >> a[i];
		}
	}
	return inDev;
}

template <class T>
ostream& operator<<(ostream& outDev, vector<T>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		outDev << a[i] << " ";
	}
	return outDev;
}

template <class T>
SATest<T>::SATest(sortArray<T>* pAlg)
{
	mAlg = pAlg;
}

template <class T>
void SATest<T>::input(istream& inDev)
{
	inDev >> data;
}

template <class T>
void SATest<T>::output(ostream& outDev)
{
	outDev << "Result after sorting: ";
	outDev << data << endl;
}

template <class T>
bool SATest<T>::validData()
{
	return (data.size() > 0);
}

template <class T>
void SATest<T>::startMessage(ostream& outDev)
{
	outDev << "Enter n, then a[0],..., a[n-1]: ";
}

template <class T>
void SATest<T>::processing()
{
	if (mAlg != NULL)
	{
		this->mAlg->processing(data);
	}
}




