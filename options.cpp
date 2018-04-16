#include "options.h"


/*
	Return list of options
	@return opt
*/
opt get_options()
{
	return {
		{ "insert", { 
			.func 		= insert,
			.params 	= "[int] [index]",
			.desc 		= "Pridaj na poziciu" 
		}},
		{ "prepend", { 
			.func 		= prepend,
			.params		= "[int]",
			.desc		= "Pridaj na zaciatok"
		}},
		{ "append", {
			.func 		= append,
			.params		= "[int]",
			.desc		= "Pridaj na koniec" 
		}},
		{ "unique", {
			.func 		= unique,
			.params		= string(),
			.desc		= "Odstran duplicity" 
		}},
		{ "help", {
			.func 		= show_options,
			.params 	= string(),
			.desc		= "Zobraz menu"
		}},
		{ "show", {
			.func 		= show_list,
			.params 	= string(),
			.desc		= "Zobraz zoznam" 
		}},
		{ "sort", {
			.func 		= sort,
			.params		= string(),
			.desc		= "Zotried"
		}},
		{ "reverse", {
			.func 		= reverse,
			.params		= string(),
			.desc		= "Otoc poradie"
		}},
		{ "noeven", {
			.func 		= remove_even,
			.params		= string(),
			.desc		= "Odober parne"
		}},
		{ "novalue", {
			.func 		= remove_value,
			.params		= "[int]",
			.desc		= "Odober cislo"
		}},
		{ "noindex", {
			.func 		= remove_index,
			.params		= "[index]",
			.desc		= "Odober z pozicie"
		}}
	};
}


/*
	Show list of options
*/
void show_options()
{
	cout << get_options();
}
