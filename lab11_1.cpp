#include<iostream>
using namespace std;

int main(){
	char grade ;
	int i = 1 ;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0

	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	
	do{
		for (i=1 ; ; i++){
		cout << "Student [" << i << "]: "; 
		cin >> grade; 
		if(grade == 'A'){
			count[0]++ ;
			continue ;
			}
		else if(grade == 'B'){
			count[1]++ ;
			continue ;
			}
		else if(grade == 'C'){
			count[2]++ ;
			continue ;
			}
		else if(grade == 'D'){
			count[3]++ ;
			continue ;
			}
		else if(grade == 'F'){
			count[4]++ ;
			continue ;
			}
		else if(grade == '0'){
			break ;
		}

		else
		{
			cout << "Wrong input. Please input again.\n" ;
			i-- ;
		}
		}
			
	}while(grade != '0');
	
	cout << "In total " << (i-1) << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	
	return 0;

}