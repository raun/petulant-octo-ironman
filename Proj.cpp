#include <iostream>
#include <fstream>
//#include <string>
using namespace std;

class file{
	static fileno;
	char type;
	int size;
	char *content;
public:
	file(string);
	file(char,string);
	file(char,int,string);
	void getContent(char *);
	void createFile();
};
file::file(){
}
file::file(char c){
	type=c;
}
file::file(char c,int i){
	type=c;
	size=i;
}
void file::getContent(char *s){
	int i;
	for(i=0;s[i]!='\0';++i);
	content=new char[i];
	while(i+1>0){
		content[i-1]=s[i-1]
		i--;
	}
}
void createFile(){
	ofstream fout;
	string filename="file";
	switch(type){
		case 1:filename=filename+(string)fileno+".3gp";
			fout.open(filename);
			for(int i=0;i<size;++i)
	}
	fileno++;
}

int main(){
	
}