#include <iostream> 
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;
float chapter1();
float chapter1s();
float chapter2();
float chapter2s();
float chapter3();
float chapter3s();
float chapter4();
float chapter4s();
float chapter5();
float chapter5s();
int fullm=0;


int main(){
int ch1=0,ch2=0,ch3=0,ch4=0,ch5=0,aot=0,c,j=1,i=0,x,ch1s=0,ch2s=0,ch3s=0,ch4s=0,ch5s=0;
int grade,grade1=0,grade2=0,grade3=0,grade4=0,grade5=0;
float ava;

cout<<"   _______    _       _       _______  __   __  ___   _______ "<<endl<<"  |       | _| |_   _| |_    |       ||  | |  ||   | |       |"<<endl<<"  |       ||_   _| |_   _|   |   _   ||  | |  ||   | |____   |"<<endl;
cout<<"  |       |  |_|     |_|     |  | |  ||  |_|  ||   |  ____|  |"<<endl<<"  |      _|                  |  |_|  ||       ||   | | ______|"<<endl<<"  |     |_                   |      | |       ||   | | |_____ "<<endl;
cout<<"  |_______|                  |____||_||_______||___| |_______|"<<endl;
cout<<"----------------------------------By: WJMZR-------------------------------"<<endl;
cout<<"     HERE YOU CAN TEST YOUR SKILL IN C++ PROGRAMMING   "<<endl;
system("PAUSE");

cout<<"Hello, and welcome to WJMZR QUIZ,"<<endl<< "where you could test your skills in c++,"<<endl;
cout<<"we have a variety of options to customize the Quiz"<<endl<<"including an Introduction to Computers and Programming,"<<endl;
cout<<"Introduction to C++, Expressions and Interactivity,"<<endl<< "Conditional Statements and Loops"<<endl;
cout<<"Press 1 for the Introduction to Computers and Programming."<<endl<<"Press 2 for the Introduction to C++."<<endl;
cout<< "Press 3 for Expressions and Interactivity." <<endl<<"Press 4 for Conditional Statements."<<endl<<"Press 5 for Loops."<<endl<< "Press 6 for all of the above";
cout<<endl;
cout<<"Press anything else to exit"<<endl;
for (int i = 0; i < j; i++){
     j++;
    cin>>c;
    if(c==1){
ch1++ ;
ch1s++;
fullm+=10;}
else if(c==2){
ch2++ ;
ch2s++;
fullm+=10; }
else if(c==3){
ch3++ ;
ch3s++;
fullm+=10; }
else if(c==4){
ch4++ ;
ch4s++;
fullm+=10; }
else if(c==5){
ch5++ ;
ch5s++;
fullm+=10; }
else if(c==6){
aot++;}
else{
return 0;}

cout<<"press 2 if you want to add another option"<<endl<<"and 1 if you are ready to start the quiz "<<endl;
cin>>x;
if (x==1){
j=i;
	
system("CLS");
}
cout<<"please select the next option"<<endl;
}
if(ch1>0)
{
grade1=chapter1();
}

if(ch2>0)
{
grade2=chapter2();
}
 if(ch3>0)
{
grade3=chapter3();

}
 if(ch4>0)
{grade4=chapter4();
}
 if(ch5>0)
{
grade5=chapter5();

}

 if(aot>0){
int c,c1;
grade1=chapter1();
grade2=chapter2();
grade3=chapter3();
grade4=chapter4();
grade5=chapter5();
grade=grade1+grade2+grade3+grade4+grade5;
ava=grade/5;
cout<<"your grade is "<<grade<<"/50"<<endl;
cout<<"which averages to "<<ava<<"/10"<<endl;
chapter1s();
cout<<endl<<"for the next section review"<<endl;
system("PAUSE");
system("CLS");
cout<<"your grade is "<<grade<<"/50"<<endl;
cout<<"which averages to "<<ava<<"/10"<<endl;
chapter2s();
cout<<endl<<"for the next section review"<<endl;
system("PAUSE");
system("CLS");
cout<<"your grade is "<<grade<<"/50"<<endl;
cout<<"which averages to "<<ava<<"/10"<<endl;
chapter3s();
cout<<endl<<"for the next section review"<<endl;
system("PAUSE");
system("CLS");
cout<<"your grade is "<<grade<<"/50"<<endl;
cout<<"which averages to "<<ava<<"/10"<<endl;
chapter4s();
cout<<endl<<"for the next section review"<<endl;
system("PAUSE");
system("CLS");
cout<<"your grade is "<<grade<<"/50"<<endl;
cout<<"which averages to "<<ava<<"/10"<<endl;
chapter5s();

}
grade=grade1+grade2+grade3+grade4+grade5;
if(ch1s>0){
	cout<<"to continue the review,"<<endl;
system("PAUSE");
cout<<"your grade is "<<grade<<"/"<<fullm<<endl;
cout<<"your grade in this section "<<grade1<<"/10"<<endl;
chapter1s();
}
if(ch2s>0){
	cout<<"to continue the review,"<<endl;
system("PAUSE");
cout<<"your grade is "<<grade<<"/"<<fullm<<endl;
cout<<"your grade in this section"<<grade2<<"/10"<<endl;
chapter2s();
}
if(ch3s>0){
	cout<<"to continue the review,"<<endl;
system("PAUSE");
cout<<"your grade is "<<grade<<"/"<<fullm<<endl;
cout<<"your grade in this section"<<grade3<<"/10"<<endl;
chapter3s();
}
if(ch4s>0){
	cout<<"to continue the review,"<<endl;
system("PAUSE");
cout<<"your grade is "<<grade<<"/"<<fullm<<endl;
cout<<"your grade in this section"<<grade4<<"/10"<<endl;
chapter4s();}

if(ch5s>0){
	cout<<"to continue the review,"<<endl;
system("PAUSE");
cout<<"your grade is "<<grade<<"/"<<fullm<<endl;
cout<<"your grade in this section"<<grade5<<"/10"<<endl;
chapter5s();
}
 return 0;
 }
   float chapter1(){
int i,j,q=0 , grade=0;
	int x=5;
	int z=10;
	char answer, Answer;
	string M[x];
	char A[z]={'B','C','B','A','B','D','D','A','B','B'};
	ifstream program;

program.open("chapter1.txt");

for (j=0;j<10;j++){

for (i=0;i<x;i++)
{
	program>>M[i];
	getline( program, M[i]);
	
	cout<<M[i]<<endl;
}
cin>>answer;
Answer=toupper(answer);
	if (Answer==A[q]){
		grade++;}
q++;

system("CLS");} 
return grade;
}
float chapter1s(){
	int i,j,q=0 , grade ;
	int x=5;
	int z=10;
	string M[x];
	char A[z]={'B','C','B','A','B','D','D','A','B','B'};
	ifstream program;

ifstream program1;
program.open("chapter1.txt");

for (j=0;j<10;j++){

for (i=0;i<x;i++)
{
	program>>M[i];
	getline( program, M[i]);
	
	cout<<endl<<M[i]<<endl;
}
cout<<endl<<"the correct answer  "<<A[q]<<endl;
q++;} }

  
float chapter2(){
int i,j,q=0 , grade=0;
	int x=4;
	int z=10;
	char answer, Answer;
	string M[x];
	char A[z]={'B','A','A','A','A','A','B','A','C','B'};
	ifstream program;

ifstream program1;
program.open("chapter2.txt");

for (j=0;j<10;j++){

for (i=0;i<x;i++)
{
	program>>M[i];
	getline( program, M[i]);
	
	cout<<M[i]<<endl;
}
cin>>answer;
Answer=toupper(answer);
	if (Answer==A[q]){
		grade++;}
q++;
system("CLS"); } 
return grade;}
float chapter2s(){
	int i,j,q=0 ;
	int x=4;
	int z=10;
	string M[x];
	char A[z]={'B','A','A','A','A','A','B','A','C','B'};
	ifstream program;
    program.open("chapter2.txt");

for (j=0;j<10;j++){

for (i=0;i<x;i++)
{
	program>>M[i];
	getline( program, M[i]);
	
	cout<<endl<<M[i]<<endl;
}
cout<<endl<<"the correct answer  "<<A[q]<<endl;
q++;	
}}
float chapter3(){
int i,j,q=0 , grade=0;
	int x=5;
	int z=10;
	char answer, Answer;
	string M[x];
	char A[z]={'D','D','B','C','D','A','D','B','C','D'};
	ifstream program;

program.open("chapter3.txt");

for (j=0;j<10;j++){

for (i=0;i<x;i++)
{
	program>>M[i];
	getline( program, M[i]);
	
	cout<<M[i]<<endl;
}
cin>>answer;
Answer=toupper(answer);
	if (Answer==A[q]){
		grade++;}
q++;

system("CLS");} 
return grade;
}
float chapter3s(){
	int i,j,q=0  ;
	int x=5;
	int z=10;
	string M[x];
	char A[z]={'D','D','B','C','D','A','D','B','C','D'};
	ifstream program;

program.open("chapter3.txt");

for (j=0;j<10;j++){

for (i=0;i<x;i++)
{
	program>>M[i];
	getline( program, M[i]);
	
	cout<<endl<<M[i]<<endl;
}
cout<<endl<<"the correct answer  "<<A[q]<<endl;
q++;} }
 float chapter4(){

int i,j,q=0 , grade=0;
	int x=5;
	int z=10;
	char answer, Answer;
	string M[x];
	char A[z]={'C','A','B','A','C','A','A','B','A','A'};
	ifstream program;

ifstream program1;
program.open("chapter4.txt");

for (j=0;j<10;j++){

for (i=0;i<x;i++)
{
	program>>M[i];
	getline( program, M[i]);
	
	cout<<endl<<M[i]<<endl;
}
cin>>answer;
Answer=toupper(answer);
	if (Answer==A[q]){
		grade++;}
q++;
system("CLS");
}
return grade;}

float chapter4s(){
	int i,j,q=0 ;
	int x=5;
	int z=10;
	string M[x];
	char A[z]={'C','A','B','A','C','A','A','B','A','A'};
	ifstream program;

ifstream program1;
program.open("chapter4.txt");

for (j=0;j<10;j++){

for (i=0;i<x;i++)
{
	program>>M[i];
	getline( program, M[i]);
	
	cout<<endl<<M[i]<<endl;
}
cout<<endl<<"the correct answer  "<<A[q]<<endl;
q++;	
}}

 float chapter5(){

int i,j,q=0 , grade=0;
	int x=5;
	int z=10;
	char answer, Answer;
	string M[x];
	char A[z]={'A','D','A','C','B','C','D','B','C','A'};
	ifstream program;

ifstream program1;
program.open("chapter5.txt");

for (j=0;j<10;j++){

for (i=0;i<x;i++)
{
	program>>M[i];
	getline( program, M[i]);
	
	cout<<endl<<M[i]<<endl;
}
cin>>answer;
Answer=toupper(answer);
	if (Answer==A[q]){
		grade++;}
q++;
system("CLS");}
return grade;}

float chapter5s(){
	int i,j,q=0 ;
	int x=5;
	int z=10;
	string M[x];
	char A[z]={'A','D','A','C','B','C','D','B','C','A'};
	ifstream program;

ifstream program1;
program.open("chapter5.txt");

for (j=0;j<10;j++){

for (i=0;i<x;i++)
{
	program>>M[i];
	getline( program, M[i]);
	
	cout<<endl<<M[i]<<endl;
}
cout<<endl<<"the correct answer  "<<A[q]<<endl;
q++;	
}}


