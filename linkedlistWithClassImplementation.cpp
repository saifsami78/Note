#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

struct node{
    int data;
    node* next;
};

class LinkedList {

private:
    node* head = NULL;

public:

    // Adding any value at the back of the linkedlist
    void add(int value){
        node* newnode = new node();
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL){
            head = newnode;
        }
        else{
            node* temp = head;
            while(temp->next != NULL){
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
                temp->next = temp->next->next;
                delete temp2;
                return;
            }

            temp = temp->next;
        }
    }

    void makeCycleToHead(){ //make a cycle
        if(head == NULL) return;

        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = head;  // create cycle
    }

    void ReverseLinkedlist(){
        node* prev = NULL;
        node* current = head;
        node* nextNode = NULL;
        while(current != NULL){
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;

    }

    bool hasCycle(){
        node* fast = head;
        node* slow = head;
        while(fast != nullptr && fast-> next != NULL){
            slow = slow->next;
            fast = fast-> next-> next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }

    void show(){
        node* iteration = head;

        while(iteration != NULL){
            cout << iteration->data << "\n";
            iteration = iteration->next;
        }
    }
};

int main(){

    

    LinkedList list2;
    list2.add(5);
    list2.add(14);
    list2.add(10);
    list2.add(15);
    list2.makeCycleToHead();
    cout << list2.hasCycle() << endl;

}