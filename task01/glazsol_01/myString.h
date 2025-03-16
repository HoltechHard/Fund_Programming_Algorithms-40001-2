#pragma once

class MyString
{
    char* m_pStr;	//строка-член класса
public:
	MyString();
	MyString(const char *);
	MyString(const MyString &);
	~MyString();

	const char *GetString() const;
	void SetNewString(const char *);
 
};
