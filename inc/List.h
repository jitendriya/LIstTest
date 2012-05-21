/*
 * List.h
 *
 *  Created on: May 18, 2012
 *      Author: jitendriya
 */

#ifndef LIST_H_
#define LIST_H_

class List {

protected:
protected:
	struct node
	{
		int info;
		struct node* next;
	};
	typedef struct node* Nodeptr;
	Nodeptr p;

public:
	List();
	virtual ~List();
	void insafter(int );
	int remove(int);
	void display();


};

#endif /* LIST_H_ */
