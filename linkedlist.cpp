#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};
node* head;


//Adding any value at the back of the linkedlist
void add(int value){
	node* newnode = new node();
	newnode->data = value;
	newnode->next = NULL;

	if(head == NULL){
		head = newnode;
		
	}
	else{
		node* temp = head;
		while(temp->next!= NULL){
			temp = temp->next;
		}
		temp->next = newnode;


	}
}



void show(){
	node* iteration = head;

	while(iteration != NULL){
		cout << iteration->data << "\n";
		iteration = iteration->next;
	}

}



int main(){

	add(29);
	add(10);
	add(35);
	add(1);
	add(5);
	show();

}

