#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int age;
	cout <<"Please enter age \n";
	cin>>age;
	if (age>=7){
		cout <<"Admit to Grade school\n";
		
	}
	else if (age>=5){
		cout <<"Admit to Kindergaten\n";
		
	}
	else if (age>=3){
		cout << "admit to pre - school\n";
		
	}
	else if (age >=1){
		cout <<"admit to play group\n";
		
	}
	else {
		cout <<"Rejected! regisration fail\n";
	}
	return 0;
}
