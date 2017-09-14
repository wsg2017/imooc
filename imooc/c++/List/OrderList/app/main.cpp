#include "List.h"
#include <iostream>
using namespace std;

int main()
{
	List *plist = new List(5);
	int ii = 1;
	plist->ListInsert(0, &ii);
	ii = 2;
	plist->ListInsert(0, &ii);
	ii = 3;
	plist->ListInsert(0, &ii);
	ii = 4;
	plist->ListInsert(0, &ii);
	ii = 5;
	plist->ListInsert(0, &ii);
	
//	int i = 0;
//	plist->ListDelete(2,&i);
//	cout <<"i: " << i <<endl;
	
//	plist->ClearList();
	plist->ListTraverse(); 
	
	int ielem = 0;
	ii = 3;
	plist->PriorElem(&ii, &ielem);
	cout << ielem <<endl;
	return -1;
}