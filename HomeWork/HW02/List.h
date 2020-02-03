#ifndef List_HPP
#define List_HPP

struct ListValue
{
	ListValue();

	int front();
	int back();

	void push_front();
	void push_back();

	int find(int x);
	int look(int x);

	std::vector<int>_data;

};

#endif // !List_HPP
