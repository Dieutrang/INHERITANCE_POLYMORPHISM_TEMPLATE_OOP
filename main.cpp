#include "programFrame.h"
#include "SATest.h"
#include "sortArray.h"
#include "selectionS.h"
#include "insertionS.h"
#include "interchangeS.h"
#include "SATest.cpp"
#include "selectionS.cpp"
#include "insertionS.cpp"
#include "interchangeS.cpp"

void main()
{
	SATest<float> sortTest(new selectionS<float>());
	sortTest.run(cin, cout);
	return;
}