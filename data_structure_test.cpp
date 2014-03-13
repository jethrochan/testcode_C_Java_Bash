//Jethro Chan Alex Thoi

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include "CPUTimer.h"
#include "CursorList2.h"
#include "CursorList.h"
#include "LinkedList.h"
#include "StackAr.h"
#include "StackLi.h"
#include "QueueAr.h"
#include "SkipList.h"

vector<CursorNode <int> > cursorSpace(250000);
using namespace std;

CPUTimer ct;
string line2;

int getChoice();
void RunList(string ifile);
void RunCursorList(string ifile);
void RunStackAr(string ifile);
void RunStackLi(string ifile);
void RunQueueAr(string ifile);
void RunSkipList(string ifile);

int main()
{
  int input;
  string infile;

  cout << "Filename >> ";
  cin >> infile;

  ifstream inf(infile.c_str());

  do
  {
    input = getChoice();
    ct.reset();  
    switch(input)
    {
      case 1:
      RunList(infile);
      break;
      case 2:
      RunCursorList(infile);
      break;
      case 3:
      RunStackAr(infile);
      break;
      case 4:
      RunStackLi(infile);
      break;
      case 5:
      RunQueueAr(infile);
      break;
      case 6:
      RunSkipList(infile);
      break;
    }

    cout << "CPU time: " << ct.cur_CPUTime() << endl;
  }while(input != 0);

  return 0;
}

int getChoice()
{
  int input;
  
  cout << "\n      ADT Menu\n"
       << "0. Quit\n"
       << "1. LinkedList\n"
       << "2. CursorList\n"
       << "3. StackAr\n"
       << "4. StackLi\n"
       << "5. QueueAr\n"
       << "6. SkipList\n"
       << "Your Choice >> ";
  cin >> input;

  return input;
}

void RunList(string ifile)
{
  ifstream inf(ifile.c_str());
  getline(inf, line2); //eat first line
  getline(inf, line2);

  
}

void RunCursorList(string ifile)
{
  ifstream inf(ifile.c_str());
  getline(inf, line2); //eat first line
  getline(inf, line2); 
}

void RunStackAr(string ifile)
{
  ifstream inf(ifile.c_str());
  getline(inf, line2); //eat first line
  getline(inf, line2);
}

void RunStackLi(string ifile)
{
  ifstream inf(ifile.c_str());
  getline(inf, line2); //eat first line
  getline(inf, line2);
}

void RunQueueAr(string ifile)
{
  ifstream inf(ifile.c_str());
  getline(inf, line2); //eat first line
  getline(inf, line2);
}

void RunSkipList(string ifile)
{
  ifstream inf(ifile.c_str());
  getline(inf, line2); //eat first line
  getline(inf, line2);
}