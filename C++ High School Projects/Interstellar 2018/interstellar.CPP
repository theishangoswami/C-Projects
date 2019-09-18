#include<fstream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
class details{
	private:
		char first_name[20], last_name[10], email[35], password[20], gender, dob[8];
		long unsigned int phone;
		int log_number;
	public:
		void getdata(){
			cout<<"\n\t\tEnter your First Name\t:";
			cin>>first_name;
			cout<<"\n\t\tEnter the Last Name\t:";
			cin>>last_name;
			cout<<"\n\t\tEnter your Gender\t:";
			cin>>gender;
			cout<<"\n\t\tEnter your email\t:";
			cin>>email;
			cout<<"\n\t\tEnter your password\t:";
			cin>>password;
			cout<<"\n\t\tEnter your Phone no.\t:";
			cin>>phone;
			cout<<"\n\t\tEnter your D.O.B\t:";
			cin>>dob;
			log_number=0;
		}
		void showdata(){
		cout<<"\n\t  FIRST NAME: "<<first_name;
		cout<<"\tLAST NAME: "<<last_name;
		cout<<"\n\n\t  PHONE NO.: "<<phone;
		cout<<"\tEMAIL: "<<email;
		}
		void increaselog_number(){
			log_number++;
		}
		char *getfname(){
			return first_name;
		}
		char *getpass(){
			return password;
		}
		char *getlname(){
			return last_name;
		}
		double getphone(){
			return phone;
		}
		char *getemail(){
			return email;
		}
		int getlog_number(){
			return log_number;
		}
		void change_pass(){
			char new_pass[20];
			cout<<"\n\t\tEnter the new password\t:";
			cin>>new_pass;
			strcpy(password, new_pass);
		}
};
details d;
class trip_details{
	private:
		int adults, children, days;
		float total_cost;
		char from[10], to[10];
	public:
		void getdata(char departure[], char destination[], float cost){
			cout<<"\n\tEnter the no. of Adults\t\t\t:";
			cin>>adults;
			cout<<"\n\tEnter the no. of Children\t\t:";
			cin>>children;
			cout<<"\n\tEnter the no. of Earth Days for stay\t:";
			cin>>days;
			strcpy(from, departure);
			strcpy(to, destination);
			total_cost = cost + (adults*1000) +  (children*500) + (days*2000);
		}
		void showdata(){
			cout<<"\n\n\n\tDEPARTURE FROM\t\t\t:"<<from;
			cout<<"\n\n\tDESTINATION\t\t\t:"<<to;
			cout<<"\n\n\tNo. of Adults\t\t\t:"<<adults;
			cout<<"\n\n\tNo. of Children\t\t\t:"<<children;
			cout<<"\n\n\tNo. of Earth Days for stay\t:"<<days;
			cout<<"\n\n\tTOTAL COST OF TRIP\t\t:"<<total_cost;
		}
};
void transition(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	int k=0;
	randomize();
		int x[150], y[150], speed[150];
		for(int j=0; j<150; j++){
			x[j] = random(getmaxx());
			y[j] = random(getmaxy());
			speed[j] = random(11-4+1)+4;
		}
		while(k<=180){
			cleardevice();
			for(int i=0; i<150; i++){
				circle(x[i], y[i], 1);
				floodfill(x[i], y[i], WHITE);
				x[i] = x[i] + speed[i];
			}
			delay(15);
			k++;
		}
}
int intro_page(){
	transition();
	char tagline[40];
	strcpy(tagline, "-'Because Humans are EXPLORERS. . . .'");
	int c;
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 7);
	outtextxy(getmaxx()/8, getmaxy()/10, "INTERSTELLAR");
	outtextxy(getmaxx()/9, getmaxy()/6, "*****************");
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 2);
	outtextxy(getmaxx()/6.7, getmaxy()/2.9, tagline);
	outtextxy(getmaxx()/6, getmaxy()/2, "1) LOGIN TO YOUR ID");
	outtextxy(getmaxx()/6, getmaxy()/1.8, "2) FIRST TIME USER? REGISTER YOURSELF");
	outtextxy(getmaxx()/6, getmaxy()/1.6, "3) EXIT");
	outtextxy(getmaxx()/6, getmaxy()/1.4, "Choose the required option:");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t";
	cin>>c;
	return c;
}

void registeration(){
	ofstream f;
	f.open("details.dat", ios::binary|ios::app);
	d.getdata();
	f.write((char*)&d, sizeof(d));
	f.close();
}
int notifications(details a){
	if((a.getlog_number())%2==0){
		return 1;
	}
	else{return 0;}
}
/*void change_password(char username[]){
	fstream g;
	details a;
	g.open("details.dat", ios::binary|ios::in|ios::out);
	char check_pass[20];
	cout<<"\n\t\tEnter Your Old Password\t:";
	cin>>check_pass;

		g.read((char*)&a, sizeof(a));
		while(!g.eof()){
		//g.read((char*)&a, sizeof(a));
		if(strcmp(a.getfname(), username)==0){
			if(strcmp(a.getpass(), check_pass)==0){
			       a.change_pass();
			       cout<<"\n\t\tNEW PASSWORD IS:"<<a.getpass();
			       g.seekp(g.tellg()-sizeof(a));
			       g.write((char*)&a, sizeof(a));
			       cout<<"\n\t\tPASSWORD CHANGED!!";
			       break;
			}
			else{
				cout<<"\n\t\tWRONG PASSOWRD!!";
			}
		}

		g.read((char*)&a, sizeof(a));	}
	g.close();
	fstream f;
	f.open("details.dat", ios::binary|ios::in|ios::out|ios::app);
	x.change_pass();
	f.seekp(pos);
	cout<<"\n\t\tNew PASS:"<<x.getpass();
	f.write((char*) &x, sizeof(x));
	f.close()
}*/
void deletion(details a){
	details fileobj;
	fstream f, o;
	char pass_check[25];
	f.open("details.dat", ios::binary|ios::in|ios::out);
	o.open("newdetails.dat", ios::binary|ios::in|ios::out);
	if(!f){
		cout<<"\n\n\n\n\t\t\FILE NOT FOUND!!";
	}
	else{
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\tEnter your Password\t:";
		cin>>pass_check;
		if(strcmp(pass_check, a.getpass())==0){
			while(!f.eof()){
				f.read((char*)&fileobj, sizeof(fileobj));
				if(strcmp(fileobj.getpass(), pass_check)!=0){
					o.write((char*)&fileobj, sizeof(fileobj));
				}
			}
			f.close();
			o.close();
			remove("details.dat");
			rename("newdetails.dat", "details.dat");
			cout<<"\n\n\n\n\t\tYour account has been successfully deleted!!\n\t\tGOODBYE!!";
			}
		else{
			cout<<"\n\n\tWRONG PASSWORD!!";
		}
	}
}
void earth_details(){
	transition();
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 3);
	outtextxy(getmaxx()/4, getmaxy()/20, "EARTH-THE BLUE PLANET");
	cout<<"\n\n\n\n\t1) It is the third planet from the sun in our Solar System";
	cout<<"\n\n\t2) Gravitational Acceleration: 9.8";
	cout<<"\n\n\t3) Main Attractions:\n\t1)Massive Oceans and Majestic Mountains\n\t2) Beautiful Night Skies with occasional Meteor Showers";
	cout<<"\n\t3)Rich Flora and Fauna with numerous National Parks\n\t4) Various cultural Places Built by humans";
	cout<<"\n\n\t4) Main Deparutre/Arrival Station: Cape Canevral, California";
	cout<<"\n\n\t5) Main Mode of Transport: The BFR(BIG FALCON ROCKET)\n";
	cout<<"--------------------------------------------------------------------------------\n";
}
void mars_details(){
	transition();
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 3);
	outtextxy(getmaxx()/4, getmaxy()/20, "MARS-THE RED PLANET");
	cout<<"\n\n\n\n\t1) It is the fourth planet from the sun in Our Solar System";
	cout<<"\n\n\t2) Gravitational Acceleration: 3.7";
	cout<<"\n\n\t3) Main Attractions:\n\t1) The highest mountain in the solar system: The Olympus Mons";
	cout<<"\n\t2) The Blue Sunset and Double Moon Nights\n\t3) Asteriod Craters and Ancient Rovers Museum";
	cout<<"\n\t4) Asteroid Belt Tours and Mining Souvenirs\n";
	cout<<"\n\t4) Main Departure/Arrival Station: The Gale Crater\n";
	cout<<"\n\t5) Main Mode of Transport: The MLV(Mangalyaan Launch Vehicle)";
	cout<<"\n--------------------------------------------------------------------------------\n";
}
void titan_details(){
	transition();
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 3);
	outtextxy(getmaxx()/6, getmaxy()/20, "TITAN-THE SECOND LARGEST MOON");
	cout<<"\n\n\n\n\t1) It is the biggest moon of the sixth planet from the sun, Saturn\n";
	cout<<"\n\t2) Gravitational Accelerations: 1.35";
	cout<<"\n\t3) Main Attractions:\n\t1) Ethane and Methane Rains and Lakes\n";
	cout<<"\t2) Close-up Saturn Viewing and Trip to its Outer Ring\n\t3) 'The Magic Island' phenomeneon";
	cout<<"\n\t4) Fun Activies like: 'Winged Flights(Flying like birds)' and\n\t 'Flying like Iron Man' due to low gravity and thick atmosphere";
	cout<<"\n\t5) The Highest Jumper Annual Contest: Are you man enough?\n\t(Last years' record: 50ft!!)";
	cout<<"\n\n\t4) Main Departure/Arrival Station: The Mayda Insula, Krakenmare Lake\n";
	cout<<"\n\n\t5) Main mode of transport: The Space Elevator";
	cout<<"\n--------------------------------------------------------------------------------\n";
}
void europa_details(){
	transition();
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 3);
	outtextxy(getmaxx()/4, getmaxy()/20, "EUROPA-THE GALILEAN MOON");
	cout<<"\n\n\n\n\t1) It is the moon of the fifth planet from the sun, Jupiter\n";
	cout<<"\n\n\t2) Gravitational acceleration: 1.31";
	cout<<"\n\n\t3) Main Attractions:\n\t1) Icy Cold Water Valcanoes\n";
	cout<<"\t2) Underground Ocean Dive and Visit to the Icy Core\n\t3) Orbit around Jupiter and trip to Asteroid Belt";
	cout<<"\n\t4) Fun Activities like: 'Flying Like Ironman' and 'Water Jet Ride'";
	cout<<"\n\n\t4) Main Departure/Arrival Station: The Space Elevator";
	cout<<"\n--------------------------------------------------------------------------------\n";
}
void keplar_details(){
	transition();
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 3);
	outtextxy(getmaxx()/5, getmaxy()/20, "KEPLAR-452b: THE SUPER EARTH");
	cout<<"\n\n\n\n\t1) It is a planet in the Habitable Zone of its parent star in\n\tCygnus Constellation";
	cout<<"\n\n\t2) Gravtitaional Acceleration: 18.63";
	cout<<"\n\n\t3)Main Attractions:\n\t1) Majestic Mountains and Massive Oceans";
	cout<<"\n\t2) Exotic Marin and Terrestial life\n\t3) The Grand Sunset and Sunrise";
	cout<<"\n\t4) Fun Activities Like: 'Earth Watch(Watching the Past)'and\n\t'Weight Lifting Competition(Evrything will be Heavier)'\n";
	cout<<"\n\t4) Main Departure/Arrival Station: Ryugu Crater";
	cout<<"\n\n\t5) Main Mode of Transport: The Falcon Heavy";
	cout<<"\n--------------------------------------------------------------------------------\n";
}
void proxima_details(){
	transition();
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 3);
	outtextxy(getmaxx()/10, getmaxy()/20, "PROXIMA CENTAURI B:CLOSEST EXOPLANET");
	cout<<"\n\n\n\n\t1) It is the closest exoplanet from earth and orbits\n\tAlpha Centauri(star)";
	cout<<"\n\n\t2) Gravitational Acceleration: 12.74";
	cout<<"\n\n\t3) Main Attractions:\n\t1) The Triple Sunset and Triple Sunrise";
	cout<<"\n\t2) Interstellar Asteroid Belt Visit \n\t3) Fun Activities like: 'Earth Watch(Viewing the Past)'";
	cout<<"\n\n\t4) Main Departure/Arrival Station: New Horizons Crater";
	cout<<"\n\n\t5) Main Mode of Transport: The Falcon Heavy";
	cout<<"\n--------------------------------------------------------------------------------\n";
}
void view_reciept(details x, trip_details y){
	char ch;
	cout<<"\n--------------------------------------------------------------------------------\n";
	cout<<"\n\n\n\n\t\t\tFINAL RECIEPT\n\n";
	x.showdata();
	y.showdata();
	cout<<"\n\n\n\tDo you want to Confirm Your Trip?";
	cin>>ch;
	if(ch=='y'){
		cout<<"\n\n\t\tYOUR TRIP HAS BEEN CONFIRMED!!";
		cout<<"\n\n\t\tTHANK YOU FOR USING OUR SERVICE!!";
		cout<<"\n\n\t\tGET READY TO EXPLORE";
	}
	else{
		return;
	}
}
int quiz(){
	int score=0, a1, a2, a3;
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 4);
	outtextxy(getmaxx()/4, getmaxy()/22, "SPACE QUIZ!!");
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 3);
	outtextxy(getmaxx()/6, getmaxy()/8, "Are you worthy enough?");
	cout<<"\n\n\n\n\n\n\n\n\tINSTRUCTIONS:\n";
	cout<<"\n\t1) 3 logical situation based MCQ questions will be asked";
	cout<<"\n\n\t2) As we want you to be safe on your trip,\n\t    passing this test is necessity";
	cout<<"\n\n\t3) You have to answer at least 1 quetsion correctly";
	getch();
	closegraph();
	clrscr();
	cout<<"\n\tQ.1) A fire breaks out on the Space Station, what will you do?\n";
	cout<<"\n\n\t1) Contain it and let it run out of fuel quickly";
	cout<<"\n\n\t2) Use a fire extinguisher";
	cout<<"\n\n\t3) Use a fire resistant blanket to extinguish";
	cout<<"\n\n\tEnter your answer:";
	cin>>a1;
	if(a1==1){
		cout<<"\n\n\tCORRECT!!";
		score++;
	}
	else{cout<<"\n\n\tINCORRECT!!";}
	cout<<"\n\n\tQuick-Tip:\n";
	cout<<"\n\tFire in space behaves differently due to 0 gravity \n\tThe flames take spherical shapes";
	cout<<"and also grows drastically in size \n\tSo, extinguishing is not really option\n\tJust make sure its fuel run out quickly!!";
	getch();
	clrscr();
	cout<<"\n\tQ.2) On the Space Station, you feel like vomitting, what will you do?\n";
	cout<<"\n\t1) Control it and not vomit";
	cout<<"\n\n\t2) Use a specially designed bag to vomit in";
	cout<<"\n\n\t3) Go to the toilet";
	cout<<"\n\n\tEnter your answer:";
	cin>>a2;
	if(a2==2){
		cout<<"\n\n\tCORRECT!!";
		score++;
	}
	else{cout<<"\n\n\tINCORRECT!!";}
	cout<<"\n\n\tQuick Tip:\n";
	cout<<"\n\tControlling is not an option as a lot of time is to be spent in space\n\t";
	cout<<"and normally vomiting does not work in 0 gravity as nobody likes flying\n\tvomit globules";
	cout<<".So, specially designed bages is your only option";
	getch();
	clrscr();
	cout<<"\n\tQ.3) You will spend a month in space. Do you";
	cout<<"\n\n\t1) Do as little physical work as possible and save energy";
	cout<<"\n\n\t2) Exercise for about 10-15 min a day";
	cout<<"\n\n\t3) Exercise for about 2-3 hours a day";
	cout<<"\n\n\tEnter your answer:";
	cin>>a3;
	if(a3==3){
		cout<<"\n\n\tCORRECT!!";
		score++;
	}
	else{cout<<"\n\n\tINCORRECT!!";}
	cout<<"\n\n\tQuick Tip:\n";
	cout<<"\n\tA lot of exercise in space is necessary to keep your \n\tbone density normal and muscles strong in the 0 gravity!!";
	cout<<"\n\tSo, exercise at least 2 hours a day";
	getch();
	return score;
}
void light_speed(details b){
	int quiz_score;
	int ch1, ch2;
	char ch3;
	trip_details t;
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 2);
	outtextxy(getmaxx()/10, getmaxy()/5, "1) EARTH");
	outtextxy(getmaxx()/10, getmaxy()/4, "2) MARS");
	outtextxy(getmaxx()/10, getmaxy()/3.3, "3) TITAN");
	outtextxy(getmaxx()/10, getmaxy()/2.85, "4) EUROPA");
	outtextxy(getmaxx()/10, getmaxy()/2.5, "5) KEPLAR-452b");
	outtextxy(getmaxx()/10, getmaxy()/2.2, "6) PROXIMA CENTAURI B");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\n\n\tDEPARTURE FROM\t:";
	cin>>ch1;
	cout<<"\n\tDESTINATION\t:";
	cin>>ch2;
	switch(ch1){
		    case 1: switch(ch2){
				case 2: mars_details();
					t.getdata("Earth", "Mars", 10000);
					view_reciept(b, t);
					break;
				case 3: titan_details();
					t.getdata("Earth", "Titan", 10000);
					view_reciept(b, t);
					break;
				case 4: europa_details();
					t.getdata("Earth", "Europa", 100000);
					view_reciept(b, t);
					break;
				case 5:	keplar_details();
					t.getdata("Earth", "Keplar 452b", 100000);
					view_reciept(b, t);
					break;
				case 6: proxima_details();
					t.getdata("Earth", "Proxima Centauri b", 100000);
					view_reciept(b, t);
					break;
			}
			break;
		 case 2: switch(ch2){
				case 1: earth_details();
					t.getdata("Mars", "Earth", 10000);
					view_reciept(b, t);
					break;
				case 3: titan_details();
					t.getdata("Mars", "Titan", 10000);
					view_reciept(b, t);
					break;
				case 4: europa_details();
					t.getdata("Mars", "Europa", 10000);
					view_reciept(b, t);
					break;
				case 5: keplar_details();
					t.getdata("Mars", "Keplar 452b", 1000000);
					view_reciept(b, t);
					break;
				  case 6: proxima_details();
					t.getdata("Mars", "Proxima Centauri b", 100000);
					view_reciept(b, t);
					break;
			}
			break;
		case 3: switch(ch2){
				case 2: mars_details();
					t.getdata("Titan", "Mars", 1000);
					view_reciept(b, t);
					break;
				case 1: earth_details();
					t.getdata("Titan", "Earth", 100);
					view_reciept(b, t);
					break;
				case 4: europa_details();
					t.getdata("Titan", "Europa", 10);
					view_reciept(b, t);
					break;
				case 5: keplar_details();
					t.getdata("Titan", "Keplar 452b", 10);
					view_reciept(b, t);
					break;
				case 6: proxima_details();
					t.getdata("Titan", "Proxima Centauri b", 10);
					view_reciept(b, t);
					break;
				}
			break;
		case 4: switch(ch2){
				case 2: mars_details();
					t.getdata("Europa", "Mars", 10);
					view_reciept(b, t);
					break;
				case 3: titan_details();
					t.getdata("Europa", "Titan", 10);
					view_reciept(b, t);
					break;
				case 1: earth_details();
					t.getdata("Europa", "Earth", 10);
					view_reciept(b, t);
					break;
				case 5: keplar_details();
					t.getdata("Europa", "Keplar 452b", 10);
					view_reciept(b, t);
					break;
				case 6: proxima_details();
					t.getdata("Europa", "Proxima Cenaturi b", 10);
					view_reciept(b, t);
					break;
			}
			break;
		case 5: switch(ch2){
				case 2: mars_details();
					t.getdata("Keplar 452b", "Mars", 10);
					view_reciept(b, t);
					break;					case 3: titan_details();
					t.getdata("Keplar 452b", "Titan", 10);
					view_reciept(b, t);
					break;
				case 4: europa_details();
					t.getdata("Keplar 452b", "Europa", 10);
					view_reciept(b, t);
					break;
				case 1: earth_details();
					t.getdata("Keplar 452b", "Earth", 10);
					view_reciept(b, t);
					break;
				case 6: proxima_details();
					t.getdata("Keplar 452", "Proxima Centauri b", 10);
					view_reciept(b, t);
					break;
			}
		break;
		case 6: switch(ch2){
				case 2: mars_details();
					t.getdata("Proxima Cenaturi b", "Mars", 10);
					view_reciept(b, t);
					break;
				case 3: titan_details();
					t.getdata("Proxima Centauri b", "Titan", 10);
					view_reciept(b, t);
					break;
				case 4: europa_details();
					t.getdata("Proxima Centauri b", "Europa", 10);
					view_reciept(b, t);
					break;
				case 5: keplar_details();
					t.getdata("Proxima Cenaturi b", "Keplar 452b", 10);
					view_reciept(b, t);
					break;
				case 1: earth_details();
					t.getdata("Proxima Centauri b", "Earth", 10);
					view_reciept(b, t);
					break;
			}
		break;
	}
}
void account(details s){
	int ch;
	transition();
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 5);
	outtextxy(getmaxx()/6, getmaxy()/21, "WELCOME,");
	outtextxy(getmaxx()/1.8, getmaxy()/21, s.getfname());
	setlinestyle(2, 0 ,3);
	line(getmaxx()/10, getmaxy()/4.5, getmaxx()/1.3, getmaxy()/4.5);
	cout<<"\n\n\n\n\n\n\n";
	s.showdata();
	line(getmaxx()/10, getmaxy()/4.5, getmaxx()/10, getmaxy()/2.6);
	line(getmaxx()/10, getmaxy()/2.6, getmaxx()/1.3, getmaxy()/2.6);
	line(getmaxx()/1.3, getmaxy()/4.5, getmaxx()/1.3, getmaxy()/2.6);
	settextstyle(COMPLEX_FONT, HORIZ_DIR, 2);
	outtextxy(getmaxx()/10, getmaxy()/2.4, "1) LIGHT SPEED!");
	outtextxy(getmaxx()/10, getmaxy()/2.08, "2) NOTIFICATIONS");
	outtextxy(getmaxx()/10, getmaxy()/1.78, "3) DELETE ACCOUNT");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t";
	cout<<"Choose the desired Option:";
	cin>>ch;
	switch(ch){
		case 1:	transition();
			int quiz_score=0;
			quiz_score = quiz();
			if(quiz_score>=1){
				transition();
				settextstyle(COMPLEX_FONT, HORIZ_DIR, 4);
				outtextxy(getmaxx()/4, getmaxy()/20, "...LIGHT SPEED...");
				outtextxy(getmaxx()/4.9, getmaxy()/9, "*********************");
				light_speed(s);
			}
			else{
				cout<<"\n\n\n\t\t\tSORRY!! :(";
				cout<<"\n\n\t\tYou are not ready to go to a SPACE TRIP!!";
				cout<<"\n\n\t\tNext time come prepared!!";
			}
			break;
		case 2: transition();
			int x = notifications(s);
			if(x==1){
				settextstyle(COMPLEX_FONT, HORIZ_DIR, 4);
				outtextxy(getmaxx()/5, getmaxy()/20,"CONGRATULATIONS!!");
				cout<<"\n\n\n\n\n\n\n\n\n\tCONGRATULATIONS, "<<s.getfname()<<" as you are our regular customer,\n";
				cout<<"\n\tAnd WE CARE ABOUT YOU A LOT, we are giving you a 'FREE TRIP' \n\tto your desired GALAXY!!!\n";
				cout<<"\n\tJust use the coupon code: SpaceTripGalaxy101";
			}
			if(x==0){
				cout<<"\n\n\n\n\n\n\n\n\tCOME BACK LATER AND GET ALL YOUR AWESOME\n\n\tSCI-FI AND SPACE EXPLORATION NEWS AND NOTIFICATIONS HERE!!!";
				settextstyle(COMPLEX_FONT, HORIZ_DIR, 3);
				outtextxy(getmaxx()/10, getmaxy()/20,"NO NOTIFICATIONS TODAY \_('-')_/");

			}
			break;
		case 3: transition();
			settextstyle(COMPLEX_FONT, HORIZ_DIR, 4);
			outtextxy(getmaxx()/4, getmaxy()/20, "ACCOUNT DELETION");
			deletion(s);
			break;
	}
	getch();
}
void login(){
	details dL;
	int flag=0;
	char login[20], pass[20];
	float pos=0;
	cout<<"\n\t\tEnter your Login ID\t:";
	cin>>login;
	cout<<"\n\t\tEnter your password\t:";
	cin>>pass;
	fstream i;
	i.open("details.dat", ios::binary|ios::in|ios::out);
	while(!i.eof()){
		pos = i.tellg();
		i.read((char*)&dL, sizeof(dL));
		if(strcmp(login, dL.getfname())==0){
			if(strcmp(pass, dL.getpass())==0){
				flag++;
				cout<<"\n\n\n\t\tLOGIN SUCCESSFULL!!!";
				dL.increaselog_number();
				i.seekp(pos);
				i.write((char*) &dL, sizeof(dL));
				getch();
				account(dL);
				break;
			}
			else{
				flag++;
				cout<<"\n\n\n\t\tWRONG PASSWORD!!!\n"<<pos;
																									getch();
			}
		}
	}
	if(flag==0){
		cout<<"\n\n\n\t\tUSER DOES NOT EXIST!!!\n";
		getch();
	}
	i.close();
}
void main(){
char c;
int gd=DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
do{
	int ch = intro_page();
	switch(ch){
		case 1: transition();
			settextstyle(COMPLEX_FONT, HORIZ_DIR, 5);
			outtextxy(getmaxx()/4, getmaxy()/20, "USER LOGIN");
			outtextxy(getmaxx()/4.7, getmaxy()/9, "****************");
			cout<<"\n\n\n\n\n\n\n\n\t\t\t\t";
			login();
			break;
		case 2:	transition();
			settextstyle(COMPLEX_FONT, HORIZ_DIR, 5);
			outtextxy(getmaxx()/4, getmaxy()/20, "REGISTERATION");
			outtextxy(getmaxx()/4, getmaxy()/9, "*****************");
			cout<<"\n\n\n\n\n\n\n\t\t\t\t";
			registeration();
			break;
		case 3: transition();
			exit(0);
	}
	cout<<"\n\n\n\t\tDo you want to continue?";
	cin>>c;
	}while(c == 'y');
	closegraph();
	getch();
}