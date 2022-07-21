#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<fstream.h>
#include<ctype.h>
#include<constrea.h>
char newst[20];
char f,g,w;
int l,j,sc;
char wer;
int u,v;
char y;
int e;

void stat(){
	window(70,20,70,20);
	cout<<"LEVEL"<<l;
	window(3,4,5,5);
}

void create(char ch[20]){
	delay(500);
	int GD=DETECT;
	int GM=DETECT;
	initgraph(&GD,&GM,"C:\\TURBOC3\\BGI");
	setcolor(BLUE);
	setbkcolor(RED);
	settextstyle(BOLD_FONT,HORIZ_DIR,5);
	outtextxy(60,30,ch);
	delay(1000);
	closegraph();
}

class higs{
	char player[50];
	int highs;
	int scor;
	public:
	void take(){
		cout<<"enter your name\n";
		gets(player);
		scor=sc;
	}
	void board(){
		cout<<"\tPLAYER NAME:"<<player<<'\t'<<"-"<<'\t'<<scor<<'\n';
	}
	int acce(){
		return scor;
	}
	char * asse(){
		return player;
	}
}h1,h2;

void score(int sc){
	window(70,22,78,23);
	textcolor(YELLOW);
	y=178;
	cout<<y<<"SCORE:"<<sc;
	window(3,4,5,5);
}

void main(){
	textbackground(WHITE);
	clrscr();
	textbackground(WHITE);
	textcolor(BLUE);
	_setcursortype(_NOCURSOR);
	int w;
	ofstream f;
	f.open("STORY.txt",ios::out);
	f<<"Once  upon a  time , there lived two scientists namely eienstien and frenkel,in which ei was very  powerful scientist that his memory power was able to read and retain even 2 book pages in 5second due to which he had studied many theories and even able to create his own theries .He got famed to the world and was about to sign an agreement of an modern marvellous invention which offers him an amount of $500,000,000,000 from all sponsers and he was helping different orphages with the money he had and also decided give a 50% to all orphages equally  all over the world.But his old companion even a good friend ie.scientist frenkel  didn't likeit thatis he got jealous of him. Even world knows that he is next great  scientist after him,so if he is disabled he can hold over the position,and money. so,he called eien,evien came with his cousin schottky who dropped him in his house and waited,outside.while he came to door to see whatis happening for a long time,he say eien drunken and fainted and his friend told";

	f.close();
	char chara[3000];
	ifstream f1;
	f1.open("STORY.txt",ios::in);
	while(!f1.eof())
	{
	f1.getline(chara,3000);
	  constream cout;

	  cout<<setclr(100)<<chara;
	  delay(1000);
	}
	
	cout<<'\n'<<'\n';
	f1.close();
	ofstream y;
	y.open("STORY.txt",ios::out);
	y<<"that he got over drunken,and he pickked him up and got  home ,but  at the morning only he came to know that he is lost his old brain power,__________'that his brain cells deactivated'_______,his cousin understood that it is his frenkel's work only ,and his agrement was on pending .this time frenkel called for agrree,and signned to submit it within 2 months. schottky wanted to revenge him,so planned to improve his cousin's brain power and developed an application that may improve his brain power.And to restore the trueness and kill the jealousy.    PLAY AS EIENSTEIN  AND IMPROVE YOUR BRAIN POWER";

	y.close();
	char charat[3000];
	ifstream f2;
	f2.open("STORY.txt",ios::in);
	
	while(!f2.eof())
	{
	f2.getline(charat,3000);
	  constream cout;
	  cout<<setclr(113)<<charat;
	  delay(3000);
	}

	f2.close();
	cout<<setclr(112)<<"DOWNLOAD HERE (press d)";

	if(getch()=='d')
	{
		int dk,gd=DETECT,gm;
		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
		setcolor(WHITE);
		for(int v=35;v<555;v++){
			line(25+v,170,25+v,200);
		}

		for(v=35;v<555;v++){
			setcolor(GREEN);
			line(25+v,170,25+v,200);

			setcolor(WHITE);
			settextstyle(SMALL_FONT,0,16);

			outtextxy(10,220,"downloading(0.8MB/sec)");
			delay(20);
		}
		closegraph();
		e=getch();
		if(e=='f')
		   exit(0);
		else
		   delay(2);

		textbackground(WHITE);
		clrscr();
		textbackground(WHITE);
		textcolor(BLUE);
		_setcursortype(_NOCURSOR);


		g=kbhit();
		if(g==' ')
		  exit(0);
		else
		  delay(3);

		sc=0;
		j=1;
		delay(500);
		create("BRAIN BOOSTER");
		delay(1000);
		textcolor(RED);
		cout<<"              A GAME TO RESTORE LIBERTY AND INCREASE BRAIN POWER"<<'\n';
		cout<<"HELP: WAIT FOR WORD TO COME."<<'\n';
		cout<<"##### AFTER TYPING PRESS ENTER."<<'\n';
		cout<<"##### SEE THE LETTERS CAREFULLY AND IT WILL VANISH AFTER THE GIVEN TIME"<<'\n';
		cout<<"$$$$$ ARE YOU READY TO PLAY BB???"<<'\n';
		delay(1000);
		cout<<"rules"<<'\n';

		while(j!=0)
		{ 
			textbackground(WHITE);
			clrscr();
			switch(j)
			{
			case 1:    l=1;
				   strcpy(newst,"ew");
				   break;
			case 2:strcpy(newst,"alq");
				   break;
			case 3:strcpy(newst,"xqp");
				   break;
			case 4:strcpy(newst,"zpq");
				   break;
			case 5:strcpy(newst,"qgx");
				   break;
			case 6:strcpy(newst,"qms");
				   break;
			case 7:strcpy(newst,"pwr");
				   break;
			case 8:strcpy(newst,"xsw");
				   break;
			case 9:strcpy(newst,"rrt");
				   break;
			case 10:strcpy(newst,"tii");
				   break;
			case 11:strcpy(newst,"wewe");
				   break;
			case 12:strcpy(newst,"mlno");
				   break;
			case 13:strcpy(newst,"regg");
				   break;
			case 14:strcpy(newst,"erbe");
				   break;
			case 15:strcpy(newst,"bdjt");
				   break;
			case 16:strcpy(newst,"pdme");
				   break;
			case 17:delay(200);
				cout<<"LEVEL 2";
				delay(200);
				l=2;
				strcpy(newst,"123");
				   break;
			case 18:strcpy(newst,"234");
				   break;
			case 19:strcpy(newst,"345");
				   break;
			case 20:strcpy(newst,"456");
				   break;
			case 21:strcpy(newst,"6776");
				   break;
			case 22:strcpy(newst,"3454");
				   break;
			case 23:strcpy(newst,"4657");
				   break;
			case 24:strcpy(newst,"9142");
				   break;
			case 25:strcpy(newst,"3955");
				   break;
			case 26:strcpy(newst,"6765");
				   break;
			case 27:strcpy(newst,"2841");
				   break;
			case 28:strcpy(newst,"324443");
				   break;
			case 29:strcpy(newst,"43422");
				   break;
			case 30:strcpy(newst,"546575");
				   break;
			case 31:strcpy(newst,"44455");
				   break;
			case 32:strcpy(newst,"@#");
				   break;
			case 33:strcpy(newst,"!@*");
				   break;
			case 34:strcpy(newst,"*#$");
				   break;
			case 35:strcpy(newst,"@&$");
				   break;
			case 36:strcpy(newst,"$$$^");
				   break;
			case 37:strcpy(newst,"@$%^");
				   break;
			case 38:strcpy(newst,"DDR13");
				   break;
			case 39:strcpy(newst,"rt2#!");
				   break;
			case 40:strcpy(newst,"dsv");
				   break;
			case 41:strcpy(newst,"wredf");
				   break;
			case 42:strcpy(newst,"qasdfvg");
				   break;
			case 43:strcpy(newst,"sdfhgyj");
				   break;
			case 44:strcpy(newst,"edcfgth");
				   break;
			case 45:strcpy(newst,"wedscvfl");
				   break;
			case 46:strcpy(newst,"wspokjhf");
				   break;
			case 47:strcpy(newst,"wefgnmky");
				   break;
			case 48:strcpy(newst,"wsdfrffb");
				   break;
			case 49:strcpy(newst,"wdfvbnji");
				   break;
			case 50:strcpy(newst,"woefjvnc");
				   break;
			case 51:strcpy(newst,"xcnryuhr");
				   break;
			case 52:strcpy(newst,"ghuuugyt");
				   break;
			case 53:strcpy(newst,"ghgjahhk");
				   break;
			case 54:strcpy(newst,"fhkievnm");
				   break;
			case 55:strcpy(newst,"guhdnbjl");
				   break;
			case 56:strcpy(newst,"bfdyukdc");
				   break;
			case 57:strcpy(newst,"ngejtdgh");
				   break;
			case 58:strcpy(newst,"sdfhtrfa");
				   break;
			case 59:strcpy(newst,"brudfzry");
				   break;
			case 60:strcpy(newst,"grytwsdf");
				   break;
			case 61:strcpy(newst,"ghklofxv");
				   break;
			case 62:strcpy(newst,"1357dhfh");
				   break;
			case 63:strcpy(newst,"efht234");
				   break;
			case 64:delay(200);
				cout<<"LEVEL 3";
				l=3;
				strcpy(newst,"s5bd5ddf");
				   break;
			case 65:strcpy(newst,"fjfhs4u8");
				   break;
			case 66:strcpy(newst,"REgh368tr");
				   break;
			case 67:strcpy(newst,"46u88fhu4");
				   break;
			case 68:strcpy(newst,"$%fgffhtf");
				   break;
			case 69:strcpy(newst,"@$5&534h");
				   break;
			case 70:strcpy(newst,"frhdsa@f");
				   break;
			case 71:strcpy(newst,"dfead4eG");
				   break;
			case 72:strcpy(newst,"dgr65bc4");
				   break;
			case 73:strcpy(newst,"detyrwa4");
				   break;
			case 74:strcpy(newst,"ertcxe45");
				   break;
			case 75:strcpy(newst,"w57wu586");
				   break;
			case 76:strcpy(newst,"ertw4y4t");
				   break;
			case 77:strcpy(newst,"shf fhfx");
				   break;
			case 78:strcpy(newst,"r54 dr 6");
				   break;
			case 79:strcpy(newst,"gr4r*$ j");
				   break;
			case 80:strcpy(newst,"c vvbn 56");
				   break;
			case 81:strcpy(newst,"@56g bhhgy");
				   break;
			case 82:strcpy(newst,"45$vhrrhr");
				   break;
			case 83:strcpy(newst,"$57rdbg");
				   break;
			case 84:strcpy(newst,"chg45ryt");
				   break;
			case 85:strcpy(newst,"W3#455C%");
				   break;
			case 86:strcpy(newst,"dt#rr44644");
				   break;
			case 87:strcpy(newst,"jrjh %j");
				   break;
			case 88:strcpy(newst,"rjf*$6fttr ");
				   break;
			case 89:strcpy(newst,"hgf %^d");
				   break;
			case 90:strcpy(newst,"x#5@%%^fgr");
				   break;
			case 91:strcpy(newst,"%34tfwet");
				   break;
			case 92:strcpy(newst,"$652fdhg");
				   break;
			case 93:strcpy(newst," vb#%#^Ffd");
				   break;
			case 94:strcpy(newst,"$4ydsxgg");
				   break;
			case 95:strcpy(newst,"$ hfebdg");
				   break;
			case 96:strcpy(newst,"$35367x");
				   break;
			case 97:strcpy(newst,"gg#5dhted");
				   break;
			case 98:strcpy(newst,"$#5462ygccbn");
				   break;
			case 99:strcpy(newst,"$e7urye3eg");
				   break;
			case 100:strcpy(newst,"#*!@^*@)!^2612");
				   break;
		}
		create(newst);
		textbackground(WHITE);
		clrscr();
		textbackground(WHITE);
		gotoxy(1,1);
		textcolor(BLUE);
		_setcursortype(_NOCURSOR);
		clrscr();

		gotoxy(0,0);
		_setcursortype(_NOCURSOR);
		cout<<"E";
		delay(20);
		cout<<"N";
		delay(20);
		cout<<"T";
		delay(20);
		cout<<"E";
		delay(20);
		cout<<"R";
		delay(20);
		cout<<"_";
		delay(20);
		cout<<"T";
		delay(20);
		cout<<"H";
		delay(20);
		cout<<"E";
		delay(20);
		cout<<"_";
		delay(20);cout<<"T";
		delay(20);cout<<"H";
		delay(20);cout<<"I";
		delay(20);cout<<"N";
		delay(20);cout<<"G";
		delay(20);cout<<"_";
		delay(20);cout<<"W";
		delay(20);cout<<"H";
		delay(20);cout<<"I";
		delay(20);cout<<"C";
		delay(20);cout<<"H";
		delay(20);cout<<"_";
		delay(20);cout<<"Y";
		delay(20);cout<<"O";
		delay(20);cout<<"U";
		delay(20);cout<<"_";
		delay(20);cout<<"S";
		delay(20);cout<<"A";
		delay(20);cout<<"W";
		delay(20);cout<<"_";
		delay(20);cout<<"T";
		delay(20);cout<<"H";
		delay(20);cout<<"E";
		delay(20);cout<<"R";
		delay(20);cout<<"E";
		delay(20);cout<<"_";
		delay(20);cout<<"S";
		delay(20);cout<<"I";
		delay(20);cout<<"R";
		delay(20);cout<<"/";
		delay(20);cout<<"M";
		delay(20);cout<<"A";
		delay(20);cout<<"D";
		delay(20);cout<<"A";
		delay(20);cout<<"M";
		delay(20);
			
		char cha[20];
		score(sc);
		stat();
		window(10,10,10,10);
		cin.getline(cha,20);
		clrscr();
		if(strcmp(cha,newst)==0){
			clrscr(); 
			_setcursortype(_NOCURSOR);
			cout<<"correct";
			j++;
			sc=sc+100;
			score(sc);
		}
		else{
			j=0;
			clrscr();  
			_setcursortype(_NOCURSOR);
			cout<<"incorrect";
			window(11,11,11,11);
			cout<<'\n'<<'\n';
			cout<<"____________________^^^^^GAMEOVER^^^^^__________________________"<<'\n'<<'\n';delay(1000);
			cout<<"~~~~~~~~~~~~~~~~~~~~YOUR SCORE:"<<"__"<<sc<<"__"<<"~~~~~~~~~~~~~"<<'\n'<<'\n';delay(1000);

			cout<<'\t'<<"__________________________________"<<'\n';delay(1000);
			cout<<'\t'<<"|     DO YOU WANT TO CONTINUE?    |"<<'\n';delay(1000);
			cout<<'\t'<<"|        (a)yes     (b)no         |"<<'\n';delay(1000);
			cout<<'\t'<<"|_________________________________|"<<'\n';delay(20);
			cin>>wer;

			if(wer=='a')
				cout<<"PLEASE GO OUT OF THE GAME AND RUN THE GAME AGAIN";
			else{      
				_setcursortype(_NOCURSOR);
				if(wer=='b'){
					ifstream fi("games.dat",ios::in|ios::binary);
					ofstream fo("temp.dat",ios::out|ios::binary);
					w='y';
					h1.take();
					char a[]=" ";
					while(!fi.eof())
					{
					  fi.read((char*)&h2,sizeof(h2));
					  if(h1.acce()>=h2.acce())
					  {
						  fo.write((char*)&h1,sizeof(h1));
						  w='n';
						  break;
					  }
					  else
					    fo.write((char*)&h2,sizeof(h2));
					}
					if(w=='y')
						fo.write((char*)&h1,sizeof(h1));
					else
						if(!fi.eof())
						  while(!fi.eof())
						  {
						  fi.read((char*)&h2,sizeof(h2));
						  fo.write((char*)&h2,sizeof(h2));
						  }
					fi.close();
					fo.close();
					remove("games.dat");
					rename("temp.dat","games.dat");
					fi.open("games.dat",ios::in);
					cout<<"\n\nPLAYER ACHIEVEMENTS AND TOPPERS\n\n";
					char h[]="  " ;
					while(fi.read((char*)&h2,sizeof(h2))) {
					// fi.read((char*)&h2,sizeof(h2));
					 if(fi.eof())
					     break;
					 if(strcmp(h,h2.asse())!=0)
						h2.board();
					 strcpy(h,h2.asse());

				}
				fi.close();
				cout<<"________________________________________________________________________________________________________________________________________________________________";
				delay(1000);
				cout<<'\n';


				cout<<"                          *SPONSERED BY DHILPK COMPANY"<<'\n'<<'\n';delay(1000);
				cout<<"           EDITOR:R.RAJAGNANAGURU,DHILEEPKUMAR,PRARITDHAWAN                                       "<<'\n'<<'\n';delay(1000);
				cout<<"           PROGRAMMER:R.RAJAGNANAGURU                                   "<<'\n'<<'\n';delay(1000);
				cout<<"           MAIN HELPERS:M.BARANI,SHIVAMSINHA                                 "<<'\n'<<'\n';delay(1000);
				cout<<"                          *BROUGHT TO YOU BY GAMINGFUN PRODUCTS             "<<'\n'<<'\n';delay(1000);
				cout<<"         ÜÛßÛÛÛÛÜ"<<'\n';
				cout<<"         ÛÛÛÛÛÛÛÛ"<<'\n';
				cout<<"         ÛÛÛÛÛßßß"<<'\n';
				cout<<" Û      ÜÛÛÛÛßßß "<<'\n';
				cout<<" ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ "<<'\n';
				cout<<" ßÛÛÛÛÛÛÛÛÛÛÛ  ß "<<'\n';
				cout<<"   ßÛÛÛÛÛÛÛß     "<<'\n';
				cout<<"    ÛÛß ßÛ       "<<'\n';
				cout<<"    ÛÜ   ÛÜ      "<<'\n';
				cout<<"T";
				delay(800);
				cout<<"H";
				delay(800);
				cout<<"A";
				delay(800);
				cout<<"N";
				delay(800);
				cout<<"K";
				delay(800);
				cout<<"Y";
				delay(800);
				cout<<"O";
				delay(800);
				cout<<"U";
				delay(800);
				cout<<"!!!";

				delay(800);
				exit(0);
			}
		}
		}
	}
	}else
	  cout<<"ok thank you";
	getch();
}
