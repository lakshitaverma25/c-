//??ASSIGNMENT -functions
#include<iostream>

using namespace std;

// Question 1 : Write a function to check if a number is a palindrome in C++.
// (121 is a palindrome, 321 is not)
// A number is called a palindrome if the number is equal to the reverse of a number.
// Eg : 121 is a palindrome because the reverse of 121 is 121 itself. On the other hand,
// 321 is not a palindrome because the reverse of 321 is 123, which is not equal to 321
int reverse(int n){
    int result=0;
    while(n>0){
        int digit=n%10;
        result= (result*10)+digit;
        n/=10;
        
    }
    return result;
}
bool palindrome(int n){
    // if (n==reverse(n)){
    //     return true;

    // }else{
    //     return false;
    // }
    return n==reverse(n);
    
}



// Question 2 : Write a function to calculate the sum of digits of a number.
int sum_of_digits(int n){
    int sum=0;
    while(n>0){
        
        // int digit=n%10;
        // sum+=digit;
        sum+=n%10;
        n/=10;

    }
    return sum;
}



// Question 3 : Write a function which takes 2 numbers as parameters (a & b) and
// outputs : a^2 + b^2 + 2*ab
int a_sq_and_b_sq(int a,int b){
    return (a*a)+(2*a*b)+(b*b);

}



// Question 4 : Write a function that prints the largest of 3 numbers.
int largest_of_three_numbers(int a,int b,int c){
    if(a >=b && a>=c){
        return a;
      
    }else if(b>=c){
        return b;
    }else{
        return c;
    }
}





// Question 5 : Write a function that accepts a character (ch) as parameters & returns
// the character that occurs after ch in the English alphabet.
// Eg : input = ‘c’, return value = ‘d’
// Note : for ch = ‘z’, return ‘a’.
char ch(char a){
    if(a=='z'){
        return 'a';
    }else if(a=='Z'){
        return 'A';
    }else{
        return a+1;
    }
    
}


int main(){


  //cout<< palindrome(567) <<endl;
  //cout<<sum_of_digits(245);
  //cout<<a_sq_and_b_sq(2,3);
  //cout<<largest_of_three_numbers(1,2,3);
  //cout<<ch('Z');
   
   return 0;
}

