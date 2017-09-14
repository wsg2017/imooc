#ifndef LIST_H
#define LIST_H


/**************************
		顺序链表
***************************/

class List
{
public:
	List(int iSize);		//构造函数
	~List();				//析构函数
	void ClearList();		//清空链表
	bool ListEmpty();		//判断链表是否为空
	int ListLength();		//获取链表的长度
	bool GetElem(int i, int *e);						//获取指定元素
	int LocateElem(int *e);								//寻找第一个满足e的数据元素的位序
	bool PriorElem(int *currentElem, int *preElem);		//获取指定元素的前序
	bool NextElem(int *currentElem, int *nextElem);		//获取指定元素的后续
	bool ListInsert(int i, int *e);						//在第i个位置插入元素
	bool ListDelete(int i, int *e);						//在第i个位置删除元素
	void ListTraverse();								//遍历线性表
private:
	int * m_pList;
	int m_iLength;
	int m_iSize;
};
#endif