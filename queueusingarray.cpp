#include<iostream>
using namespace std;
class queue{
    private:
    int *data;
    int index;
    int length;
    public:
    queue(){
        int *data=new int[4];
        length = 4;
        index=0;
    }
    int size(){
        return index;
    }
    bool isempty(){
        return index==0;
    }
    void enqueue(int element){
        if(index==length){
            int *newdata = new int[2*length];
            for(int i =0;i<length;i++){
                newdata[i]=data[i];
            }
            delete []data;
            length *=2;
            data=newdata;
        }
        data[index]=element;
        index++;
    }
    int dequeue(){
        if(size()==0){
            cout<<"queue is empty"<<endl;
        }
        int ans = data[0];
        for(int i=0;i<length;i++){
            data[i]=data[i+1];
        }
        return ans;
    }
    int front(){
        if(size()==0){
            cout<<"queue is empty"<<endl;
        }
        return data[0];
    }
};
int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    cout<<q.size()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    return 0;
}
