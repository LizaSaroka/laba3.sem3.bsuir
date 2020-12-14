#include<iostream>

using namespace std;
class transport {
public:	
	int km;
	int costofkm;
	int Cost;
	int speed;
	int Time;
 void setkm() {//общее для всех
		  cout << "Enter the distance: " << endl;
		  cin >> km;
	  }
int getthecost() {
		  return costofkm;
	  }
 void cost() {
	setkm();
	getthecost();
	Cost = costofkm * km;
}
	 
	  
	  void printcost() {
		  cout << "The ticket will cost: ";
		  cout << Cost<<" dollars\n";
	  }
	  void time() {
		 
		  getthespeed();
		  Time = km / speed;
	  }
	  int  getthespeed() {
		  return speed;
	  }
	  void printtime() {
		 cout<< "The trip will last: ";
		  cout << Time<<" hours\n";
	  }
};
class plane :public transport {
public:
	
	plane() {
		costofkm = 3;
		cost();
		printcost();
		speed = 820;
		time();
		
	}
};
class train :public transport {
public:
	train() {
costofkm = 220;
		speed = 1000;
		
		cost();
		printcost();
		
		time();
		printtime();
	}
	
		
	
};
class car :public transport {
public: car() {
	costofkm = 100;
	speed = 120;
	cost();
	printcost();
	time();
	printtime();
}
};
void main() {
	
	 int choice;
	 cout << "What transport do you prefer?" << endl;
	 cout << "1-plane\n""2-train\n""3-car\n";
	 cin >> choice;
	 switch (choice) {
	 case 1:plane pl1;
		
		pl1.printtime();
		 break;
	 case 2:train tr1;
		 tr1.printtime();
		 break;
	case3:car car1;
		
		 car1.printtime();
		 break;
	 }


}