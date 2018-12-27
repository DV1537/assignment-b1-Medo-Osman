#include<crtdbg.h>
#include<iostream>
#include<fstream>

using namespace std;

int main() {

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


	system("pause");

	return 0;
}