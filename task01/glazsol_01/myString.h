#pragma once

class MyString
{
    char* m_pStr;	//������-���� ������
public:
	MyString();
	MyString(const char *);
	MyString(const MyString &);
	~MyString();

	const char *GetString() const;
	void SetNewString(const char *);
 
};
