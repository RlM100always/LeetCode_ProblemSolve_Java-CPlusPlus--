#include <iostream>
#include <string>
using namespace std ;


class Solution{

    public :

    bool isPalindrome(int num){

        int str =num ;
        int rev=0 ;

        //123

        if(num<0){
            return false;
        }
        

        while (num !=  0)
        {
            int rem ;
            rem = num % 10;

            rev=rev*10+rem;

            num/=10 ;

        }

        if(rev==str)return true;
    
        return false; 
    }

};


int main(){

    int num;
    cin>>num ;


    Solution sul ;

    cout<<sul.isPalindrome(num);

    return 0 ;
}