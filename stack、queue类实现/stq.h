#pragma once

namespace loopy
{
	template<class T, class Container = deque<T>>
	class stack
	{
	public:
		stack()
		{
		}

		void push(const T& x)
		{
			_con.push_back(x);
		}

		void pop()
		{
			_con.pop_back();
		}

		T& top()
		{
			return _con.back();
		}

		const T& top()const
		{
			return _con.back();
		}

		size_t size()const
		{
			return _con.size();
		}

		bool empty()const
		{
			return _con.empty();
		}
	private:
		Container _con;
	};
	void test1()
	{
		stack<int>s;
		s.push(1);
		s.push(2);
		s.push(3);
		s.push(4);
		while (!s.empty())
		{
			cout << s.top() << endl;
			s.pop();
		}
	}
	template<class T, class Container = deque<T>>
	class queue
	{
	public:
		void push(const T& x)
		{
			_con.push_back(x);
		}

		void pop()
		{
			_con.pop_front();
		}

		const T& front()
		{
			return _con.front();
		}

		const T& back()
		{
			return _con.back();
		}

		bool empty()
		{
			return _con.empty();
		}

		size_t size()
		{
			return _con.size();
		}

	private:
		Container _con;
	};
}