#include<iostream>
using namespace std;
class ship{
	string name;
	string year;
	public:
		ship(){
			name="";
			year="";
		}
		ship(string a,string b):name(a),year(b){}
		void setname(string a){
			name=a;
		}
		void setyear(string b){
			year=b;
		}
		string getname(){
			return name;
		}
		string getyear(){
			return year;
		}
		virtual void print(){
			cout<<"Name: "<<name<<"    "<<"Year: "<<year<<endl; 
		}
};
class CruiseShip:public ship{
        int maxpassengers;
        public:
        	CruiseShip():ship(){
        		maxpassengers=0;
			}
			CruiseShip(string a,string b,int c):ship(a,b),maxpassengers(c){}
			void setmaxpassengers(int a){
				maxpassengers=a;
			}
			int getmaxpassengers(){
				return maxpassengers;
			}
			virtual void print(){
				ship::print();
				cout<<"Max Passengers: "<<maxpassengers<<endl;
			}
}; 
class CargoShip:public ship{
	int cargocapacity;
	public:
			CargoShip():ship(){
        		cargocapacity=0;
			}
			CargoShip(string a,string b,int c):ship(a,b),cargocapacity(c){}
			void setcargocapacity(int a){
				cargocapacity=a;
			}
			int getcargocapacity(){
				return cargocapacity;
			}
			virtual void print(){
				ship::print();
				cout<<"Cargo capacity: "<<cargocapacity<<endl;
			}
};
class BattleShip:public ship{
	int totalmissiles;
	public:
			BattleShip():ship(){
        		totalmissiles=0;
			}
			BattleShip(string a,string b,int c):ship(a,b),totalmissiles(c){}
			void settotalmissiles(int a){
				totalmissiles=a;
			}
			int gettotalmissiles(){
				return totalmissiles;
			}
			virtual void print(){
				ship::print();
				cout<<"Total Number of missiles: "<<totalmissiles<<endl;
			}
};
int main(){
	ship *p[2];
	p[0]=new CruiseShip("Titanic","1947",500);
	p[1]=new CargoShip("Jet","1999",2000);
	p[2]=new BattleShip("Battleship","2004",250);
	for (int i=0;i<3;i++){
		p[i]->print();
	}
	return 0;
}