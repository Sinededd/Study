#include<iostream>
#include<thread>
#include<chrono>
using namespace std;


void f(){
    for(int i=0;i<10;i++){
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout<<"id = "<<this_thread::get_id()<<"\tf\t"<<i<<endl;
    }
}

int main(){
    
    thread th(f);


    for(int i=0;i<10;i++){
        this_thread::sleep_for(chrono::milliseconds(500));
        cout<<"id = "<<this_thread::get_id()<<"\tmain\t"<<i<<endl;
    }

    th.join();
    return 0;
}