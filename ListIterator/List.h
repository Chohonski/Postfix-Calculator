#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <list>

template <typename T>
class List {
public:
	T sum(const list<T>& l) {
		if(p != q) {
			p++;
			return l.indexOf(p) + sum(v);
		} else {
			return 0;
		}
	};

	/*
		typedef list<T>::const_iterator Iterator;
		Iterator end = l.end();
		T s = 0;
		for(Iterator i = l.begin(); i != end; i++) {
			s = s + *i;
		}

	*/
private:
	iterator p = this.begin();
	iterator q = this.end();
}; //class List

#endif