#include "mystack.h"

void mystack::push(int data) {
	node* temp = new node;
	temp->data = data;
	temp->next = top;
	top = temp;
}

void mystack::pop() {
	if (top == NULL) {
		cout << " Стэк уже пуст";
	}
	else {
		node* temp = top;
		top = top->next;
		delete temp;
	}
}

int mystack::get_top() {
	if (top == NULL) {
		cout << " Стэк пуст";
		return -1;
	}
	return (top->data);
}

bool mystack::is_empty() {
	if (top == NULL) {
		return true;
	}
	else return false;
}

void mystack::clear_stk() {
	if (top == NULL) {
		cout << " Стэк уже пуст";
	}
	else {
		while (top != NULL) {
			pop();
		}
		cout << " Стэк очищен";
	}
}

node_it mystack::get_it_top() {
	if (top == NULL) {
		cout << " Стэк пуст";
		return NULL;
	}
	else
	{
		node* temp = top;
		return temp;
	}
}
node_it mystack::get_it_first() {
	if (top == NULL) {
		cout << " Стэк пуст";
		return NULL;
	}
	else {
		node* temp = top;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		return temp;
	}
}

node_it mystack::get_it_next(node_it curr_it) {
	if (curr_it->next != NULL) {
		return curr_it->next;
	}
	else
		return NULL;
}

int mystack::get_it_val(node_it curr_it) {
	return curr_it->data;
}