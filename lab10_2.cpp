#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	string txt;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	//กรอก Code เฉพาะส่วนนี้ ให้สอดคล้องกับโจทย์และ Code ส่วนอื่น ๆ 
	//โดยห้ามแก้ไข Code ในส่วนอื่น ๆ
	dest << "-------------------- BOOM ---------------------" << "\n";
	while (getline(source, txt) ) {
		dest << txt << "\n";
	}
	dest << "-------------------- HA!! ---------------------" << "\n";

    source.close();
    dest.close();
	return 0;
}
