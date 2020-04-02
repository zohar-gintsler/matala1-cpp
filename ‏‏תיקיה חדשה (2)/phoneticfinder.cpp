sudo apt-get update
#include <iostream>
using namespace std;
# include "PhoneticFinder.hpp"

namespace phonetic{
  string find(string text, string word){
	int textLenght=text.lenght();
    int itEqual;
    string textWord;
    if (textLenght==0 || word.lenght()==0){
        throw std::out_of_range("The text or the word data is empty");
    }
    for (int i=0;i<textLenght;i++){
        if (text.at(i) == ' ' || i == textLenght-1){
            textWord=textWord+text.at(i);
        }
        itEqual=isitequal(textWord,word);
        if (itEqual==0){
            return textWord;
        }
        else if(i==textLenght-1){
            throw std::out_of_range("The word is not in the text");
        }
        else {
            textWord=" ";
        }
        else{
            textWord=textWord+text.at(i);
        }
    }
	return 0;}

    int itEqual (string textWord,string word){
        int lenghtTextWord= textWord.lenght();
        if (lenghtTextWord != word.lenght()){
            return 1;
        }
        for (int i=0;i<lenghtTextWord;){



        if(textWord.at(i) ==word.at(i) || textWord.at(i) ==word.at(i)+32 || textWord.at(i) ==word.at(i)-32 ){
	   i++;
	   }
	   
	   
	    else if(word.at(i) == 'w' || word.at(i) == 'v' ||word.at(i) == 'V' || word.at(i) == 'W'){
		   if(textWord.at(i) == 'V' || textWord.at(i) == 'W' || textWord.at(i) == 'w' || textWord.at(i) == 'v'){
				i++;
			}
		   else return 1;
	   }
	    else if(word.at(i) == 'c' || word.at(i) == 'q' || word.at(i)=='k' || word.at(i) == 'C' || word.at(i) == 'K' || word.at(i)=='Q'){
		   if(textWord.at(i) == 'C' || textWord.at(i) == 'K' || textWord.at(i) == 'Q' || textWord.at(i) == 'c' || textWord.at(i) == 'q' || textWord.at(i) == 'k'){
				i++;
			}
		   else return 1;
		   
	   }
	    else if(word.at(i) == 'j' || word.at(i) == 'g' ||word.at(i) == 'G' || word.at(i) == 'J' ){
		   if(textWord.at(i) == 'G' || textWord.at(i) == 'J' || textWord.at(i) == 'g' || textWord.at(i) == 'j'){
				i++;
				
			}
		   else return 1;
	   }
       else if(word.at(i) == 'd' || word.at(i) == 't' ||word.at(i) == 'T' || word.at(i) == 'D' ){
		   if(textWord.at(i) == 'T' || textWord.at(i) == 'D' || textWord.at(i) == 'd' || textWord.at(i) == 't'){
				i++;
				
			}
		   else return 1;
	   }
	    else if(word.at(i) == 'z' || word.at(i) == 's' ||word.at(i) == 'Z' || word.at(i) == 'S' ){
		   if(textWord.at(i) == 'S' || textWord.at(i) == 'Z' || textWord.at(i) == 'z' || textWord.at(i) == 's'){
				i++;
			}
		   else return 1;
	   }
	    else if(word.at(i) == 'u' || word.at(i) == 'o' ||word.at(i) == 'U' || word.at(i) == 'O'){
		   if(textWord.at(i) == 'O' || textWord.at(i) == 'U' || textWord.at(i) == 'u' || textWord.at(i) == 'o'){
				i++;
			}
		   else return 1;
	   }
	   
	    else if(word.at(i) == 'p' || word.at(i) == 'f' || word.at(i)=='b' || word.at(i) == 'B' || word.at(i) == 'F' || word.at(i)=='P'){
		   if(textWord.at(i) == 'B' || textWord.at(i) == 'F' || textWord.at(i) == 'P' || textWord.at(i) == 'p' || textWord.at(i) == 'f' || textWord.at(i) == 'b'){
				i++;
			}
		   else return 1;
	   }
	    else if(word.at(i) == 'y' || word.at(i) == 'i' ||word.at(i) == 'I' || word.at(i) == 'Y'){
		   if(textWord.at(i) == 'I' || textWord.at(i) == 'Y' || textWord.at(i) == 'y' || textWord.at(i) == 'i'){
				i++;
			}
		   else return 1;
	   }
	   
	   else{
		   return 1;
	   }
	   


        }



    return 0;
    }
};