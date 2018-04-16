#ifndef __MYLIST_H__
#define __MYLIST_H__


#include <list>
#include <iterator>
#include "helpers.h"


using namespace std;


/*
	List of saved items
*/
extern list<int> ls;

/*
	Sort/order list of numbers
*/
void sort();

/*
	Show contents of list
*/
void show_list();

/*
	Append new entry to the end of the list
*/
void append();

/*
	Prepend new entry to the front of the list
*/
void prepend();

/*
	Sort and remove duplicates from list
*/
void unique();

/*
	Insert value at position
*/
void insert();

/*
	Reverses the order of the elements in the list container
*/
void reverse();

/*
	Remove all even numbers from list
*/
void remove_even();

/*
	Remove from list by value
*/
void remove_value();

/*
	Remove from list by index
*/
void remove_index();


#endif