#include <bits/stdc++.h>

int main(){
    long int num;
    std::cin >> num;
    std::cout << num << " ";
    while(true){
        if(num==1) break;
        if(num < 0) break;

        if (num&1){
            num = num*3 + 1 ;
            if(num < 0) break;
            std::cout << num << " ";
        }else{
            num = num/2;
            if(num < 0) break;
            std::cout << num << " ";
        }
    }
}