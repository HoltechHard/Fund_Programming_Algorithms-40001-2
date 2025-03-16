#include <string>
#include "myString.h"
using namespace std;

// Определение конструктора.
MyString::MyString()
{
	m_pStr = nullptr;
}

MyString::MyString(const char *str)
{
	m_pStr = new char[strlen(str) + 1];
	strcpy(m_pStr, str);
}

MyString::MyString(const MyString &str)
{
	m_pStr = new char[strlen(str.m_pStr) + 1];
	strcpy(m_pStr, str.m_pStr);
}

// Определение деструктора.
MyString::~MyString()
{
	delete [] m_pStr;
}

const char * MyString::GetString() const
{
	return m_pStr;
}


void MyString::SetNewString(const char *newStr)
{
	delete [] m_pStr;
	
	m_pStr = new char[strlen(newStr) + 1];
	strcpy(m_pStr, newStr);
}