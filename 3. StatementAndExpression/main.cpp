#include<iostream>

int addNumbers( int first_param, int second_param){
    
    int result =first_param + second_param;
    return result;
}
int main(){
    
    std::cout << "Hello World" << std::endl;
    int a{5}, b{10};
    //error
    std::cerr << "std::cerr output : Something went wrong " <<std::endl;
    //log message
    std::clog << "std::clog output : This is a log message " << a+b << std::endl;
    return 0;
}