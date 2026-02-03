#pragma once

#ifndef mystack_h
#define mystack_h

#include <iostream>
#include <stdio.h>

using namespace std;

struct node {
	int data;
	node* next;
};

typedef node* node_it;

class mystack {
private:
	node* top;
public:
	mystack() { top = NULL; };
	~mystack() {};

	void push(int data);
	void pop();
	int get_top();
	bool is_empty();
	void clear_stk();

	node_it get_it_top();
	node_it get_it_first();
	node_it get_it_next(node_it curr_it);
	int get_it_val(node_it curr_it);
};

#endif