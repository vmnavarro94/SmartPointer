#pragma once
#include"ReferenceCount.h"

template<class T>
class SmartPointer
{
public:
	T* ptr{ nullptr };
	ReferenceCount* rc{ nullptr };

	SmartPointer() : ptr(0), rc(0)
	{
		rc = new ReferenceCount();
		rc->increment();
		rc->displayCount();
	}

	SmartPointer(T* pointer) :ptr(pointer), rc(0) 
	{
		rc = new ReferenceCount();
		rc->increment();
	}

	SmartPointer(const SmartPointer<T>& sp) : ptr(sp.ptr), rc(sp.rc)
	{
		rc->increment();
	}

	~SmartPointer()
	{
		if (rc->decrement() == 0)
		{
			delete ptr;
			delete rc;
		}
	}

	T& operator*() {
		return *ptr;
	}

	T* operator->() {
		return ptr;
	}

	SmartPointer<T>& operator = (const SmartPointer<T>& sp)
	{
		if (this != &sp)
		{
			if (rc->decrement() == 0)
			{
				delete ptr;
				delete rc;
			}

			ptr = sp.ptr;
			rc = sp.rc;
			rc->increment();

		}

		return *this;
	}
};

