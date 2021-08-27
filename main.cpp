#include <iostream>
using namespace std;
#include <stdio.h>
#include <time.h>
#include <unistd.h>


int main() {

  string choice = "";
  int last;
  string start ="";

  cout << "Hello and welcome to Kaan's Timer and Stopwatch" << endl;

  cout << "\n";
  cout << "\n";

  cout << "To proceed, enter the word (TIMER) or (STOPWATCH):";
  getline(cin, choice);
  
  if(choice == "Timer" || choice == "timer" || choice == "TIMER"){

    cout << "\n";
  cout << "\n";

    cout << "Alright, enter how long you will like the timer to last(in seconds): ";
    cin >> last;

    cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";
cout << "\n";
  cout << "\n";

    
  for(int i =-1 ; i<last; last--){
      cout << last << endl;
      cout.flush();
      sleep(1);
      int llast = last+1;
      if(last==0){
        cout << "\n";
        cout << "\n";
        cout << "TIMER IS DONE!!!";
      }
  
    }
    
  }
  
  if(choice == "STOPWATCH" || choice == "stopwatch" || choice == "Stopwatch"){

    cout << "\n";
  cout << "\n";

    cout << "Enter begin to start the stopwatch:";
    getline(cin, start);

    if(start == "begin" || start == "start"){

  for(int i=0; i < 1000000; i++){
    
      cout << i << endl;
      cout.flush();
      sleep(1);
  }
    }
  }



}