#include<iostream>               
using namespace std;            

class Node{
public:
 int data;
 Node *head=NULL;
 Node *next;
 

void Get_first (int H)
{

 Node *n = new Node();
 n->	data=H;
 n->next=head;
 head=n;
}



void Get_last(int t){
	Node*n=new Node;
	n->	data=t;
	n->next=NULL;
	
	if(head==NULL){
		head=n;
	}
	else{
		Node*temp= head;
		
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n;
	}
	
}
 void Display_list(){
	
	Node*temp=head;
	
	while(temp!=NULL){
    cout<<temp->data<<"->";
  temp=temp->next;
	}
	
}
void COUNT_length(Node*n)
{
    int a = 0; 
    n = head; 
    while (n != NULL) {
        a++;
        n = n->next;
    }
    cout<<" Length is : "<< a;
} 
};

int main(){
 Node *head=NULL;
Node ptr;

ptr.Get_first(10);
ptr.Get_first(9);
ptr.Get_first(8);
ptr.Get_first(7);
ptr.Get_first(6);
ptr.Get_first(5);
ptr.Get_first(4);
ptr.Get_first(3);
ptr.Get_first(2);
ptr.Get_first(1);
ptr.Display_list();
ptr.COUNT_length(head);


}


