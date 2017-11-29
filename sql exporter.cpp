#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string firtNames[10] =
	{
		"Tanaka",
		"Imura",
		"Fujiwara",
		"Ito",
		"Akashi",
		"Nakamura",
		"Rikkyo",
		"Yamamoto",
		"Iguchi",
		"Yamauchi"
	};

	string lastNames[10] =
	{
		"Eriko",
		"Yasuko",
		"Nodoka",
		"Kairi",
		"Yuki",
		"Atsuya",
		"Chuhei",
		"Shinpei",
		"Seishu",
		"Tomomi"
	};


	ofstream out;
	out.open("import.sql");


	string prefix = "insert into Player(";
	string suffix = ");";

// 24 per team, 5 pitcher, 

	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 5; j++){
			
			string first = firtNames[rand()%10];
			string last = lastNames[rand()%10];

			out << prefix + to_string(i) + "," + "\"" + first + "\"" + ","  "\"" + last + "\"" 
			+ "," + to_string(0) + "," + to_string(i) + suffix;
			out << endl;
		}

		for(int j = 0; j < 19; j++){
			
			string first = firtNames[rand()%10];
			string last = lastNames[rand()%10];

			out << prefix + to_string(i) + "," + "\"" + first + "\"" + ","  "\"" + last + "\"" 
			+ "," + to_string(1) + "," + to_string(i) + suffix;
			out << endl;
		}


	}
	out.close();
}
