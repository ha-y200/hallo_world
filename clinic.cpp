  #include <fstream>
#include <iostream>
using namespace std;
class clinic
{
 protected :
 string P_name;
 string disease;
 string discharge;
 public :
 void getdata()
 {
 cout <<"Enter Patient Name : " <<"\n";
cin>> P_name;
 cout <<"Enter Disease of Patient : " << "\n";
 cin>>disease;
 cout <<"Enter Date of Discharge : " << "\n";
cin >>discharge; 
 }

 void display ()
{
cout << "Patient Name : " << P_name << "\n";
cout <<"Patient Disease : "<< disease << "\n";
cout <<"Date of Discharge :"<<discharge << "\n"; }
};
class getage : public clinic
{
 private :
 int age;
 public :

 void get_age()
 {

 cout << "Enter Age of Patient : " << "\n";
 cin >> age; 
 }

 void display_age()
 {
 cout <<"Patient Age : " << age << "\n";
 }
};
int main()
{   
    getage p1;
    	 char ch;
	cout<<" \n\n";//this graphic user enter face
cout<<"                                Clinical appointment reservation\n\n";
cout<<"                                      made by : Bayan Adam\n\n";
cout<<"                                ***********************************\n";
cout<<"     MAIN MENU\n\n";
cout<<"   1.Enter new appointment\n\n";
cout<<"   2.View a new appointment\n\n";
cout<<"   3.doctors'name\n\n";
cout<<"   4. time of work";
cout<<"   5.Exit\n\n";
cout<<"                Please Enter Your Choice <1-5>\n";
cin>>ch;	
	switch(ch){//make statment to help user
case '1':
	 p1.getdata();
      p1.get_age();
     // system ("PAUSE")//new appointment
break;
	
case '2'://Display  appointment
	cout <<"Display Information of Patient : " << "\n\n\n";
 p1.display_age();
 p1.display();
break;
case '3'://doctors'name
cout<<"doctor:magde    ""surgeon";
cout<<"doctor:tark     ""Cardiologist";
cout<<"doctor:mohamed  ""Orthopedic doctor";
cout<<"doctor:esraa    ""dentist";
break;
case '4':///View time work
	cout<<"doctor:magde    ""12:3 v";
cout<<"doctor:tark     ""4:7 Am";
cout<<"doctor:mohamed  ""6:8 Am";
cout<<"doctor:esraa    ""9:12 Am";
cout<<"We work all week except Friday";
break;
case '5'://Exit
	return 0;

default ://when user enter another number
	cout<< "You should choice <1-5>";
break;}
char z;	cout<<" \n\n";//this graphic user enter face
cout<<"                                Clinical appointment reservation\n\n";
cout<<"                                      made by : Bayan Adam\n\n";
cout<<"                                ***********************************\n";
cout<<"     MAIN MENU\n\n";
cout<<"   1.Enter new appointment\n\n";
cout<<"   2.View a new appointment\n\n";
cout<<"   3.doctors'name\n\n";
cout<<"   4. time of work";
cout<<"   5.Exit\n\n";
cout<<"                Please Enter Your Choice <1-5>\n";
cin>>z;	
	switch(z){//make statment to help user
case '1':
	 p1.getdata();
      p1.get_age();
     // system ("PAUSE")//new appointment
break;
	
case '2'://Display  appointment
	cout <<"Display Information of Patient : " << "\n\n\n";
 p1.display_age();
 p1.display();
break;
case '3'://doctors'name
cout<<"doctor:magde    ""surgeon";
cout<<"doctor:tark     ""Cardiologist";
cout<<"doctor:mohamed  ""Orthopedic doctor";
cout<<"doctor:esraa    ""dentist";
break;
case '4':///View time work
	cout<<"doctor:magde    ""12:3 v";
cout<<"doctor:tark     ""4:7 Am";
cout<<"doctor:mohamed  ""6:8 Am";
cout<<"doctor:esraa    ""9:12 Am";
cout<<"We work all week except Friday";
break;
case '5'://Exit
	return 0;
default ://when user enter another number
	cout<< "You should choice <1-5>\n";
break;}
char j;	cout<<" \n\n";//this graphic user enter face
cout<<"                                Clinical appointment reservation\n\n";
cout<<"                                      made by : Bayan Adam\n\n";
cout<<"                                ***********************************\n";
cout<<"     MAIN MENU\n\n";
cout<<"   1.Enter new appointment\n\n";
cout<<"   2.View a new appointment\n\n";
cout<<"   3.doctors'name\n\n";
cout<<"   4. time of work";
cout<<"   5.Exit\n\n";
cout<<"                Please Enter Your Choice <1-5>\n";
cin>>j;	
	switch(j){//make statment to help user
case '1':
	 p1.getdata();
      p1.get_age();
     // system ("PAUSE")//new appointment
break;
	
case '2'://Display  appointment
	cout <<"Display Information of Patient : " << "\n\n\n";
 p1.display_age();
 p1.display();
break;
case '3'://doctors'name
cout<<"doctor:magde    ""surgeon\n";
cout<<"doctor:tark     ""Cardiologist\n";
cout<<"doctor:mohamed  ""Orthopedic doctor\n";
cout<<"doctor:esraa    ""dentist\n";
break;
case '4':///View time work
	cout<<"doctor:magde    ""12:3 Am\n";
cout<<"doctor:tark     ""4:7 Am\n";
cout<<"doctor:mohamed  ""6:8 Am\n";
cout<<"doctor:esraa    ""9:12 Am\n";
cout<<"We work all week except Friday\n";
break;
case '5'://Exit
	return 0;
default ://when user enter another number
	cout<< "You should choice <1-5>";
break;}
char u;	cout<<" \n\n";//this graphic user enter face
cout<<"                                Clinical appointment reservation\n\n";
cout<<"                                      made by : Bayan Adam\n\n";
cout<<"                                ***********************************\n";
cout<<"     MAIN MENU\n\n";
cout<<"   1.Enter new appointment\n\n";
cout<<"   2.View a new appointment\n\n";
cout<<"   3.doctors'name\n\n";
cout<<"   4. time of work";
cout<<"   5.Exit\n\n";
cout<<"                Please Enter Your Choice <1-5>\n";
cin>>u;	
	switch(u){//make statment to help user
case '1':
	 p1.getdata();
      p1.get_age();
     // system ("PAUSE")//new appointment
break;
	
case '2'://Display  appointment
	cout <<"Display Information of Patient : " << "\n\n\n";
 p1.display_age();
 p1.display();
break;
case '3'://doctors'name
cout<<"doctor:magde    ""surgeon";
cout<<"doctor:tark     ""Cardiologist";
cout<<"doctor:mohamed  ""Orthopedic doctor";
cout<<"doctor:esraa    ""dentist";
break;
case '4':///View time work
	cout<<"doctor:magde    ""12:3 v";
cout<<"doctor:tark     ""4:7 Am";
cout<<"doctor:mohamed  ""6:8 Am";
cout<<"doctor:esraa    ""9:12 Am";
cout<<"We work all week except Friday";
break;
case '5'://Exit
	return 0;
default ://when user enter another number
	cout<< "You should choice <1-5>";
break;}
char o;	cout<<" \n\n";//this graphic user enter face
cout<<"                                Clinical appointment reservation\n\n";
cout<<"                                      made by : Bayan Adam\n\n";
cout<<"                                ***********************************\n";
cout<<"     MAIN MENU\n\n";
cout<<"   1.Enter new appointment\n\n";
cout<<"   2.View a new appointment\n\n";
cout<<"   3.doctors'name\n\n";
cout<<"   4. time of work";
cout<<"   5.Exit\n\n";
cout<<"                Please Enter Your Choice <1-5>\n";
cin>>o;	
	switch(o){//make statment to help user
case '1':
	 p1.getdata();
      p1.get_age();
     // system ("PAUSE")//new appointment
break;
	
case '2'://Display  appointment
	cout <<"Display Information of Patient : " << "\n\n\n";
 p1.display_age();
 p1.display();
break;
case '3'://doctors'name
cout<<"doctor:magde    ""surgeon";
cout<<"doctor:tark     ""Cardiologist";
cout<<"doctor:mohamed  ""Orthopedic doctor";
cout<<"doctor:esraa    ""dentist";
break;
case '4':///View time work
	cout<<"doctor:magde    ""12:3 v";
cout<<"doctor:tark     ""4:7 Am";
cout<<"doctor:mohamed  ""6:8 Am";
cout<<"doctor:esraa    ""9:12 Am";
cout<<"We work all week except Friday";
break;
case '5'://Exit

break;
	return 0;
default ://when user enter another number
	cout<< "You should choice <1-5>";
break;}

char w;	cout<<" \n\n";//this graphic user enter face
cout<<"                                Clinical appointment reservation\n\n";
cout<<"                                      made by : Bayan Adam\n\n";
cout<<"                                ***********************************\n";
cout<<"     MAIN MENU\n\n";
cout<<"   1.Enter new appointment\n\n";
cout<<"   2.View a new appointment\n\n";
cout<<"   3.doctors'name\n\n";
cout<<"   4. time of work";
cout<<"   5.Exit\n\n";
cout<<"                Please Enter Your Choice <1-5>\n";
cin>>w;	
	switch(w){//make statment to help user
case '1':
	 p1.getdata();
      p1.get_age();
     // system ("PAUSE")//new appointment
break;
	
case '2'://Display  appointment
	cout <<"Display Information of Patient : " << "\n\n\n";
 p1.display_age();
 p1.display();
break;
case '3'://doctors'name
cout<<"doctor:magde    ""surgeon";
cout<<"doctor:tark     ""Cardiologist";
cout<<"doctor:mohamed  ""Orthopedic doctor";
cout<<"doctor:esraa    ""dentist";
break;
case '4':///View time work
	cout<<"doctor:magde    ""12:3 v";
cout<<"doctor:tark     ""4:7 Am";
cout<<"doctor:mohamed  ""6:8 Am";
cout<<"doctor:esraa    ""9:12 Am";
cout<<"We work all week except Friday";
break;
case '5'://Exit
	return 0;
default ://when user enter another number
	cout<< "You should choice <1-5>";
break;}
	//end the program
	return 0;

}

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 
 

 


