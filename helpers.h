#ifndef __HELPERS_H__
#define __HELPERS_H__

#include <list>
#include <iostream>
#include <functional>
#include <map>
#include <iomanip>


using namespace std;


typedef struct { function<void()> func; string params, desc; } command;
typedef map<string, command> opt;


/*
	Determine if int is even
*/
bool even(const int&);

/*
	Return list iterator at the given index
	@param list [ls]
	@param int [index]
	@return list::iterator
*/
template<typename T>
typename list<T>::iterator get_iterator(list<T>&, int);

/*
	Print options menu
	@param ostream [os]
	@param opt [options]
	@return ostream
*/
ostream& operator<<(ostream& os, const opt options);

/*
	Retrieve user input [cin] of any type
*/
template<typename T>
T input();


#endif