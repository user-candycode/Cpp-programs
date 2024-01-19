// program to check no of hardware threads on a system

#include<iostream>
#include<vector>
#include<thread>
#include <algorithm>
#include <cassert>



void worker(int);

int main(){
    std::vector<std::thread> workers ;
    
    const unsigned long hw_threads = std::thread::hardware_concurrency();
    
    std::cout<<hw_threads<<std::endl;
    for(int i=0;i<hw_threads;i++){
        workers.emplace_back(std::thread(worker,i));
    }
    
    std::for_each( 
        workers.begin(),
        workers.end(),
        [](std::thread &t){
                            assert(t.joinable());
                            t.join();
                            }
                    );
    return 0;
}


void worker(int number){
    std::cout<<"I am worker Threan no: "<<number<<std::endl;
}
