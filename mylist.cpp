#include "mylist.h"


list<int> ls;

/*
	Show contents of list
*/
void show_list()
{
    copy(begin(ls), end(ls), ostream_iterator<int>(cout, "; "));
}

/*
	Insert value at position
*/
void insert()
{
	ls.insert(get_iterator(ls, input<int>()), input<int>());
}

/*
	Append new entry to the end of the list
*/
void append()
{
	ls.push_back(input<int>());
}

/*
	Append new entry to the end of the list
*/
void prepend()
{
	ls.push_front(input<int>());
}

/*
	Sort/order list of numbers
*/
void sort()
{
	ls.sort();
}

/*
	Sort and remove duplicates from list
*/
void unique()
{
	ls.sort(); ls.unique();
}

/*
	Reverses the order of the elements in the list container
*/
void reverse()
{
	ls.reverse();
}

/*
	Remove all even numbers from list
*/
void remove_even()
{
	ls.remove_if(even);
}

/*
	Remove from list by value
*/
void remove_value()
{
	ls.remove(input<int>());
}

/*
	Remove from list by index
*/
void remove_index()
{
	ls.erase(get_iterator(ls, input<int>()));
}