#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	//These are ten questions set
	string questions[10] = { 
		" Who won the Best Footballer 2016 in the World? ",
		" Who is the UN Secretary General? ",
		" What was Word of the Year-2016 according to the Dictionary.com? ",
		" In Bihar, UNESCO has declared which place as a World Heritage Site? ",
		" What do you call a house made of ice? ",
		" Where is the first fully digitalized Post Office located? ",
		" Who developed Integrated Circuit Chip? ",
		" Which of the following will be used for checking spelling? ",
		" Which of the following company first created Hard Disk in the world? ",
		" When was the first motherboard made? "
		};
	//These are ten ansers set with their 4 options
	string options[10] [4] = {
		{"Stephen Hawking", "JS Kilby", "Ken Olsen","Cristiano Ronaldo"},
		{"António Guterres","George Harrar","Harlen Anderson","Glenn Rifkin"},
		{"existential","xenophobia","pandemic","Vax"},
		{"Archaeological Site of Nalanda Mahavihara","Ajanta Caves","Ellora Caves","Taj Mahal"},
		{"Tent","Caravan","igloo"," Pukka house"},
		{"Surat","Ahmedabad","New Delhi","Bangalore"},
		{"Stephen Hawking"," Isaac Newton","J S Kilby"," Jagdishchandra Vasu"},
		{"Dictionary Disk","Index Disk"," Directory Disk"," None of the These"},
		{"IBM","HP","Epson","Samsung"},
		{"1978","1923","1981","1998"},};

    // These are the correct options in string format
	string correctOption[10] = {
		"Cristiano Ronaldo","António Guterres","xenophobia","Archaeological Site of Nalanda Mahavihara",
	    "igloo","New Delhi","J S Kilby","Dictionary Disk","IBM","1981"
		};
    int userOptions[10] = {0,0,0,0,0,0,0,0,0,0,};
	int totalQs = 10;
	int op;
	//------Connducting Quiz------
	for(int i=0; i <totalQs; i++){
		cout << " Question # "<<(i+1)<<endl;
		cout<< " 1. "<<options[i][0]<<endl;
		cout<< " 2. "<<options[i][1]<<endl;
		cout<< " 3. "<<options[i][2]<<endl;
		cout<< " 4. "<<options[i][3]<<endl<<endl;

		cout<<" Select option (1-4) or 0 to skip and press enter:";
		cin>>userOptions[i];
		cout<<endl<<"--------------------------"<<endl<<endl;
	}

	//---- Printing correct options ----
	cout <<"======== ======== ========= ======== ========"<<endl;
	cout <<"======== ======== Correct Option ======== ========"<<endl;
	cout <<"======== ======== ========= ======== ========"<<endl;

	for(int i=0; i <totalQs; i++){
		cout << " Question # "<<(i+1)<<endl;
		cout<< " 1. "<<options[i][0]<<endl;
		cout<< " 2. "<<options[i][1]<<endl;
		cout<< " 3. "<<options[i][2]<<endl;
		cout<< " 4. "<<options[i][3]<<endl<<endl;

		if(userOptions[i]==0){
			cout << " You skipped this question."<<endl;
		}
		else{
			cout << " You selected: "<<options[i][userOptions[i-1]]<<endl;
		}
		cout << " Correct Option: " <<correctOption[i] <<endl<<endl;

		cout << " Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"----------------------"<<endl;
	}
	//----- Printing Result -----
	cout<<endl<<endl;
	cout <<"======== ======== ========= ======== ========"<<endl;
	cout <<"======== ======== Result ======== ========"<<endl;
	cout <<"======== ======== ========= ======== ========"<<endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for(int i=0; i <totalQs; i++){
		if(userOptions [i]!=0){
			if(correctOption[i]==options[i][userOptions[i]-1]){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout << " Total Questions: " <<totalQs << endl;
	cout << " Correct: " <<correct << endl;
	cout << " Incorrect: " << incorrect << endl;
	cout << " Skipped: " <<skipped << endl;

    getch();
	return 0;
}