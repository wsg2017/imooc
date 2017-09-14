#include "List.h"
#include <iostream>
using namespace std;

List::List(int iSize)
{
	m_pList = new int[iSize];
	m_iSize = iSize;
	m_iLength = 0;
}

List::~List()
{
	delete []m_pList;
	m_pList = NULL;
}

void List::ClearList()
{
	m_iLength = 0;
}

bool List::ListEmpty()
{
	if (0 == m_iSize)
	{
		return true;
	}
	return false;
}

int List::ListLength()
{
	return m_iLength;
}

bool List::GetElem(int i, int *e)
{
	if (i > 0 && i <= m_iLength)
	{
		*e = m_pList[i-1];
		return true;
	}
	return false;
}

int List::LocateElem(int *e)
{
	if (!ListEmpty())
	{
		for (int ii = 0; ii < m_iLength; ii++)
		{
			if (m_pList[ii] == *e)
			{
				return ii+1;
			}
		}	
	}
	return -1;
}

bool List::PriorElem(int *currentElem, int *preElem)
{
	if(m_iLength > 1)
	{
		for (int ii = 1; ii < m_iLength; ii++)
		{
			if (m_pList[ii] == *currentElem)
			{
				*preElem = m_pList[ii -1];
				return true;
			}
		}
	}
	return false;
}

bool List::NextElem(int *currentElem, int *nextElem)
{
	if (m_iLength > 1)
	{
		for (int ii = 0; ii < m_iLength-1; ii ++)
		{
			if (m_pList[ii] == *currentElem)
			{
				*nextElem = m_pList[ii+1];
				return true;
			}
		}
	}
	return false;
}

bool List::ListInsert(int i, int *e)
{
	if (m_iLength < m_iSize && i <= m_iLength)
	{
		for (int ii = m_iLength; ii > i; ii--)
		{
			m_pList[ii] = m_pList[ii-1];
		}
		m_pList[i] = *e;
		m_iLength++;
		return true;
	}
	return false;
}

bool List::ListDelete(int i, int *e)
{
	if (m_iLength > 0 && i <= m_iLength)
	{
		*e = m_pList[i-1];
		for (int ii = i; ii <= m_iLength; ii++)
		{
			m_pList[ii-1] = m_pList[ii];
		}
		m_iLength--;
		return true;
	}
	return false;
}

void List::ListTraverse()
{
	for (int ii = 0; ii < m_iLength; ii++)
	{
		cout << m_pList[ii] << ", ";
	}
	cout << endl;
}