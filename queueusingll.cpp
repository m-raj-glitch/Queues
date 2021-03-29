#include<iostream>
using namespace std;
template<typename T>
class node{
    public:
    T data;
    node<T> *next;
    node(T data){
        this->data=data;
        next=NULL;
    }
};
template<typename T>
class queue{
    node<T> *head;
    node<T> * tail;
    int size;
    public:
    queue(){
        size=0;
        head=NULL;
        tail=NULL;
    }
    int sizeofqueue(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void enqueue(T element){
        node<T> *newnode=new node<T>(element);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            size++;
        }
        else{
        tail->next=newnode;
        tail=newnode;
        size++;
        }
    }
    T dqueue(){
        T ans=head->data;
        node<T> *temp = head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }
    T front(){
        return head->data;
    }
};
int main(){
    queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.sizeofqueue()<<endl;
    cout<<q.isEmpty()<<endl;
    cout<<q.front()<<endl;
    cout<<q.dqueue()<<endl;
    return 0;
}
