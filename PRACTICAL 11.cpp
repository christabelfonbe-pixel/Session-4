# include<iostream>
#include<iomanip>
using namespace std;

const double p1=3.14;

double area(double side){
	return side*side;
}

double area(double length, double width){
	return length*width;
}

double circleArea(double radius){
	return p1*radius*radius;
}

void printResult(int result){
	cout<<"integer Result:" <<result<<endl;
}

void printResult(double result){
	cout<<"Decimal Result:" <<result<<endl;
}

int main(){
	
	int choice;
	double side, length, width, radius;
	cout<<fixed<<setprecision(2);
	do{
		cout<<"\n==========AREA CALCULATOR=========="<<endl;
		cout<<"1.calculate Area of a square"<<endl;
		cout<<"2.calculate Area of a Rectangle"<<endl;
		
		cout<<"3.calculate Area of a circle"<<endl;
		cout<<"4.Demonstrate Function Overloading"<<endl;
		
		cout<<"0.Exit program"<<endl;
		
	cout<<"Enter your choice:";
	cin>>choice;
	
	switch (choice){
		case1:
			cout<<"Enter the side of the square:";
			cin>>side;
			
			if (side<0){
				cout<<"invalid input.side cannot be negative."<<endl;
				break;
			}
			
			cout<<"Area of square:";
			printResult(area(side));
			break;
			
			case2:
			cout<<"Enter rectangle length:";
			cin>>length;
			
			cout<<"Enter rectangle width:";
			cin>>width;
			
			
			if (length<0||width<0){
				cout<<"invalid input. Dimensions cannot be negative."<<endl;
				break;
			}

			cout<<"Area of rectangle:";
			printResult(area(length,width));
			break;
	}
	case3:
			cout<<"Enter circle radius:";
			cin>>radius;
			
			if (radius<0){
				cout<<"invalid input.radius cannot be negative."<<endl;
				break;
			}
	switch (choice){
	case 4: 
		break;
	
			cout<<"\nDemonstrating function overloading:\n";
			printResult(25);
			printResult(25.75);
			break; 
		
			
			case 0:
				cout<<"Thank you for using the area calculator."<<endl;
				break;
			
				default:
					cout<<"invalid choice.please try again."<<endl;		
	}
}while (choice!=0);
 return 0;
}
