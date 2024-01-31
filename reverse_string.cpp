#include<iostream>
using namespace std;

int main (){
    string s = "uutyjfhffyggg";
    

    string str;

    for (int i=s.length()-1; i>=0;i--){
        str =   str + s[i];
      
    
}
std::cout << str << std::endl;
return 0;

}
                                        //  secound method //


// void reverese (string& str){
//     int n = str.length();
//     int a = n-1;
//     int b = 0;

//     while (b<=a)
//     {
//         swap(str[b] , str[a]);
//         a=a-1; 
//         b=b+1;
        
//     }
// }

// int main (){
//     std::cout << "type a string" << std::endl;
//     string s;
//     cin>>s;
//     reverese(s);
//     std::cout << s << std::endl;
//     return 0;
// }