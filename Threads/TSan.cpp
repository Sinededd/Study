#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

int x = 0;

void f(){
    for(int i=0;i<1000;i++){
        
        cout<<x<<endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}

int main(){

    thread th(f);


    for(int i=0;i<1000;i++){
        x = x + 1;
        cout<<"Main"<<endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    th.join();
    return 0;
}