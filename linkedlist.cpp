#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

struct node{
	int data;
	node* next;
};
node* head = NULL;


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

void RemoveFirstOccurance(int x){

	if(head == NULL){
        cout << "List is empty\n";
        return;
    }

	node* temp = head;

	if(head->data == x){
		head = temp->next;
		delete temp;
		return;
		
	}

	while(temp != NULL){
		if(temp->next == NULL){
			cout << "No Values matched with the given value" << endl;
			return;
		}
		if(temp->next->data == x){
			node* temp2 = temp->next;
			temp-> next = temp->next->next;
			delete temp2;
			return;
		}
		
		temp = temp->next;
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

	//add(1);
	add(5);
	add(5);
	//add(7);
	RemoveFirstOccurance(5);
	//RemoveFirstOccurance(36);
	cout << "-------------------"<< endl;
	show();
	RemoveFirstOccurance(36);


}

