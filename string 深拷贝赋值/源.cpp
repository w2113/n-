#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:6031)
#include<iostream>

class string
{
public:

	string(const char* str = "")
	{
		if (str == nullptr)
			str = "";
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	string(const string& s)
		:_str (new char[strlen(s._str) + 1])
	{
		strcpy(_str, s._str);
	}

	string& operator=(const string& s)
	{
		char* tmp = new char[strlen(s._str) + 1];
		strcpy(tmp, s._str);
		_str = tmp;
		return *this;
	}

	~string()
	{
		delete[] _str;
		_str = nullptr;
	}
	void ccout()
	{
		std::cout << _str << std:: endl;
	}
private:

	char* _str;

};
int main()
{
	string s1("123456");
	s1.ccout();
	string s2;
	s2.ccout();
	string s3(s1);
	s3.ccout();
	s2 = s3;
	s2.ccout();
	return 0;
}