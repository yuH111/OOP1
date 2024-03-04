#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node * next;
		Node * prev;
		Node(int value){
			data=value;
			next=NULL;
			prev=NULL;
		}
};

class DoublelyLinkedList{
	protected:
		Node * head;
		Node * tail;
	public:
		DoublelyLinkedList(){
			head=NULL;
			tail=NULL;
		}
		void them(int value){
			Node* newNode= new Node(value);
			if(!head){
				head=newNode;
				tail=newNode;
			}
			else{
				tail->next=newNode;
				newNode->prev=tail;
				tail=newNode;
			}
		}
		void xoa(){
			if(!head){
				cout<<"Danh sach trong, khong the xoa."<<endl;
			}
			else if(!head->next){
				delete head;
				head=NULL;
				tail=NULL;
			}
			else{
				Node* temp=tail;
				tail=tail->prev;
				tail->next=NULL;
				delete temp;
			}
		}
		
		void hienThi(){
			Node* temp=head;
			while(temp){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
		void hienThiChieuNguoc(){
			Node* temp=tail;
			while(temp){
				cout<<temp->data<<" ";
				temp=temp->prev;
			}
			cout<<endl;
			
		}
		bool rong(){
			return head=NULL;
		}
};
int main(){
	DoublelyLinkedList dll;
	cout<<"Danh sach lien ket doi: "<<endl;
	cout<<"Co trong khong? "<<(dll.rong()?"Co":"Khong")<<endl;
	dll.them(1);
	dll.them(2);
	dll.them(3);
	cout<<"Danh sach: "; dll.hienThi();
	cout<<"Co trong khong? "<<(dll.rong()?"Co":"Khong")<<endl;
	dll.xoa();
	cout<<"Sau khi xoa: ";
	dll.hienThi();
	return 0;
}
