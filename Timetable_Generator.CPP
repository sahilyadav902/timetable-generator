// This Project was designed in Turbo C++, so it will run in that IDE only. Other compilers will give an error.
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
int p=0,c=0,m=0,b=0,e=0,g=0,y=0,z=0,w=0,o=0;
//Subject count for input table
int rp=0,rc=0,rm=0,rb=0,re=0,rg=0,ry=0,rz=0,rw=0,ro=0;
//Subject count for random generator
int dayno,periodno;
//Global variables for editperiod() function
class timetable
{
	private:
		char period[8];
	public:
		void input();
		void randomgen();
		void display();
		void dperiod(int dy,int pno);
		void edit();
}day[6];
void timetable::input()
{
	cout<<"Enter the subject codes for:\n";
	for(int i=0;i<8;i++)
	{
		reenter:
		cout<<"Period "<<i+1<<": ";
		cin>>period[i];
		period[i]=tolower(period[i]);  //Storing periods in lowercase
		if(period[i]=='p')             //Subject code counters
		p++;
		else if(period[i]=='c')
		c++;
		else if(period[i]=='m')
		m++;
		else if(period[i]=='b')
		b++;
		else if(period[i]=='e')
		e++;
		else if(period[i]=='g')
		g++;
		else if(period[i]=='y')
		y++;
		else if(period[i]=='z')
		z++;
		else if(period[i]=='w')
		w++;
		else if(period[i]=='o')
		o++;
		//Max. 2 same subjects per day constraint
		if(p>2)
		{
			cout<<"Error!\n";
			cout<<"You entered a subject more than 2 times a day!\n";
			cout<<"Re-enter the subject code for:-\n";
			--p;
			goto reenter;
		}
		if(c>2)
		{
			cout<<"Error!\n";
			cout<<"You entered a subject more than 2 times a day!\n";
			cout<<"Re-enter the subject code for:-\n";
			--c;
			goto reenter;
		}
		if(m>2)
		{
			cout<<"Error!\n";
			cout<<"You entered a subject more than 2 times a day!\n";
			cout<<"Re-enter the subject code for:-\n";
			--m;
			goto reenter;
		}
		if(b>2)
		{
			cout<<"Error!\n";
			cout<<"You entered a subject more than 2 times a day!\n";
			cout<<"Re-enter the subject code for:-\n";
			--b;
			goto reenter;
		}
		if(e>2)
		{
			cout<<"Error!\n";
			cout<<"You entered a subject more than 2 times a day!\n";
			cout<<"Re-enter the subject code for:-\n";
			--e;
			goto reenter;
		}
		if(g>2)
		{
			cout<<"Error!\n";
			cout<<"You entered a subject more than 2 times a day!\n";
			cout<<"Re-enter the subject code for:-\n";
			--g;
			goto reenter;
		}
		if(y>2)
		{
			cout<<"Error!\n";
			cout<<"You entered a subject more than 2 times a day!\n";
			cout<<"Re-enter the subject code for:-\n";
			--y;
			goto reenter;
		}
		if(z>2)
		{
			cout<<"Error!\n";
			cout<<"You entered a subject more than 2 times a day!\n";
			cout<<"Re-enter the subject code for:-\n";
			--z;
			goto reenter;
		}
		if(w>2)
		{
			cout<<"Error!\n";
			cout<<"You entered a subject more than 2 times a day!\n";
			cout<<"Re-enter the subject code for:-\n";
			--w;
			goto reenter;
		}
		if(o>2)
		{
			cout<<"Error!\n";
			cout<<"You entered a subject more than 2 times a day!\n";
			cout<<"Re-enter the subject code for:-\n";
			--o;
			goto reenter;
		}
		//Wrong input checker
		switch(period[i])
		{
			case 'p':	break;

			case 'c':	break;

			case 'm':	break;

			case 'b':	break;

			case 'e':	break;

			case 'g':	break;

			case 'y':	break;

			case 'z':	break;

			case 'w':	break;

			case 'o':	break;

			default: 	cout<<"Wrong subject code!\n";
					cout<<"Re-enter the subject code for:-\n";
					goto reenter;
		}
	}
	p=0;
	c=0;
	m=0;
	b=0;
	e=0;
	g=0;
	y=0;
	z=0;
	w=0;
	o=0;
}
void timetable::randomgen()
{
	int r;
	for(int i=0;i<8;i++)
	{
		regenerate:
		r=random(10);
		if(r==0)
		{
			period[i]='p';
			rp++;
		}
		else if(r==1)
		{
			period[i]='c';
			rc++;
		}
		else if(r==2)
		{
			period[i]='m';
			rm++;
		}
		else if(r==3)
		{
			period[i]='b';
			rb++;
		}
		else if(r==4)
		{
			period[i]='e';
			re++;
		}
		else if(r==5)
		{
			period[i]='g';
			rg++;
		}
		else if(r==6)
		{
			period[i]='y';
			ry++;
		}
		else if(r==7)
		{
			period[i]='z';
			rz++;
		}
		else if(r==8)
		{
			period[i]='w';
			rw++;
		}
		else if(r==9)
		{
			period[i]='o';
			ro++;
		}
		//Max. 2 same subjects per day constraint
		if(rp>2)
		{
			--rp;
			goto regenerate;
		}
		if(rc>2)
		{
			--rc;
			goto regenerate;
		}
		if(rm>2)
		{
			--rm;
			goto regenerate;
		}
		if(rb>2)
		{
			--rb;
			goto regenerate;
		}
		if(re>2)
		{
			--re;
			goto regenerate;
		}
		if(rg>2)
		{
			--rg;
			goto regenerate;
		}
		if(ry>2)
		{
			--ry;
			goto regenerate;
		}
		if(rz>2)
		{
			--rz;
			goto regenerate;
		}
		if(rw>2)
		{
			--rw;
			goto regenerate;
		}
		if(ro>2)
		{
			--ro;
			goto regenerate;
		}
	}
	rp=0;
	rc=0;
	rm=0;
	rb=0;
	re=0;
	rg=0;
	ry=0;
	rz=0;
	rw=0;
	ro=0;
}
void timetable::display()
{
	for(int i=0;i<8;i++)
	{
		cout<<"\nPeriod "<<i+1<<": "<<(char)(toupper(period[i]));
		//For displaying subjects
		switch(period[i])
		{
			case 'p':	cout<<" (Physics)";
					break;

			case 'c':	cout<<" (Chemistry)";
					break;

			case 'm':	cout<<" (Maths/Library)";
					break;

			case 'b':	cout<<" (Biology/Library)";
					break;

			case 'e':	cout<<" (English)";
					break;

			case 'g':	cout<<" (Games)";
					break;

			case 'y':	cout<<" (Physics Practical)";
					break;

			case 'z':	cout<<" (Chemistry Practical)";
					break;

			case 'w':	cout<<" (Work Experience)";
					break;

			case 'o':	cout<<" (Optional Subjects)";
					break;
	}
	}
	cout<<"\n\nPress any key to view further...";
	getch();
	clrscr();
}
void timetable::dperiod(int dy,int pno)
{
	cout<<"\nDay: ";
	//For displaying day
	switch(dy)
	{
		case 0: cout<<"Monday";
			break;

		case 1: cout<<"Tuesday";
			break;

		case 2: cout<<"Wednesday";
			break;

		case 3: cout<<"Thursday";
			break;

		case 4: cout<<"Friday";
			break;

		case 5: cout<<"Saturday";
			break;
	}
	cout<<"\n\nPeriod "<<pno+1<<": "<<(char)(toupper(period[pno]));
	//For displaying subjects
	switch(period[pno])
	{
		case 'p':	cout<<" (Physics)\n\n";
				break;

		case 'c':	cout<<" (Chemistry)\n\n";
				break;

		case 'm':	cout<<" (Maths/Library)\n\n";
				break;

		case 'b':	cout<<" (Biology/Library)\n\n";
				break;

		case 'e':	cout<<" (English)\n\n";
				break;

		case 'g':	cout<<" (Games)\n\n";
				break;

		case 'y':	cout<<" (Physics Practical)\n\n";
				break;

		case 'z':	cout<<" (Chemistry Practical)\n\n";
				break;

		case 'w':	cout<<" (Work Experience)\n\n";
				break;

		case 'o':	cout<<" (Optional Subjects)\n\n";
				break;
	}
}
void timetable::edit()
{
	//Previous stored subjects counter
	for(int i=0;i<8;i++)
	{
		if(period[i]=='p')
		p++;
		else if(period[i]=='c')
		c++;
		else if(period[i]=='m')
		m++;
		else if(period[i]=='b')
		b++;
		else if(period[i]=='e')
		e++;
		else if(period[i]=='g')
		g++;
		else if(period[i]=='y')
		y++;
		else if(period[i]=='z')
		z++;
		else if(period[i]=='w')
		w++;
		else if(period[i]=='o')
		o++;
	}
	cout<<"Enter a new subject code: ";
	resub:
	cin>>period[periodno];
	period[periodno]=tolower(period[periodno]);
	if(period[periodno]=='p')
	p++;
	else if(period[periodno]=='c')
	c++;
	else if(period[periodno]=='m')
	m++;
	else if(period[periodno]=='b')
	b++;
	else if(period[periodno]=='e')
	e++;
	else if(period[periodno]=='g')
	g++;
	else if(period[periodno]=='y')
	y++;
	else if(period[periodno]=='z')
	z++;
	else if(period[periodno]=='w')
	w++;
	else if(period[periodno]=='o')
	o++;
	//Max. 2 same subjects per day constraint
	if(p>2)
	{
		cout<<"Error!\n";
		cout<<"Subject has already been entered 2 times for the day!\n";
		cout<<"Re-enter the new subject code: ";
		--p;
		goto resub;
	}
	if(c>2)
	{
		cout<<"Error!\n";
		cout<<"Subject has already been entered 2 times for the day!\n";
		cout<<"Re-enter the new subject code: ";
		--c;
		goto resub;
	}
	if(m>2)
	{
		cout<<"Error!\n";
		cout<<"Subject has already been entered 2 times for the day!\n";
		cout<<"Re-enter the new subject code: ";
		--m;
		goto resub;
	}
	if(b>2)
	{
		cout<<"Error!\n";
		cout<<"Subject has already been entered 2 times for the day!\n";
		cout<<"Re-enter the new subject code: ";
		--b;
		goto resub;
	}
	if(e>2)
	{
		cout<<"Error!\n";
		cout<<"Subject has already been entered 2 times for the day!\n";
		cout<<"Re-enter the new subject code: ";
		--e;
		goto resub;
	}
	if(g>2)
	{
		cout<<"Error!\n";
		cout<<"Subject has already been entered 2 times for the day!\n";
		cout<<"Re-enter the new subject code: ";
		--g;
		goto resub;
	}
	if(y>2)
	{
		cout<<"Error!\n";
		cout<<"Subject has already been entered 2 times for the day!\n";
		cout<<"Re-enter the new subject code: ";
		--y;
		goto resub;
	}
	if(z>2)
	{
		cout<<"Error!\n";
		cout<<"Subject has already been entered 2 times for the day!\n";
		cout<<"Re-enter the new subject code: ";
		--z;
		goto resub;
	}
	if(w>2)
	{
		cout<<"Error!\n";
		cout<<"Subject has already been entered 2 times for the day!\n";
		cout<<"Re-enter the new subject code: ";
		--w;
		goto resub;
	}
	if(o>2)
	{
		cout<<"Error!\n";
		cout<<"Subject has already been entered 2 times for the day!\n";
		cout<<"Re-enter the new subject code: ";
		--o;
		goto resub;
	}
	//Wrong input checker
	switch(period[periodno])
	{
		case 'p':	break;

		case 'c':	break;

		case 'm':	break;

		case 'b':	break;

		case 'e':	break;

		case 'g':	break;

		case 'y':	break;

		case 'z':	break;

		case 'w':	break;

		case 'o':	break;

		default: 	cout<<"Wrong subject code!\n";
				cout<<"Re-enter the subject code: ";
				goto resub;
	}
	cout<<"\n";
	p=0;
	c=0;
	m=0;
	b=0;
	e=0;
	g=0;
	y=0;
	z=0;
	w=0;
	o=0;
}
void viewtable();        //View Entire table
void viewperiod();       //View a specific period
void viewrules();        //View Rules
void viewsubjects();     //View Subject Codes
void viewteachers();     //View Subject teachers
void newtable();         //Enter a new timetable
void autogenerate();     //Random Timetable Generator
void editperiod();       //Edit a specific period
int main()
{
	clrscr();
	ofstream file,tfile;
	file.open("timetable.dat",ios::noreplace|ios::binary);
	int ch1,ch2,i;
	char ch='y';
	//If file doesn't exist, a new timetable is generated first
	if(file!=0)
	{
		cout<<"\t\t\tTIMETABLE GENERATOR FOR SCIENCE\n\n";
		cout<<"Welcome to the Timetable Generator for Class XII SCIENCE\n";
		cout<<"\nAs this is your first run of the generator, let's set you up\n";
		cout<<"\nChoose from the options below:-\n";
		cout<<"\n1. Enter a new timetable manually\n";
		cout<<"\n2. Generate a new random timetable\n";
		cout<<"\nEnter your choice: ";
		rech1:
		cin>>ch1;
		switch(ch1)
		{
			case 1:
			clrscr();
			viewrules();
			newtable();
			for(i=0;i<6;i++)
			{
				file.write((char*)&day[i],sizeof(day[i]));
			}
			break;

			case 2:
			autogenerate();
			for(i=0;i<6;i++)
			{
				file.write((char*)&day[i],sizeof(day[i]));
			}
			break;

			default:
			cout<<"You entered the wrong choice!\n";
			cout<<"Enter your choice again: ";
			goto rech1;
		}
		cout<<"You are now setup to use the program.\n";
		cout<<"\nPress any key to continue...";
		getch();
	}
	file.close();
	//Reading from file after timetable is generated or if it already exists
	ifstream fio;
	fio.open("timetable.dat",ios::in);
	fio.seekg(0);
	for(i=0;i<6;i++)
	{
		fio.read((char*)&day[i],sizeof(day[i]));
	}
	fio.close();
	//Menu Driven Program
	do{
	file.open("timetable.dat",ios::noreplace|ios::binary);
	tfile.open("temp.dat",ios::binary);
	clrscr();
	cout<<"\t\t\tTIMETABLE GENERATOR FOR SCIENCE\n\n";
	cout<<"Welcome to the Timetable Generator for Class XII SCIENCE\n";
	cout<<"\nChoose from the options below:-\n\n";
	cout<<"1.  View the timetable\n";
	cout<<"2.  View a specific period\n";
	cout<<"3.  View timetable creation rules\n";
	cout<<"4.  View subject codes\n";
	cout<<"5.  View teachers\n";
	cout<<"6.  Enter a new timetable\n";
	cout<<"7.  Generate a new random timetable\n";
	cout<<"8.  Edit a specific period\n";
	cout<<"9.  Delete the entire timetable\n";
	cout<<"10. Exit the program\n";
	cout<<"\nEnter your choice: ";
	rech2:
	cin>>ch2;
	switch(ch2)
	{
		case 1:
		viewtable();
		break;

		case 2:
		viewperiod();
		break;

		case 3:
		clrscr();
		viewrules();
		break;

		case 4:
		clrscr();
		viewsubjects();
		break;

		case 5:
		clrscr();
		viewteachers();
		break;

		case 6:
		clrscr();
		viewrules();
		newtable();
		for(i=0;i<6;i++)
		{
			tfile.write((char*)&day[i],sizeof(day[i]));
		}
		file.close();
		tfile.close();
		remove("timetable.dat");
		rename("temp.dat","timetable.dat");
		break;

		case 7:
		autogenerate();
		for(i=0;i<6;i++)
		{
			tfile.write((char*)&day[i],sizeof(day[i]));
		}
		file.close();
		tfile.close();
		remove("timetable.dat");
		rename("temp.dat","timetable.dat");
		break;

		case 8:
		editperiod();
		for(i=0;i<6;i++)
		{
			tfile.write((char*)&day[i],sizeof(day[i]));
		}
		file.close();
		tfile.close();
		remove("timetable.dat");
		rename("temp.dat","timetable.dat");
		break;

		case 9:
		remove("timetable.dat");
		cout<<"\nFile deleted!\n\n";
		cout<<"Press any key to continue...";
		getch();
		file.close();
		tfile.close();
		return 0;

		case 10:
		file.close();
		tfile.close();
		exit(0);
		break;

		default:
		cout<<"You entered the wrong choice!\n\n";
		cout<<"Enter your choice again: ";
		goto rech2;
	}
	file.close();
	tfile.close();
	cout<<"Enter menu again(y/n): ";
	cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}
void viewrules()	//Timetable Rules
{
	cout<<"Rules for creating timetable:-\n\n";
	cout<<"1. There will be 8 periods per day and 6 days per week.\n\n";
	cout<<"2. The timings of the periods have been divided as follows:\n\n";
	cout<<"		07:30 am - 08:00 am	ASSEMBLY\n";
	cout<<"		08:00 am - 08:40 am	1st Period\n";
	cout<<"		08:40 am - 09:20 am	2nd Period\n";
	cout<<"		09:20 am - 10:00 am	3rd Period\n";
	cout<<"		10:00 am - 10:40 am	4th Period\n";
	cout<<"		10:40 am - 11:00 am	BREAK\n";
	cout<<"		11:00 am - 11:40 am	5th Period\n";
	cout<<"		11:40 am - 12:20 pm	6th Period\n";
	cout<<"		12:20 pm - 01:00 pm	7th Period\n";
	cout<<"		01:00 pm - 01:40 pm	8th Period\n\n";
	cout<<"3. You can't have more than two periods of the same subject on the same day.\n";
	cout<<"\nPress any key to view further...";
	getch();
	clrscr();
	cout<<"4. Use the following subject codes for entering your subjects:\n";
	viewsubjects();
}
void viewsubjects()	//Subject Codes
{
	cout<<"\nHere is the list of all the subject codes:-\n\n";
	cout<<"->Physics						P\n";
	cout<<"->Chemistry						C\n";
	cout<<"->Maths/Library						M\n";
	cout<<"->Biology/Library					B\n";
	cout<<"->English						E\n";
	cout<<"->Games							G\n";
	cout<<"->Physics Practical					Y\n";
	cout<<"->Chemistry Practical					Z\n";
	cout<<"->Work Experience					W\n";
	cout<<"->Optional Subjects (C.S., B.T., E.D., Economics)	O\n\n";
}
void viewteachers()	//Subject Teachers
{
	cout<<"\nHere is the list of teachers for all the subjects:-\n\n";
	cout<<"->Physics				Ms. Priya\n";
	cout<<"->Chemistry				Ms. Shubhra\n";
	cout<<"->Maths					Ms. Sita\n";
	cout<<"->Biology				Ms. Shakun\n";
	cout<<"->English				Ms. Rashmi\n";
	cout<<"->Games					Mr. Vashisht\n";
	cout<<"->Physics Practical			Ms. Priya\n";
	cout<<"->Chemistry Practical			Ms. Shubhra\n";
	cout<<"->Work Experience			Ms. Neha\n";
	cout<<"->C.S.					Ms. Neha\n";
	cout<<"->B.T.					Ms. Shakun\n";
	cout<<"->E.D.					Mr. Vinod\n";
	cout<<"->Economics				Ms. Nishu\n\n";
}
void newtable()         //Enter New Timetable
{
	cout<<"Enter a new timetable:-\n";
	for(int i=0;i<6;i++)
	{
		cout<<"\nDay "<<i+1<<":-\n";
		day[i].input();
		clrscr();
		viewsubjects();
	}
	clrscr();
}
void autogenerate()	//Random Timetable Generator
{
	clrscr();
	randomize();
	cout<<"Generating a new random timetable:-\n";
	for(int i=0;i<6;i++)
	{
		day[i].randomgen();
	}
	cout<<"\nRandom timetable generated!\n\n";
}
void viewtable()	//Timetable Viewer
{
	clrscr();
	for(int i=0;i<6;i++)
	{
		viewsubjects();
		cout<<"\nDay: ";
		switch(i)
		{
			case 0: cout<<"Monday";
				break;

			case 1: cout<<"Tuesday";
				break;

			case 2: cout<<"Wednesday";
				break;

			case 3: cout<<"Thursday";
				break;

			case 4: cout<<"Friday";
				break;

			case 5: cout<<"Saturday";
				break;
		}
		day[i].display();
	}
}
void viewperiod()	//Specific Period Viewer
{
	clrscr();
	int dy,pno;
	cout<<"Select a day:-\n\n";
	cout<<"1. Monday\n";
	cout<<"2. Tuesday\n";
	cout<<"3. Wednesday\n";
	cout<<"4. Thursday\n";
	cout<<"5. Friday\n";
	cout<<"6. Saturday\n";
	cout<<"\nEnter your choice: ";
	reday:
	cin>>dy;
	if(dy<1||dy>6)
	{
		cout<<"Wrong choice!";
		cout<<"\nEnter your choice again: ";
		goto reday;
	}
	--dy;
	dayno=dy;
	cout<<"\nEnter Period number (1-8): ";
	reperiod:
	cin>>pno;
	if(pno<1||pno>8)
	{
		cout<<"Wrong choice!";
		cout<<"\nEnter Period number again: ";
		goto reperiod;
	}
	--pno;
	periodno=pno;
	day[dy].dperiod(dy,pno);
}
void editperiod()	//Specific Period Editor
{
	viewperiod();
	day[dayno].edit();
}