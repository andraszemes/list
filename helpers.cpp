#include "helpers.h"


/*
	Return list iterator at the given index
	@param list [ls]
	@param int [index]
	@return list::iterator
*/
template<typename T>
typename list<T>::iterator get_iterator(list<T> &ls, int index)
{
    if(ls.size() > index && index >= 0)
    {
        typename list<T>::iterator it = ls.begin();
        advance(it, index);
        return it;
    }

    throw out_of_range("index_out_of_range");
    return typename list<T>::iterator();
}

/*
	Print options menu
	@param ostream [os]
	@param opt [options]
	@return ostream
*/
ostream& operator<<(ostream& os, const opt options)  
{
	for (const auto &p : options) {
	   os << setfill('.') << setw(30) << left;
	   os << p.first + p.second.params;
	   os << p.second.desc;
	   os << endl;
	}
    return os;
}

/*
	Retrieve user input [cin] of any type
*/
template<typename T>
T input()
{
	T in;
	cin >> in;
	return in;
}

/*
	Determine if int is even
*/
bool even(const int &value)
{
	return (value % 2) == 0;
}