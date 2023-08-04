#include <iostream>
#include "LinkedList.h"
#include "Array.h"

int main()
{
	//Linked List Test
	CLinkedList<int>	IntList;

	//������ �߰� 0 ~ 10
	for (int i = 0; i < 10; ++i)
	{
		IntList.push_back(i);
	}

	// ������ '5' ����
	IntList.erase(5);

	CLinkedList<int>::iterator	iter;
	CLinkedList<int>::iterator	iterEnd = IntList.end();

	//ó������ ������ ���
	for (iter = IntList.begin(); iter != iterEnd; ++iter)
	{
		std::cout << *iter << std::endl;
	}

	return 0;
}


//int main()
//{
//	CArray<int> mArray;
//
//	for (int i = 0; i < 10; i++)
//	{
//		mArray.push_back(i);
//	}
//	for (int i = 0; i < mArray.size(); ++i)
//	{ 
//		std::cout << mArray[i] << std::endl;
//	}
//
//	CLinkedList<int> mList;
//
//	for (int i = 0; i < 10; i++)
//	{
//		mList.push_back(i);
//	}
//	for (int i = 0; i < mList.size(); ++i)
//	{
//		//std::cout << mList << std::endl;
//	}
//	return 0;
//}