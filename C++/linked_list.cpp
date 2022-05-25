#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int value){
        this->data=value;
        this->next= nullptr;
    }
};

void printList(Node *head){
	auto cur = head;
	while(cur!=nullptr){
		cout<<cur->data<<" ";
		cur = cur->next;
	}
    cout<<endl;
}

Node* deleteN(Node *head, Node *todel){
    Node *prev=nullptr;
    Node *curr=head;
    while(curr!=nullptr){
        if(curr==todel){
            if(curr==head){
                head=curr->next;
            }
            else{
                prev->next=curr->next;
            }
            free(curr);
            break;
        }
        else{
            prev=curr;
            curr=curr->next;
        }
    }
    return head;
}

void insertN(Node *tmp){
    int data;
    for(Node *i=tmp;i!=nullptr;i++){
        if(tmp->next==nullptr;){
            Node *newnode=new Node();
            newnode->data=value;
            newnode->next=nullptr;
            tmp->next=newnode;
            break;
        }
    }
}





int main(){
    int n;
    cin>>n;
    Node *head=nullptr, *current = nullptr;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        if(head==nullptr){
            head=current=new Node(e);
        }
        else{
            current->next=new Node(e);
            current=current->next;
        }
    }
    printList(head);
    Node *todel=head->next->next;
    head= deleteN(head,todel);
    printList(head);
    return 0;
}
 