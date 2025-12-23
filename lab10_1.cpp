#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << '\n';
	int i = 0;
	char grade;
	bool check = 1;
	do{
		i++;
		cout << "Student [" << i <<"]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0]++;
		}else if(grade =='B'){// if grade is B
			count[1]++;
		//and so on ... for grade = C, D, F	
		}else if(grade == 'C'){
			count[2]++;
		}else if(grade =='D'){
			count[3]++;
		}else if(grade =='F'){
			count[4]++;
		}else if(grade == '0'){
			check = 0;
			i--;
		}
		
		else{ 
			cout << "Wrong input. Please input again." << '\n';
			i--;
		} 
	}while(check);
	
	
	cout << "In total " << i << " students." << '\n';
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	//	and so on ... for grade = C, D, F	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	
	return 0;
}
