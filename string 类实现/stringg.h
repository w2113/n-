#pragma once
#include<assert.h>
namespace loopy
{
	class string
	{
        /*friend ostream& operator<<(ostream& out, const string& s);    
        friend istream& operator>>(istream& _cin, loopy::string& s);*/

    public:

        typedef char* iterator;
        string(const char* str = "")
            :_size(strlen(str))
            ,_capacity(_size)
        {
            _str = new char[_capacity + 1];
            strcpy(_str, str);
        }

        string(const string& s)
        {
            if (this != &s)
            {
                _str = new char[s._capacity + 1];
                _size = s._size;
                _capacity = s._capacity;
                memcpy(_str, s._str, _size + 1);
            }
        }

        string& operator=(string tmp)
        {
            swap(tmp);
            return *this;
        }

        ~string()
        {
            _size = _capacity = 0;
            delete[] _str;
            _str = nullptr;
  
        }



            //////////////////////////////////////////////////////////////

            // iterator

        iterator begin()
        {
            return _str;
        }

        iterator end()
        {
            return _str + _size;
        }
        iterator begin()const
        {
            return _str;
        }

        iterator end()const
        {
            return _str + _size;
        }



            /////////////////////////////////////////////////////////////

            // modify

		void push_back(char c)
		{
			if (_size == _capacity)
			{
				reserve(_capacity == 0 ? 4 : _capacity * 2);
			}
			_str[_size] = c;
			_size++;
			_str[_size] = '\0';
		}

		string& operator+=(char c)
		{
			push_back(c);
			return *this;
		}

		void append(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			strcpy(_str + _size, str);
			_size += len;
		}

		string& operator+=(const char* str)
		{
			append(str);
			return *this;
		}

        void clear()
        {
            _str[0] = '\0';
            _size = 0;
        }

        void swap(string& s)
        {
            std::swap(_str, s._str);
            std::swap(_size, s._size);
            std::swap(_capacity, s._capacity);
        }

        const char* c_str()const
        {
            return _str;
        }



        /////////////////////////////////////////////////////////////

        // capacity

        size_t size()const
        {
            return _size;
        }

        size_t capacity()const
        {
            return _capacity;
        }

        bool empty()const
        {
            return _size == 0;
        }

		void resize(size_t n, char c = '\0')
		{
			if (_size >= n)
			{
				_str[_size] = '\0';
				_size = n;
			}
			else
			{
				reserve(n);
				while (_size < n)
				{
					_str[_size] = c;
					_size++;
				}
				_str[_size] = '\0';
			}
		}

        void reserve(size_t n)
        {
            if (n > _capacity)
            {
                char* tmp = new char[n + 1];
                strcpy(tmp, _str);
                delete[] _str;
                _str = tmp;
                _capacity = n;
            }
        }



        /////////////////////////////////////////////////////////////

        // access

        char& operator[](size_t index)
        {
            assert(index < _size);
            return  _str[index];
        }

        const char& operator[](size_t index)const
        {
            assert(index < _size);
            return  _str[index];
        }



        /////////////////////////////////////////////////////////////

        //relational operators

        bool operator<(const string& s)
        {
            return strcmp(_str, s._str) < 0;
        }

        bool operator<=(const string& s)
        {
            return *this < s || *this == s;
        }

        bool operator>(const string& s)
        {
            return !(*this <= s);
        }

        bool operator>=(const string& s)
        {
            return !(*this < s);
        }

        bool operator==(const string& s)
        {
            return strcmp(_str, s._str) == 0;
        }

        bool operator!=(const string& s)
        {
            return !(*this == s);
        }



        // 返回c在string中第一次出现的位置

        size_t find(char c, size_t pos = 0) const
        {
            for (size_t i = pos; i < _size; i++)
            {
                if (_str[i] == c)
                {
                    return i;
                }
            }

            return npos;
        }

        // 返回子串s在string中第一次出现的位置

        size_t find(const char* s, size_t pos = 0) const
        {
            const char* p = strstr(_str + pos, s);
            if (p)
            {
                return p - _str;
            }
            else
            {
                return npos;
            }
        }

        // 在pos位置上插入字符c/字符串str，并返回该字符的位置

        string& insert(size_t pos, char c)
        {
            assert(pos <= _size);
            if (_size == _capacity)
            {
                reserve(_capacity == 0 ? 4 : _capacity * 2);
            }

            // 17:17
            size_t end = _size + 1;
            while (end > pos)
            {
                _str[end] = _str[end - 1];
                --end;
            }

            _str[pos] = c;
            _size++;
        }

        string& insert(size_t pos, const char* str)
        {
            assert(pos <= _size);

            size_t len = strlen(str);
            if (_size + len > _capacity)
            {
                reserve(_size + len);
            }

            // 挪动数据
            int end = _size;
            while (end >= (int)pos)
            {
                _str[end + len] = _str[end];
                --end;
            }

            strncpy(_str + pos, str, len);
            _size += len;
        }

        // 删除pos位置上的元素，并返回该元素的下一个位置

        string& erase(size_t pos, size_t len = npos)
        {
            assert(pos < _size);

            if (len == npos || pos + len >= _size)
            {
                _str[pos] = '\0';
                _size = pos;
            }
            else
            {
                size_t begin = pos + len;
                while (begin <= _size)
                {
                    _str[begin - len] = _str[begin];
                    ++begin;
                }
                _size -= len;
            }
        }
        
        
    private:

        char* _str;
        size_t _size;
        size_t _capacity;
	public:
		const static size_t npos;
	};
	const size_t string::npos = -1;
    ostream& operator<<(ostream& _cout, const string& s)
    {
        for (auto ch : s)
            _cout << ch;
        return _cout;
    }
    istream& operator>>(istream& _cin, loopy::string& s)
    {
        s.clear();
        char buff[129];
        size_t i = 0;
        char ch;
        ch = _cin.get();
        while (ch != ' ' && ch != '\n')
        {
            buff[i++] = ch;
            if (i == 128)
            {
                buff[i] = '\0';
                s += buff;
                i = 0;
            }
            ch = _cin.get();
        }
        if (i != 0)
        {
            buff[i] = '\0';
            s += buff;
        }
        return _cin;
    }
    void test1()
    {
        string str1("123");
        cout << sizeof(str1) << endl;
        //_cout << str1 << endl;
        //_cin >> str1;
        //std::string str1("123456");
    }
}
