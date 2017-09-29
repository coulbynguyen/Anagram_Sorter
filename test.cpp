#include <iostream>
#include <string>
#include <exception>
using namespace std;

int main(){
   string s;
   string* hi = NULL, *next = NULL;
   int size = 0, size2 = 0;

   while(s != "-1"){
      cout << "Enter a string to add to the array (ENTER -1 TO STOP ADDING NAMES)" << endl;
      cin >> s;
      if(s != "-1"){
	 size++;
	 string* temp;
	 temp  = new string[size];
	 if(hi != NULL){
	    for(int j = 0; j < size-1; j++){
	       temp[j] = hi[j];
	    }
	    delete [] hi;
	 }
	 temp[size-1] = s;
	 hi = temp;
      }
   }
   //cout << size << endl;
   next = new string[size+1];
   //next[0] = hi[0];
   for(int a = 0; a < size; a++){
      //cout << hi[a] << " ";
      string s = hi[a];

      for(int b = 0; b < size; b++){
	 int count = 0;
	 string s2 = hi[b];

	 if(s.size() == s2.size()){

	    for(int c = 0; c < s.size(); c++){
	       int check = count;

	       for(int d = 0; d < s2.size(); d++){
		  if(hi[a][c] == hi[b][d]){
		     if(check != count){

		     }
		     else{
			count++;
		     }
		  }
	       }
	    }
	    if(count == s.size()){
	       bool crap = false;
	       for(int e = 0; e < size; e++){
		  if(next[e] == s2){
		     crap = true;
		  }
	       }
	       if(crap == false){

		  next[size2] = s2;
		  size2++;
	       }
	       //cout << hi[b] << " ";

	    }
	 }
      }
      //cout << endl;
   }

   for(int alpha = 0; alpha < size; alpha++){
      cout << "Old: " << hi[alpha] << " New: " << next[alpha] << endl;
   }
   delete [] hi;
   delete [] next;
   return 0;
}
