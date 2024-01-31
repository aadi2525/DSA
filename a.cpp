
#include <iostream>
using namespace std;

int main(){
       int a =5;
    // cin>>a;
    
//     for (int i = 1; i <= a ; i++){
//         for(int j = 1 ; j <= a-i+1 ; j++)
//             cout << "  * " ;
//             cout << endl;
        
// }

//    for (int i = 1; i <= a ; i++){
//         for(int j = 0 ; j <= a-i ; j++)
//         cout << " " ;
        
//         for(int j = 1 ; j <=  i  ; j++)
//             cout << "* " ;
//             cout << endl;
        
// }


for (int i = 1; i <= a ; i++){
        for(int j = 0 ; j < i ; j++)
        cout << " " ;
        
        for(int j = 1 ; j <=  a-i+1  ; j++)
            cout << "* " ;
            cout << endl;
        
}

// int * ptr = &a;
// std::cout << *ptr << std::endl;
// std::cout << a << std::endl;

// std::cout << ptr << std::endl;
// std::cout << &a << std::endl;
return 0;
}