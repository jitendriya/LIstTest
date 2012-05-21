/*
 * main.cpp
 *
 *  Created on: May 18, 2012
 *      Author: jitendriya
 */
#include "../inc/List.h"
#include <iostream>


int main(int argc,char* argv[])
{
	List list;

	list.insafter(10);
	list.insafter(20);
	list.insafter(30);
	list.insafter(60);
	list.insafter(50);
	list.display();
	list.remove(10);
	list.display();
	list.remove(50);
	list.display();

	return 0;
}
