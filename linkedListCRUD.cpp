#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
struct node{
	int data,no;
	node *head=NULL,*tail=NULL,*next,*curr,*temp;
	void Create(){
		temp=new node;
		cout<<"Enter data in Node: ";
		cin>>temp->data;
		temp->next=NULL;
	}
	void addNode(){
		system("cls");
		Create();
		if(head==NULL){
			head=temp;
			tail=temp;
		}
		else{
			tail->next=temp;
			tail=temp;
		}
	}
	void addNodeBefore(){
		system("cls");
		Create();
		if(head!=NULL){
			temp->next=head;
			head=temp;
		}
		else{
			cout<<"linklist is empty";
		}
	}
	void insertNode(){
		system("cls");
		Create();
		cout<<"After which node u want to add: ";
		cin>>no;
		curr=head;
	}
	void PrintNodes(){
		system("cls");
		curr=head;
		cout<<"******Result******\n\n";
		while(curr!=NULL){
			cout<<curr->data<<endl;
			curr=curr->next;
		}
		getch();
	}
	void SearchNode(){
		system("cls");
		int counter=1;
		curr==head;
		cout<<"Enter data to to search: ";
		cin>>no;
		while(curr!=NULL){
			if(curr->data==no){
				cout<<"Data found on "<<counter<<" node";
				getch();
				break;
			} 
			counter++;
			curr=curr->next;
		}	
	}
	void UpdateNode(){
		system("cls");
		cout<<"Enter data to search for Update : ";
		cin>>no;
		curr=head;
		while(curr!=NULL){
			if(curr->data==no){
				cout<<"Enter data to Update now: ";
				cin>>no;
				curr->data=no;
				break;
			}
			curr=curr->next;
		}
	}
	void DeleteNode(){
		system("cls");
		curr=head;
		cout<<"Enter data to delete: ";
		cin>>no;
		while(curr!=NULL){
			if(curr->next->data==no){
				temp=curr->next;
				curr->next=curr->next->next;
				break;
			}
			else{
				curr=curr->next;
			}
		}
	}
};
int main(){
	node obj;
	int n;
	do{
		system("cls");
		cout<<"\n\n\t\t1. Add Node\n\n\t\t2. Add Node Before"
			<<"\n\n\t\t3. Insert Node\n\n\t\t4. Search Node"
			<<"\n\n\t\t5. Print Node\n\n\t\t6. Delete Node "
			<<"\n\n\t\t7. Update Node\n\n\t\t8.Exit\n\n\tEnter Menu : ";
		cin>>n;
		switch(n){
			case 1:{
				obj.addNode();
				break;
			}
			case 2:{
				obj.addNodeBefore();
				break;
			}
			case 3:{
				obj.insertNode();
				break;
			}
			case 4:{
				obj.SearchNode();
				break;
			}
			case 5:{
				obj.PrintNodes();
				break;
			}
			case 6:{
				obj.DeleteNode();
				break;
			}
			case 7:{
				obj.UpdateNode();
				break;
			}
			case 8:{
				break;
			}
		}
	}
	while(n!=6);
}
