#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(4);
    q.push(8);
    q.push(10);
    q.push(12);
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    return 0;
}
