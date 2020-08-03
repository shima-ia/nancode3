#include<iostream>
using namespace std;
int main()
{
	float first,second,third,mid,final,quizz,total;
	
	cout<<"=====QUIZZES=====\n";
	cout<<"Enter first quizz(10): ";
	cin>>first;
	cout<<"Enter second quizz(10): ";
	cin>>second;
	cout<<"Enter third quizz(10): ";
	cin>>third;

	cout<<"=====MID-TERM=====\n";
	cout<<"Enter mid-term(40): ";
	cin>>mid;

	cout<<"=====FINAL=====\n";
	cout<<"Enter final(50): ";
	cin>>final;
	quizz = (first + second + third) /3 ;

	cout<<"Quizz total: "<<quizz<<endl;
	cout<<"Mid term: "<< mid <<endl;
	cout<<"Final: "<< final <<endl;
	
	total = quizz + mid + final ;
	cout<<"Total: "<< total <<endl;
	cout<<"Your score is "<< ((total >= 60)? "PASS" : "FALL")<<endl;
	
	return 0;
}
