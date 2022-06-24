//write include statements
#include <iostream>
#include <string>
#include "dna.h"

//write using statements
using std::cout;
using std::cin;
using std::string;


int main() 
{
	int user_input;
	string dna;
	string reverse_dna;
	char confirm = 'Y';
	cout<<"\n"<<"Please select 1 to get GC content"<<"\n";
	cout<<"\n"<<"Or select 2 to get DNA Complement"<<"\n";
	cin>>user_input;
	while(confirm == 'Y' || confirm == 'y'){
		if (user_input == 1){
			cout<<"\n"<<"Please input a DNA string: ";
			cin>>dna;
			auto percentage = get_gc_content(dna);
			cout<<"\n"<<"The G/C content of the provided string is: "<<percentage<<"%"<<"\n";
			cout<<"\n"<<"Would you like to continue? (Y/N)"<<"\n";
			cin>>confirm;
			if (confirm == 'Y' || confirm == 'y'){
				cout<<"\n"<<"Please select 1 to get GC content"<<"\n";
				cout<<"\n"<<"Or select 2 to get DNA Complement"<<"\n";
				cin>>user_input;}
			
	}	else if (user_input == 2){
			cout<<"\n"<<"Please input a DNA string: ";
			cin>>dna;
			string reverse_dna = reverse_string(dna);
			cout<<"\n"<<"The reverse of the DNA string provided is: "<<reverse_dna<<"\n";
			string reverse_dna1 = get_dna_complement(reverse_dna);
			cout<<"\n"<<"The DNA compliment is: "<<reverse_dna1<<"\n";
			cout<<"\n"<<"Would you like to continue? (Y/N)"<<"\n\n";
			cin>>confirm;
			if (confirm == 'Y' || confirm == 'y'){
				cout<<"Please select 1 to get GC content"<<"\n";
				cout<<"Or select 2 to get DNA Complement"<<"\n";
				cin>>user_input;}

			
			
	}
	
		}
	}