#ifndef SINGLELIST_H
#define SINGLELIST_H
#include "Node.h"

/**************************
		单链表
***************************/

class List
{
public:
	List();					//构造函数
	~List();				//析构函数
	void ClearList();		//清空链表
	bool ListEmpty();		//判断链表是否为空
	int ListLength();		//获取链表的长度
	bool GetElem(int i, Node *pNode);					//获取指定元素
	int LocateElem(Node *pNode);						//寻找第一个满足e的数据元素的位序
	bool PriorElem(Node *currentElem, Node *preElem);	//获取指定元素的前序
	bool NextElem(Node *currentElem, Node *nextElem);	//获取指定元素的后续
	bool ListInsert(int i, Node *pNode);				//在第i个位置插入元素
	bool ListDelete(int i, Node *pNode);				//在第i个位置删除元素
	void ListTraverse();								//遍历线性表
	bool ListInsertHead(Node *pNode);					//从链表头插入数据
	bool ListInsertTail(Node *pNode);					//从链表尾插入数据
private:
	Node * m_pList;
	int m_iLength;
};
#endif