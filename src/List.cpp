/*
 * List.cpp
 *
 *  Created on: May 18, 2012
 *      Author: jitendriya
 */
#include <iostream>
using namespace std;
#include "../inc/List.h"

List::List() {
	// TODO Auto-generated constructor stub
	 p = NULL;

}

List::~List() {
	// TODO Auto-generated destructor stub
}

void List::insafter(int x)
{
	Nodeptr q,temp;
	if(p == NULL)
	{
		p = new node;
		p->info = x;
		p->next = NULL;
	}
	else
	{
		temp = p;
		while(temp->next != NULL)
		   temp = temp->next;

		q = new node;
		q->info = x;
		q->next = NULL;
		temp->next = q;


	}
}

int List ::remove(int x)
{
	Nodeptr q,r,temp;

	if(p ->info == x )
	{
		 q = p;
		 p = p->next;
		delete q;
	}


	else
		{
		temp = p;
		while( x != temp->info &&  temp != NULL )
			{

			r = temp;
			temp = temp->next;
			}
			if( x == temp->info)
			{

				cout<< "\n deleted node:"<< x;
				r->next = temp->next;
				delete temp;
				return 0;

			}


		cout<< " \n node not found" <<endl;
		}


	return 0;
}

void List :: display()
{
	Nodeptr temp;
	if(p == NULL && p->next == NULL)
	{
		cout<< "no data"<<endl;
	}
	temp = p;
	cout<< "\n elements: ";
	while(temp != NULL)
	{

		cout<<"\t"<<temp->info;
		temp = temp->next;

	}

 }
