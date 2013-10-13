#include <iostream>
using namespace std;
class Node{
public:
	int data;
	Node* ptr;
};
class zhan{
public:
	void push(int item);
	void pop();
	bool isEmpty();	
	Node* head;
};
void zhan::push(int item){
	Node* p1=(Node*)malloc(sizeof(Node));
	p1->data=item;
	p1->ptr=head;
	head=p1;
}
void zhan::pop(){
	Node* q=head;
	head=head->ptr;
	delete(q);
}
bool zhan::isEmpty(){
	return (head==NULL);
}
int main(){
	zhan GK;
	GK.head=NULL;
	GK.push(3);
	GK.push(4);
	GK.push(5);
	if(!GK.isEmpty()){
	GK.pop();
	}
	else{
	cout<<"栈已经空"<<endl;
	}
	if(!GK.isEmpty()){
	GK.pop();
	}
	else{
	cout<<"栈已经空"<<endl;
	}if(!GK.isEmpty()){
	GK.pop();
	}
	else{
	cout<<"栈已经空"<<endl;
	}if(!GK.isEmpty()){
	GK.pop();
	}
	else{
	cout<<"栈已经空"<<endl;
	}
	if(!GK.isEmpty()){
	GK.pop();
	}
	else{
	cout<<"栈已经空"<<endl;
	}
}