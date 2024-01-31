#include <iostream>
using namespace std;

int main(){
       int a =5;
    // cin>>a;
    
    for (int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            std::cout << " * " ;
            std::cout << std::endl;
        }
}
return 0;
}

