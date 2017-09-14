#include "SingleList.h"
#include <iostream>
using namespace std;

int menu()
{
	cout << "1.新建联系人" << endl;
	cout << "2.删除联系人" << endl;
	cout << "3.浏览通讯录" << endl;
	cout << "4.退出通讯录" << endl;
	
	int order = 0;
	
	cout << "请输入：";
	cin >> order;
	return order;
}

void createPerson(List *pList)
{
	Person person;
	Node node;
	cout << "联系人姓名：";
	cin >> person.name;
	cout << endl << "电话号码：";
	cin >> person.phone;
	node.data = person;
	pList->ListInsertHead(&node);
}

int main()
{
	List *pList = new List;
	if(pList == NULL)
	{
		return -1;
	}
	int order = 0;
	while(order != 4)
	{
		order = menu();
		switch(order)
		{
			case 1:
				cout << "用户指令-----新建联系人：" << endl;
				createPerson(pList);
				break;
			case 2:
				cout << "用户指令-----删除联系人：" << endl;
				break;
			case 3:
				cout << "用户指令-----浏览通讯录：" << endl;
				pList->ListTraverse();
				break;
			case 4:
				cout << "用户指令-----退出通讯录：" << endl;
				break;
			default:
				break;
		}
	}
	delete pList;
	pList = NULL;
	return -1;
}

/*
	List *pList = new List;
	Node *pNode = new Node;
	pNode->data.name = "James";
	pNode->data.phone = "12315";
	pList->ListInsertHead(pNode);
	
	Node node;
	node.data.name = "娜美";
	node.data.phone = "243";
	pList->ListInsertHead(&node);
	pList->ListTraverse();
	
	delete pNode;
	pNode = NULL;
	delete pList;
	pList = NULL;
*/