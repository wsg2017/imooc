#include "SingleList.h"
#include <iostream>
using namespace std;

int main()
{
	Node node1;
	node1.data = 3;
	Node node2;
	node2.data = 4;
	Node node3;
	node3.data = 5;
	Node node4;
	node4.data = 6;
	Node node5;
	node5.data = 7;
	Node node6;
	node6.data = 8;
	
	List *list = new List;
/*	list->ListInsertHead(&node1);
	list->ListInsertHead(&node2);
	list->ListInsertHead(&node3);
	list->ListInsertHead(&node4);
	list->ListInsertHead(&node5);
	list->ListInsertHead(&node6);*/
	list->ListInsertTail(&node1);
	list->ListInsertTail(&node2);
	list->ListInsertTail(&node3);
	list->ListInsertTail(&node4);
	list->ListInsertTail(&node5);
	list->ListInsertTail(&node6);
	
	cout << "长度：" << list->ListLength() << endl;
	Node node;
	//list->GetElem(5,&node);
	//list->ListDelete(5, &node);
	//node.data = 0;
	//cout << "Locate:" << list->LocateElem(&node) <<endl;
	//Node curNode;
	//curNode.data =5;
	//if(!list->NextElem(&curNode, &node))
	//{
	//	cout << "NextElem return false!" << endl;
	//}
	//node.data = 10;
	//if(!list->ListInsert(4, &node))
	//{
	//	cout << "ListInsert return false!" << endl;
	//}
	
	//cout << "node值：";
	//node.printNode();
	
	
	cout << "遍历结果：" << endl;
	list->ListTraverse();
	return -1;
}