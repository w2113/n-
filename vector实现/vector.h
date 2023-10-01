#pragma once
#include<assert.h>
namespace loopy
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		iterator begin()
		{
			return _start;
		}
		const iterator begin() const
		{
			return _start;
		}
		iterator end()
		{
			return _finish;
		}
		const iterator end() const
		{
			return _finish;
		}
		vector(){}
		~vector()
		{
			delete[] _start;
			_start = _finish = _end_of_storage = nullptr;
		}
		vector(int n, const T& value = T())
		{
			reserve(n);
			for (size_t i = 0; i < n; i++)
			{
				push_back(value);
			}
		}
		template<class InputIterator>
		vector(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				push_back(*first);
				first++;
			}
		}
		void swap(vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_end_of_storage, v._end_of_storage);
		}
		vector(const vector<T>& v)
		{
			vector<T> tmp(v.begin(), v.end());
			swap(tmp);
		}
		vector<T>& operator= (vector<T> v)
		{
			swap(v);
			return *this;
		}
		size_t size() const
		{
			return _finish - _start;
		}
		size_t capacity() const
		{
			return _end_of_storage - _start;
		}
		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t sz = size();
				T* tmp = new T[n];
				if (_start )
				{
					for (int i = 0; i < size(); i++)
					{
						tmp[i] = _start[i];
					}
					delete[] _start;
				}
				_start = tmp;
				_finish = tmp + sz;
				_end_of_storage = _start + n;
			}
		}
		void resize(size_t n, const T& value = T())
		{
			if (n <= size())
			{
				_finish = _start + n;
			}
			else
			{
				reserve(n);
				while (_finish < _start + n)
				{
					*_finish = value;
					++_finish;
				}
			}
		}
		T& operator[](size_t pos)
		{
			assert(pos < size());
			return _start[pos];
		}
		const T& operator[](size_t pos)const
		{
			assert(pos < size());
			return _start[pos];
		}
		void push_back(const T& x)
		{
			if (_finish == _end_of_storage)
			{
				size_t newcp = (capacity() == 0 ? 4 : capacity() * 2);
				reserve(newcp);
			}
			*_finish = x;
			_finish++;
		}
		void pop_back()
		{
			assert(_finish == _start);
			_finish--;
		}
		
		iterator insert(iterator pos, const T& x)
		{
			assert(pos >= _start);
			assert(pos <= _finish);
			if (_finish == _end_of_storage)
			{
				size_t len = pos - _start;
				size_t newcp = (capacity() == 0 ? 4 : capacity() * 2);
				reserve(newcp);
				pos = _start + len;
			}
			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				--end;
			}
			*pos = x;
			_finish++;
			return _start;
		}
		iterator erase(iterator pos)
		{
			assert(pos >= _start);
			assert(pos < _finish);

			iterator it = pos + 1;
			while (it < _finish)
			{
				*(it - 1) = *it;
				++it;
			}

			--_finish;

			return pos;
		}
	private:
		iterator _start = nullptr;
		iterator _finish = nullptr;
		iterator _end_of_storage = nullptr;
	};
	void test1()
	{
		vector<int>v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;
		vector<int>v1(v);
		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;
		v.insert(v.begin()+2, 5);
		v.erase(v.begin() + 2);
		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}
}