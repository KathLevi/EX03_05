//////////////////////////
//Name: Kathleen Levi
//
//Project: EX03_05 (10.10)
//
//Date: May 26, 2015
//////////////////////////

#include <iostream>
using namespace std;

class MyInteger{
private:
    int value;
    
public:
    MyInteger(int newValue){
        value = newValue;
    }
    int getValue()const {
        return value;
    }
    //Even?
    bool isEven()const {
        return isEven(value);
    }
    static bool isEven(int value){
        if (value % 2 == 0)
            return true;
        else
            return false;
    }
    static bool isEven(const MyInteger& m){
        return isEven(m.getValue());
    }

    //Odd?
    bool isOdd()const {
        return isOdd(value);
    }
    static bool isOdd(int value){
        if (value % 2 == 0)
            return false;
        else
            return true;
    }
    static bool isOdd(const MyInteger& m){
        return isOdd(m.getValue());
    }
    //Prime?
    bool isPrime()const {
        return isPrime(value);
    }
    static bool isPrime(int value){
        if ((value == 1) || (value == 2))
        {
            return true;
        }
        
        for (int i = 2; i <= value / 2; i++)
        {
            if (value % i == 0)
                return false;
        }
        
        return true;
    }
    static bool isPrime(const MyInteger& m){
        return isPrime(m.getValue());
    }
    
    //equals?
    bool euqals(int newValue)const{
        return newValue == value;
    }
    bool equals(const MyInteger& m)const{
        return m.getValue() == value;
    }
    
    //converting string to int
    static unsigned long int parseInt(const string& word){
        return word.length();
    }
    
};

int main(){
    MyInteger a(22);
    cout << "Even? " << a.isEven() << endl;
    cout << "Odd? " << a.isOdd() << endl;
    cout << "Prime? " << a.isPrime() << endl;
    
    string word;
    cout << "Enter a word to be converted to a number ";
    cin >> word;
    cout << "The word " << word << " is now the number " << MyInteger::parseInt(word);
    

    
    
}