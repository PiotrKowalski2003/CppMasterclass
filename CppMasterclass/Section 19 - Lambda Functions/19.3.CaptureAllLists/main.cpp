#include <iostream>


int main(){

    //Capture everything by value
    
     int c{42};
     
     auto func = [=](){
         std::cout << "Inner value : " << c << std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << std::endl;
         func();
         ++c;
     }
     


    //Capturing all reference
    int c1{42};
    int d{5};
     
    auto func1 = [&](){
        std::cout << "Inner value : " << c1 << std::endl;
        std::cout << "Inner value(d) : " << d << std::endl;
    };
     
    for(size_t i{} ; i < 5 ;++i){
        std::cout << "Outer value : " << c1 << std::endl;
        func1();
        ++c1;
    }
  
    return 0;
}