// Matthew Reyes
// 10/5/18
// assignment 3

#include<iostream>
using namespace std;

string toMorse(char);

    const int alphabet = 40;
    string mcode[alphabet]={"  ","--..--",".-.-.-","..--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----.",".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    char acode[alphabet]={' ',',','.','?','0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
   int main()
{
    string sentence;
    cout<< "enter what you would like to convert to morse code:\n";
    getline(cin, sentence);
    int i=0;
    while(i<sentence.size())
    {cout<< toMorse(sentence[i])<<" ";
        i++;
    }
    cin.get();
    return 0;
}
        string toMorse(char alpha)
{
    
    
    int i=0;
    while(i<alphabet && alpha != acode[i])
    {i++;
    }
    string morse;
    if(i>= alphabet)
        morse= mcode[i];
    else morse = mcode[i];
    return morse;
        
    }
   
 


