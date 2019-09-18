# include<iostream>
# include <conio.h>
#include<stdlib.h>
#include<process.h>
#include<ctype.h>
using namespace std;
void hpquiz();
void techquiz();
int main()
{
  // clrscr();
char x;
cout<<"                                THE MIND GAMES"<<endl;
cout<<"                               ----------------"<<endl<<endl;
cout<<"A) Play Technology Trivia Quiz."<<endl;
cout<<"B) Play Harry Potter quiz " << endl;
cout<<endl<<endl<<"Enter What You Want to Play (A & B), press 0 to exit  : ";
cin>> x ;
x = toupper(x);
char qw;
cin.get(qw);
switch(x)
{
case('A'): techquiz();
break;
case('B'): hpquiz();
case(0): cout<< "See you later , Aligator ! " ;
	break;
default: cout<<"Wrong choice ";
	break;
}
}
void techquiz()
{

 int a[25] , s , p;
 s=0 ;
char name[30], bld_sts[15];
cout<<"                           THE TECHNOLOGY TRIVIA"<<endl;
cout<<"                          --------------------------"<<endl<<endl;
cout<<"Enter Your NAME: ";
cin.getline(name,30);
cout<<endl<<"Read the following instructions CAREFULLY ! "<<endl<<endl;
cout<<" 1) If You think technology have changed the World , enter HAILTECHNOLOGY  "<<endl;
cout<<" 2) If You think technology is not required , enter NO "<<endl<<endl;
cout<<" Following these Instructions, Enter Your OPINION : ";
cin.getline(bld_sts,15);
cout<<"Good , let Geek up !!! " ;
cout<<endl<<endl<<"                         ONLY THE WITTY CAN PREVAIL..."<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;

cout<<endl<<"Q1. Who is the father of theoritical Computer science "<<endl<<endl;
cout<<"	1) Steve jobs"<<endl;
cout<<"	2) Alan turing"<<endl;
cout<<"	3) Bill gates"<<endl;
cout<<"	4) steve wozinak"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[0];
if (a[0]==2)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q2. Who created facebook"<<endl<<endl;
cout<<"	1) Mark zuckerberg"<<endl;
cout<<"	2) Elon musk "<<endl;
cout<<"	3) hardwell "<<endl;
cout<<"	4) A Snowy Cat"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[1];
if (a[1]==1)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q3. full form of WYSIWYG "<<endl<<endl;
cout<<"	1) What You See Is What You Get "<<endl;
cout<<"	2) This isn't a short form "<<endl;
cout<<"	3) None of the above "<<endl;
cout<<"	4) Dont know "<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[2];
if (a[2]==1)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q4. Most selling smartphone company is __________."<<endl<<endl;
cout<<"	1) Apple "<<endl;
cout<<"	2) Google "<<endl;
cout<<"	3) Samsung "<<endl;
cout<<"	4) Huawei "<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[3];
if (a[3]==3)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
 cout<<endl<<"Q5. Where is the technology world paradise __________."<<endl<<endl;
cout<<"	1) New york"<<endl;
cout<<"	2) Silicon valley "<<endl;
cout<<"	3) India "<<endl;
cout<<"	4) None of the above "<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[3];
if (a[3]==2)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
 cout<<endl<<"Q6.  Sundar pichyai is the CEO of which company ?"<<endl<<endl;
cout<<"	1) Apple"<<endl;
cout<<"	2) Google"<<endl;
cout<<"	3) Microsoft"<<endl;
cout<<"	4) None"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[3];
if (a[3]==2)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
 cout<<endl<<"Q7 Tesla makes which product. "<<endl<<endl;
cout<<"	1) Phone"<<endl;
cout<<"	2) Speakers"<<endl;
cout<<"	3) Electric cars"<<endl;
cout<<"	4) bio waste "<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[3];
if (a[3]==3)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
 cout<<endl<<"Q8. Nobel prize of Technology"<<endl<<endl;
cout<<"	1) Feilds medal "<<endl;
cout<<"	2) Turing award"<<endl;
cout<<"	3) tech trophie"<<endl;
cout<<"	4) all of the above"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[3];
if (a[3]==2)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
 cout<<endl<<"Q9. Most worthy company by revenue "<<endl<<endl;
cout<<"	1) Apple"<<endl;
cout<<"	2) Google"<<endl;
cout<<"	3) Samsung"<<endl;
cout<<"	4) Huawie"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[3];
if (a[3]==1)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
 cout<<endl<<"Q10. First company to launch 5G "<<endl<<endl;
cout<<"	1) Ericsson"<<endl;
cout<<"	2) Google"<<endl;
cout<<"	3) At&T"<<endl;
cout<<"	4) none"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[3];
if (a[3]==1)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
 cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"					TEST COMPLETE."<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<endl<<" RESULTS"<<endl;
cout<<"---------"<<endl<<endl;
cout<<"Total Score: "<<s<<" out of 10."<<endl;
p=s*10;
cout<<"Percentage of Merit: "<<p<<"%."<<endl<<endl;
cout<<"Remarks:"<<endl<<endl;
if (p<=50)
{
	cout<<"TROLL. Don't Consider Yourself A Technology Fan if You don't know THIS!!!";
}
else if ((p>50)&&(p<=60))
{
	cout<<"DREADFUL. You Need to Get Your BASICS Clear, My Friend!!";
}
else if ((p>60)&&(p<=70))
{
	cout<<"POOR. You Need To Work HARD, My Friend!";
}
else if ((p>70)&&(p<=80))
{
	cout<<"ACCEPTABLE. GOOD JOB! Keep Working Hard.";
}
else if ((p>80)&&(p<=90))
{
	cout<<"EXCEEDS EXPECTATIONS. Splendid Work. A LITTLE MORE and You'll go Places!!";
}
else if ((p>90)&&(p<=100))
{
	cout<<"OUTSTANDING! You Have Proved That You Are A WORTHY NERD !!!";
}

int x ;
 cout<<"                                HOPE YOU ENJOYED"<<endl;
cout<<"                               --------------------"<<endl<<endl;
cout<<"Want to play again ? " <<endl << " A) Play Technology Trivia Quiz."<<endl;
cout<<"B) Play Harry Potter quiz " << endl;
cout<<"QUIT by pressing 0 " << endl ;
cout<<endl<<endl<<"Enter What You Want to Play (A & B), press 0 to exit  : ";
cin>> x ;
x=toupper(x);
char qw;
cin.get(qw);
switch(x)
{
case('A'): cout<<" Nerds lets do it AGAIN !! " ; techquiz();
break;
case('B'): hpquiz();
case(0): cout<< "See you later , aligator ! " ;

	break;
default: cout<<"Wrong choice ";
	break;
 getch();
}
}
 void hpquiz()
 {



  //clrscr();
int a[25], s=0, p;
char x;
char name[30], bld_sts[15];
cout<<"                           THE HARRY POTTER TRIVIA"<<endl;
cout<<"                          --------------------------"<<endl<<endl;
cout<<"Enter Your NAME: ";
cin.getline(name,30);
cout<<endl<<"Read the following instructions to know your Blood Status:"<<endl<<endl;
cout<<" 1) If You have BOTH, Read the Books and Seen the Movies; You are a PURE-BLOOD."<<endl;
cout<<" 2) If You have ONLY, Read the Books; You are a HALF-BLOOD."<<endl;
cout<<" 3) If You have ONLY, Seen the Movies; You are a MUDBLOOD."<<endl;
cout<<" 4) If You have NOT, Done any of the above; You are a SQUIB."<<endl<<endl;
cout<<" Following these Instructions, Enter Your BLOOD STATUS: ";
cin.getline(bld_sts,15);
cout<<endl<<endl<<"                         ONLY THE WITTY CAN PREVAIL..."<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<endl<<"Q1. What is the Name of Uncle Vernon's Drilling Company?"<<endl<<endl;
cout<<"	1) Drillits"<<endl;
cout<<"	2) Grunnings"<<endl;
cout<<"	3) Grunners"<<endl;
cout<<"	4) Drillos"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[0];
if (a[0]==2)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q2. What does Profesor McGonagall Become in her Animagus Form?"<<endl<<endl;
cout<<"	1) A Tabby Cat"<<endl;
cout<<"	2) An Eagle Owl"<<endl;
cout<<"	3) A Grey Rabbit"<<endl;
cout<<"	4) A Snowy Cat"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[1];
if (a[1]==1)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q3. What is Albus Dumbledore's Patronus?"<<endl<<endl;
cout<<"	1) A Thestral"<<endl;
cout<<"	2) A Goat"<<endl;
cout<<"	3) An Ox"<<endl;
cout<<"	4) A Phoenix"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[2];
if (a[2]==4)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q4. Harry Potter's Patronus is a __________."<<endl<<endl;
cout<<"	1) Doe"<<endl;
cout<<"	2) Russell Terrier"<<endl;
cout<<"	3) Stag"<<endl;
cout<<"	4) Otter"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[3];
if (a[3]==3)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}

cout<<endl<<"Q5. What is the Name of Dumbledore's Sister?"<<endl<<endl;
cout<<"	1) Ariana Dumbledore"<<endl;
cout<<"	2) Lucy Dumbledore"<<endl;
cout<<"	3) Hestia Dumbledore"<<endl;
cout<<"	4) Beatrix Dumbledore"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[4];
if (a[4]==1)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q6. What is the Name of the Wizarding Prison which held GellertGrindelwald?"<<endl<<endl;
cout<<"	1) Azkaban"<<endl;
cout<<"	2) Nurmengard"<<endl;
cout<<"	3) Gringotts"<<endl;
cout<<"	4) Durmstrang"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[5];
if (a[5]==2)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q7. Which one of these is a Marauder?"<<endl<<endl;
cout<<"	1) Snivellus"<<endl;
cout<<"	2) Mollywobbles"<<endl;
cout<<"	3) Prongs"<<endl;
cout<<"	4) Willy"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[6];
if (a[6]==3)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q8. What does the Sign of the Deathly Hallows comprise of?"<<endl<<endl;
cout<<"	1) A Square, A Triangle and A Circle"<<endl;
cout<<"	2) A Pyramid with An Eye"<<endl;
cout<<"	3) A Pentagon and A Triangle"<<endl;
cout<<"	4) A Triangle, A Circle and A Line"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[7];
if (a[7]==4)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q9. What are the Names of the Deathly Hallows?"<<endl<<endl;
cout<<"	1) The Deathstick, The Pebble and The Invisible Wrapper"<<endl;
cout<<"	2) The Supreme Wand, The Resurrection Stone and The Coat of Invisibility"<<endl;
cout<<"	3) The Wand of Destiny, The River Stone and The Cloth of Invisibility"<<endl;
cout<<"	4) The Elder Wand, The Resurrection Stone and The Cloak of Invisibility"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[8];
if (a[8]==4)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q10. Where did Albus Dumbledore Die?"<<endl<<endl;
cout<<"	1) The Astronomy Tower"<<endl;
cout<<"	2) The Forbidden Forest"<<endl;
cout<<"	3) The Lost Cave"<<endl;
cout<<"	4) Hogsmeade"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[9];
if (a[9]==1)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q11. What is the Full Name of Albus Dumbledore?"<<endl<<endl;
cout<<"	1) AlbusLoxias Egbert Pevrell Dumbledore"<<endl;
cout<<"	2) Albus Percival Wulfric Brian Dumbledore"<<endl;
cout<<"	3) AlbusGinerva Hannah Jones Dumbledore"<<endl;
cout<<"	4) Albus Percival Kendra Wulfric Dumbledore"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[10];
if (a[10]==2)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q12. What is the Full Name of Ronald Weasley?"<<endl<<endl;
cout<<"	1) Ronald Arthur Weasley"<<endl;
cout<<"	2) Ronald Jean Weasley"<<endl;
cout<<"	3) Ronald BiliusWeasley"<<endl;
cout<<"	4) Ronald Molly Weasley"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[11];
if (a[11]==3)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q13. Who is the Head of Beauxbaton's Academy of Magic?"<<endl<<endl;
cout<<"	1) Igor Karkaroff"<<endl;
cout<<"	2) Barty Crouch Jr."<<endl;
cout<<"	3) Ludo Bagman"<<endl;
cout<<"	4) Madame Maxime"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[12];
if (a[12]==4)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q14. Name Ginny Weasley's Quidditch Team, after leaving Hogwarts?"<<endl<<endl;
cout<<"	1) Chudley Canons"<<endl;
cout<<"	2) Puddlemere United"<<endl;
cout<<"	3) Holyhead Harpies"<<endl;
cout<<"	4) Wimbourne Wasps"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[13];
if (a[13]==3)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q15. Name the Secret Society founded by Dumbledore, against the Dark Arts?"<<endl<<endl;
cout<<"	1) Defence Association"<<endl;
cout<<"	2) Order of the Phoenix"<<endl;
cout<<"	3) Dumbledore's Army"<<endl;
cout<<"	4) Order of Merlin"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[14];
if (a[14]==2)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q16. Which Potion, 'Induces a Powerful Obsession for something'?"<<endl<<endl;
cout<<"	1) Amortentia"<<endl;
cout<<"	2) Veritaserum"<<endl;
cout<<"	3) Draught of Living Death"<<endl;
cout<<"	4) Felix Felicis"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[15];
if (a[15]==1)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q17. Nicolas Flamel Died at the Age of?"<<endl<<endl;
cout<<"	1) 673"<<endl;
cout<<"	2) 665"<<endl;
cout<<"	3) 662"<<endl;
cout<<"	4) 671"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[16];
if (a[16]==2)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q18. Who is the Author of 'Hogwarts: A History'?"<<endl<<endl;
cout<<"	1) BathildaBagshot"<<endl;
cout<<"	2) Gilderoy Lockhart"<<endl;
cout<<"	3) Libatius Borage"<<endl;
cout<<"	4) Rita Skeeter"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[17];
if (a[17]==1)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q19. What is the Full Form of SPEW?"<<endl<<endl;
cout<<"	1) Society for Purification of Elder Wizardary"<<endl;
cout<<"	2) Society for Procastination of Elfish Warfare"<<endl;
cout<<"	3) Society for Protection of Elfish Welfare"<<endl;
cout<<"	4) Society for Protection of the Elder Wand"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[18];
if (a[18]==3)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q20. Which Dragon did Viktor Krum face in the First Task of the Triwizard       Tournament?"<<endl<<endl;
cout<<"	1) Common Welsh Green"<<endl;
cout<<"	2) Hungarian Horntail"<<endl;
cout<<"	3) Swedish Short Snout"<<endl;
cout<<"	4) Chinese Fireball"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[19];
if (a[19]==4)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q21. Which Magical Technique resists the External Penetration of the Mind through Magic?"<<endl<<endl;
cout<<"	1) Arithmancy"<<endl;
cout<<"	2) Legilimency"<<endl;
cout<<"	3) Occlumency"<<endl;
cout<<"	4) Attornomency"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[20];
if (a[20]==3)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q22. In Which Story in 'The Tales of Beedle The Bard', are the Deathly Hallows    Introduced?"<<endl<<endl;
cout<<"	1) The Tale of The Three Brothers"<<endl;
cout<<"	2) The Fountain of Fair Fortune"<<endl;
cout<<"	3) The Warlock's Hairy Heart"<<endl;
cout<<"	4) The Wizard and The Hopping Pot"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[21];
if (a[21]==1)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q23. What is the Core of the Elder Wand?"<<endl<<endl;
cout<<"	1) Two Feathers from the Tail of the Phoenix Supreme"<<endl;
cout<<"	2) Single Hair from the Tail of a Thestral"<<endl;
cout<<"	3) Twelve Hairs from the Tail of a Fully Mature Unicorn"<<endl;
cout<<"	4) Single Dragon Heartstring from the Unruly Beast of Dragons breed)"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[22];
if (a[22]==2)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q24. What is the Name of the Broom Harry Potter got on his 13th Birthday?"<<endl<<endl;
cout<<"	1) Shooting Star"<<endl;
cout<<"	2) Nimbus 2000"<<endl;
cout<<"	3) Nimbus 2001"<<endl;
cout<<"	4) Firebolt"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[23];
if (a[23]==4)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q25. What is the Name of the Child of Remus Lupin and Nymphadora Tonks?"<<endl<<endl;
cout<<"	1) Teddy Lupin"<<endl;
cout<<"	2) Andromeda Tonks"<<endl;
cout<<"	3) Hugo Tonks"<<endl;
cout<<"	4) Peter Lupin"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[24];
if (a[24]==1)
{
	cout<<endl<<"Correct."<<endl;
	s++;
}
else
{
	cout<<endl<<"Incorrect."<<endl;
}
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"					TEST COMPLETE."<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<endl<<" RESULTS"<<endl;
cout<<"---------"<<endl<<endl;
cout<<"Total Score: "<<s<<" out of 25."<<endl;
p=s*4;
cout<<"Percentage of Merit: "<<p<<"%."<<endl<<endl;
cout<<"Remarks:"<<endl<<endl;
if (p<=50)
{
	cout<<"TROLL. Don't Consider Yourself A Harry Potter Fan if You don't know THIS!!!";
}
else if ((p>50)&&(p<=60))
{
	cout<<"DREADFUL. You Need to Get Your BASICS Clear, My Friend!!";
}
else if ((p>60)&&(p<=70))
{
	cout<<"POOR. You Need To Work HARD, My Friend!";
}
else if ((p>70)&&(p<=80))
{
	cout<<"ACCEPTABLE. GOOD JOB! Keep Working Hard.";
}
else if ((p>80)&&(p<=90))
{
	cout<<"EXCEEDS EXPECTATIONS. Splendid Work. A LITTLE MORE and You'll go Places!!";
}
else if ((p>90)&&(p<=100))
{
	cout<<"OUTSTANDING! You Have Proved That You Are A WORTHY WIZARD!!!";
}
cout<<endl << endl << endl ;
 cout<<"                                HOPE YOU ENJOYED"<<endl;
cout<<"                               --------------------"<<endl<<endl;
cout<<"Want to play again ? " <<endl << " A) Play Technology Trivia Quiz."<<endl;
cout<<"B) Play Harry Potter quiz " << endl;
cout<<"QUIT by pressing 0 " << endl ;
cout<<endl<<endl<<"Enter What You Want to Play (A & B), press 0 to exit  : ";
cin>>x ;
char qw;
cin.get(qw);
switch(x)
{
case('A'): techquiz();
break;
case('B'): cout << "Welcome Again Wizards " ; hpquiz();
case(0): cout<< "See you later , alligator ! " ;
	break;
default: cout<<"Wrong choice ";
	break;
 getch();
}
}



