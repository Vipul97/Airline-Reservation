#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
class password
{
	char pass[20];
   public:
      char* retpass(){ return pass; }
};
struct date
{
	int dd, mm, yy;
};
void inputdate(date &dt)
{
	int valid = 0, maxdays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	do
	{
		cout << "Enter Date [1-31]: "; cin >> dt.dd;
		cout << "Enter Month [1-12]: "; cin >> dt.mm;
		cout << "Enter Year [YYYY]: "; cin >> dt.yy;
		if (dt.yy % 100 != 0 && dt.yy % 4 == 0 || dt.yy % 400 == 0)
			maxdays[1] = 29;
		if (dt.mm >= 1 && dt.mm <= 12 && dt.dd >= 1 && dt.dd <= maxdays[dt.mm - 1])
			valid = 1;
		if (valid == 0)
			cout << "Invalid Date. Try Again.\n";
	} while (valid == 0);
}
struct clock
{
	int min, hr;
	void inputtime()
	{
		int valid = 0;
		do
		{
			cout << "Enter Hour [0-23]: "; cin >> hr;
			cout << "Enter Minute [0-59]: "; cin >> min;
			if (hr >= 0 && hr < 24 && min >= 0 && min < 60)
				valid = 1;
			if (valid == 0)
				cout << "Invalid Time. Try Again.\n";
		} while (valid == 0);
	}
};
void splash()
{
	clrscr();
	for (int x = 0; x < 80; x++)
		cout << "-";
	gotoxy(25, 2);
	cout << "Air-Goes International Airlines\n";
	for (int x = 0; x < 80; x++)
		cout << "-";
}
void placechoose(char splace[10], char dplace[10])
{
	int k, m, n;
	do
	{
		k = 0;
		cout << "Enter Starting Place:\n";
		cout << "1. Kuwait\n";
		cout << "2. Dubai\n";
		cout << "3. London\n";
		cout << "4. Delhi\n";
		cout << "5. Mumbai\n";
		cout << "6. Bangkok\n";
		cout << "Input: "; cin >> n;
		switch (n)
      {
         case 1: strcpy(splace, "KUWAIT"); break;
         case 2: strcpy(splace, "DUBAI"); break;
         case 3: strcpy(splace, "LONDON"); break;
         case 4: strcpy(splace, "DELHI"); break;
         case 5: strcpy(splace, "MUMBAI"); break;
         case 6: strcpy(splace, "BANGKOK"); break;
         default: cout << "Invalid Option. Try Again.\n"; k++; getch();
		}
	} while (k);
	if (n == 1)
		do
		{
			k = 0;
			cout << "Choose Destination:\n";
			cout << "1. Dubai\n";
			cout << "2. London\n";
			cout << "3. Delhi\n";
			cout << "4. Mumbai\n";
			cout << "5. Bangkok\n";
			cout << "Input: "; cin >> m;
			switch (m)
			{
            case 1: strcpy(dplace, "DUBAI"); break;
            case 2: strcpy(dplace, "LONDON"); break;
            case 3: strcpy(dplace, "DELHI"); break;
            case 4: strcpy(dplace, "MUMBAI"); break;
            case 5: strcpy(dplace, "BANGKOK"); break;
            default: cout << "Invalid Option. Try Again.\n"; k++; getch();
			}
		} while (k);
	else
   if (n == 2)
      do
      {
         k = 0;
         cout << "Choose Destination:\n";
         cout << "1. Kuwait\n";
         cout << "2. London\n";
         cout << "3. Delhi\n";
         cout << "4. Mumbai\n";
         cout << "5. Bangkok\n";
         cout << "Input: "; cin >> m;
         switch (m)
         {
            case 1: strcpy(dplace, "KUWAIT"); break;
            case 2: strcpy(dplace, "LONDON"); break;
            case 3: strcpy(dplace, "DELHI"); break;
            case 4: strcpy(dplace, "MUMBAI"); break;
            case 5: strcpy(dplace, "BANGKOK"); break;
            default: cout << "Invalid Option. Try Again.\n"; k++; getch();
         }
      } while (k);
   else
   if (n == 3)
      do
      {
         k = 0;
         cout << "Choose Destination:\n";
         cout << "1. Kuwait\n";
         cout << "2. Dubai\n";
         cout << "3. Delhi\n";
         cout << "4. Mumbai\n";
         cout << "5. Bangkok\n";
         cout << "Input: "; cin >> m;
         switch (m)
         {
            case 1: strcpy(dplace, "KUWAIT"); break;
            case 2: strcpy(dplace, "DUBAI"); break;
            case 3: strcpy(dplace, "DELHI"); break;
            case 4: strcpy(dplace, "MUMBAI"); break;
            case 5: strcpy(dplace, "BANGKOK"); break;
            default: cout << "Invalid Option. Try Again.\n"; k++; getch();
         }
      } while (k);
   else
   if (n == 4)
      do
      {
         k = 0;
         cout << "Choose Destination:\n";
         cout << "1. Kuwait\n";
         cout << "2. Dubai\n";
         cout << "3. London\n";
         cout << "4. Mumbai\n";
         cout << "5. Bangkok\n";
         cout << "Input: "; cin >> m;
         switch (m)
         {
            case 1: strcpy(dplace, "KUWAIT"); break;
            case 2: strcpy(dplace, "DUBAI"); break;
            case 3: strcpy(dplace, "LONDON"); break;
            case 4: strcpy(dplace, "MUMBAI"); break;
            case 5: strcpy(dplace, "BANGKOK"); break;
            default: cout << "Invalid Option. Try Again.\n"; k++; getch();
         }
      } while (k);
   else
   if (n == 5)
      do
      {
         k = 0;
         cout << "Choose Destination:\n";
         cout << "1. Kuwait\n";
         cout << "2. Dubai\n";
         cout << "3. London\n";
         cout << "4. Delhi\n";
         cout << "5. Bangkok\n";
         cout << "Input: "; cin >> m;
         switch (m)
         {
            case 1: strcpy(dplace, "KUWAIT"); break;
            case 2: strcpy(dplace, "DUBAI"); break;
            case 3: strcpy(dplace, "LONDON"); break;
            case 4: strcpy(dplace, "DELHI"); break;
            case 5: strcpy(dplace, "BANGKOK"); break;
            default: cout << "Invalid Option. Try Again.\n"; k++; getch();
         }
      } while (k);
   else
   if (n == 6)
      do
      {
         k = 0;
         cout << "Choose Destination:\n";
         cout << "1. Kuwait\n";
         cout << "2. Dubai\n";
         cout << "3. London\n";
         cout << "4. Delhi\n";
         cout << "5. Mumbai\n";
         cout << "Input: "; cin >> m;
         switch (m)
         {
            case 1: strcpy(dplace, "KUWAIT"); break;
            case 2: strcpy(dplace, "DUBAI"); break;
            case 3: strcpy(dplace, "LONDON"); break;
            case 4: strcpy(dplace, "DELHI"); break;
            case 5: strcpy(dplace, "MUMBAI"); break;
            default: cout << "Invalid Option. Try Again.\n"; k++; getch();
         }
      } while (k);
}
class aircraft
{
	char splace[10], dplace[10];
	int cap, ac_no, fl_no, texpense;
	clock atime, dtime;
   public:
      aircraft()
      {
         strcpy(splace, " ");
         strcpy(dplace, " ");
         cap = ac_no = fl_no = texpense = 0;
      }
      void newaircraft()
      {
         cout << "Enter Capacity: "; cin >> cap;
         placechoose(splace, dplace);
         cout << "Enter Departure Time:\n"; dtime.inputtime();
         cout << "Enter Arrival Time:\n"; atime.inputtime();
         cout << "Enter Travel Expenses: "; cin >> texpense;
         cout << "Aircraft Created! Press any key to Continue.\n";
         getch();
      }
      void display()
      {
         printf("HA%3i   AB%1i     %4i        %-10s   %-10s %02i:%02i   %02i:%02i      %6i\n", fl_no, ac_no, cap, splace, dplace, dtime.hr, dtime.min, atime.hr, atime.min, texpense);
      }
      void modify()
      {
         int n;
         do
         {
            splash();
            printf("Modifying Aircraft AB%1i               Current Values:\n", ac_no);
            printf("1. Capacity %33i\n", cap);
            printf("2. Places                      From: %6s      To: %6s\n", splace, dplace);
            printf("3. Departure Time %25i:%2i\n", dtime.hr, dtime.min);
            printf("4. Arrival Time %27i:%2i\n", atime.hr, atime.min);
            printf("5. Travel Expenses %28i\n", texpense);
            cout << "0. Exit to Aircraft Menu\n";
            cout << "Input: "; cin >> n;
            switch (n)
            {
               case 1: updcap(); break;
               case 2: updplace(); break;
               case 3: upddtime(); break;
               case 4: updatime(); break;
               case 5: updtexpense(); break;
               case 0: splash(); break;
            }
         } while (n != 0);
      }
      void updcap()
      {
         cout << "Enter New Capacity: "; cin >> cap;
         cout << "Capacity Updated! Press any key to Continue.\n";
         getch();
      }
      void updplace()
      {
         placechoose(splace, dplace);
         cout << "Places Updated! Press any key to Continue.\n";
         getch();
      }
      void upddtime()
      {
         cout << "Enter New Departure Time:\n";
         dtime.inputtime();
         cout << "Departure Time Updated! Press any key to Continue.\n";
         getch();
      }
      void updatime()
      {
         cout << "Enter New Arrival Time:\n";
         atime.inputtime();
         cout << "Arrival Time Updated! Press any key to Continue.\n";
         getch();
      }
      void updtexpense()
      {
         cout << "Enter New Travel Expenses: "; cin >> texpense;
         cout << "Travel Expenses Updated! Press any key to Continue.\n";
         getch();
      }
      int retcap(){ return cap; }
      int retflno(){ return fl_no; }
      int retacno(){ return ac_no; }
      int rettexpense(){ return texpense; }
      int rethr(){ return dtime.hr; }
      int retmin(){ return dtime.min; }
      int retahr(){ return atime.hr; }
      int retamin(){ return atime.min; }
      void newflno(int flno){ fl_no = flno; }
      void newacno(int acno){ ac_no = acno; }
      char* retsplace(){ return splace; }
      char* retdplace(){ return dplace; }
};
void addaircraft()
{
	splash();
	fstream air1("AIRCRAFTS.DAT", ios::binary | ios::app | ios::in);
	aircraft a;
	air1.seekg(0, ios::end);
	int n = air1.tellg() / sizeof(a);
	air1.seekg(sizeof(a)*(n - 1), ios::beg);
	air1.read((char*)&a, sizeof(a));
	n = a.retacno();
	a.newflno(101 + n);
	a.newacno(1 + n);
	air1.close();
	fstream air2("AIRCRAFTS.DAT", ios::binary | ios::app | ios::in);
	cout << "New Aircraft Number: AB" << a.retacno() << "\t\tNew Flight Number: HA" << a.retflno() << endl;
	a.newaircraft();
	air2.write((char*)&a, sizeof(a));
	air2.close();
}
void displayaircrafts()
{
	int c = 0;
	fstream f("AIRCRAFTS.DAT", ios::binary | ios::in);
	aircraft a;
	splash();
	printf("Fl_No Aircraft Capacity     Splace       Dplace     Dtime   Atime     Texpense\n");
	while (f.read((char*)&a, sizeof(a)))
	{
		a.display();
		c++;
	}
	if (c == 0)
	{
		splash();
		cout << "No Aircrafts Found.\n";
	}
	cout << "Press any key to Continue.\n";
	getch();
	f.close();
}
void modifyaircraft()
{
	int ac_no, k = 0;
	fstream f("AIRCRAFTS.DAT", ios::binary | ios::in | ios::out);
	aircraft a;
	cout << "Enter Aircraft No. to modify: AB"; cin >> ac_no;
	while (f.read((char*)&a, sizeof(a)))
		if (ac_no == a.retacno())
		{
			a.modify();
			f.seekg(f.tellg() - sizeof(a));
			f.write((char*)&a, sizeof(a));
			k = 1;
		}
	if (k == 0)
	{
		cout << "No Such Aircraft Found. Press any key to Continue.\n";
		getch();
	}
	f.close();
}
void deleteaircraft()
{
	splash();
	fstream fin("AIRCRAFTS.DAT", ios::binary | ios::in);
	fstream fout("TEMP.DAT", ios::binary | ios::out);
	aircraft a;
	int acno, found = 0;
	cout << "Enter Aircraft Number to Delete: AB"; cin >> acno;
	while (fin.read((char*)&a, sizeof(a)))
		if (acno == a.retacno())
		{
			cout << "Fl_No Aircraft Capacity     Splace      Dplace      Dtime    Atime     Texpense\n";
			a.display();
			cout << "The aircraft AB" << acno << " has been deleted. \n";
			found = 1;
		}
		else
			fout.write((char*)&a, sizeof(a));
	if (found != 1)
		cout << "The aircraft AB" << acno << " was not found.\n";
	getch();
	fin.close();
	fout.close();
	remove("AIRCRAFTS.DAT");
	rename("TEMP.DAT", "AIRCRAFTS.DAT");
}
void aircraftmenu()
{
	int n;
	do
	{
		splash();
		cout << "1. New Aircraft\n";
		cout << "2. View Aircrafts\n";
		cout << "3. Modify Aircrafts\n";
		cout << "4. Delete Aircraft\n";
		cout << "0. Exit to Main Menu\n";
		cout << "Input: "; cin >> n;
		switch (n)
		{
         case 1: addaircraft(); break;
         case 2: displayaircrafts(); break;
         case 3: modifyaircraft(); break;
         case 4: deleteaircraft(); break;
         case 0: splash(); break;
         default: cout << "Invalid Option. Try Again.\n"; getch();
		}
	} while (n != 0);
}
class flight
{
	int fl_no, occ, cap;
   public:
      flight() { occ = 0; }
      int retocc(){ return occ; }
      void addocc(){ occ++; }
      void delocc(){ occ--; }
      int retflno(){ return fl_no; }
      void newflno(int flno){ fl_no = flno; }
      void display()
      {
         printf("HA%3i %2i  %2i\n", fl_no, cap, occ);
      }
      void resetocc(){ occ = 0; }
      void newcap(int cp){ cap = cp; }
};
class passenger
{
   int fl_no, ac_no, PNR, s, age, t_expense;
   char splace[10], dplace[10], name[20], email[50], stat, sex;
   unsigned long int phno;
   date dt;
   clock atime, dtime;
   public:
      passenger()
      {
         stat = 'W';
         s = 0;
      }
      void reserve()
      {
         int n, k = 0, m = 0, o = 0;
         fstream air1("AIRCRAFTS.DAT", ios::binary | ios::in);
         aircraft a;
         do
         {
            k = 0;
            cout << "Enter Starting Place:\n";
            cout << "1. Kuwait\n";
            cout << "2. Dubai\n";
            cout << "3. London\n";
            cout << "4. Delhi\n";
            cout << "5. Mumbai\n";
            cout << "6. Bangkok\n";
            cout << "Input: "; cin >> n;
            switch (n)
            {
               case 1: strcpy(splace, "KUWAIT"); break;
               case 2: strcpy(splace, "DUBAI"); break;
               case 3: strcpy(splace, "LONDON"); break;
               case 4: strcpy(splace, "DELHI"); break;
               case 5: strcpy(splace, "MUMBAI"); break;
               case 6: strcpy(splace, "BANGKOK"); break;
               default: cout << "Invalid Option. Try Again.\n"; k++; getch();
            }
         } while (k);
         splash();
         while (air1.read((char*)&a, sizeof(a)))
            if (strcmpi(retsplace(), a.retsplace()) == 0)
            {
               o++;
               if (o == 1)
                  cout << "# Fl_No Aircraft Capacity     Splace       Dplace     Dtime   Atime    Texpense\n";
               cout << o << "."; a.display();
            }
         if (o == 0)
         {
            cout << "There are no flights available from this place. Press any key to Continue.\n";
            air1.close();
            getch();
         }
         else
         {
            cout << "These are the flights available from your starting place.\n";
            do
            {
               cout << "Choose one of given flights [1 - " << o << "]: "; cin >> n;
               if (n > o || n<1)
                  cout << "Invalid Option. Try Again.\n";
            } while (n>o || n < 1);
            splash();
            cout << "Date of Travel:\n";
            inputdate(dt);
            cout << "Enter Passenger Details:\n";
            cout << "Passenger Name: "; gets(name); strupr(name);
            do
            {
               cout << "Age: "; cin >> age;
               if (age < 0)
                  cout << "Invalid Age. Try Again.\n";
            } while (age < 0);
            do
            {
               cout << "Sex [M/F]: "; cin >> sex;
               if (sex == 'm' || sex == 'f')
                  sex -= 32;
               if (sex != 'M' && sex != 'F')
                  cout << "Invalid Sex. Try Again.\n";
            } while (sex != 'M' && sex != 'F');
            cout << "E-Mail ID: "; gets(email);
            cout << "Phone No.: "; cin >> phno;
            air1.close();
            fstream air2("AIRCRAFTS.DAT", ios::binary | ios::in);
            while (m < n)
            {
               air2.read((char*)&a, sizeof(a));
               if (strcmpi(retsplace(), a.retsplace()) == 0)
                  m++;
            }
            addplace(a.retdplace());
            newflno(a.retflno());
            newacno(a.retacno());
            texpense(a.rettexpense());
            adddtime(a.rethr(), a.retmin());
            addatime(a.retahr(), a.retmin());
            if (retdd() < 10)
               PNR = 10000000 * retdd() + 100000 * retmm() + 10 * retyy();
            else
               PNR = 1000000 * retdd() + 10000 * retmm() + retyy();
            air2.close();
         }
      }
      void display()
      {
         if (stat == 'C')
            printf("HA%3i %8i  %2i  %-10s %-10s %-10s %-2i  %1c %10lu %6i %1c\n", fl_no, PNR, s, splace, dplace, name, age, sex, phno, t_expense, stat);
         else
            printf("HA%3i %8i  %2c  %-10s %-10s %-10s %-2i  %1c %10lu %6i %1c\n", fl_no, PNR, 'X', splace, dplace, name, age, sex, phno, t_expense, stat);
      }
      void confirm(){ stat = 'C'; }
      char retstat(){ return stat; }
      int retdd(){ return dt.dd; }
      int retmm(){ return dt.mm; }
      int retyy(){ return dt.yy; }
      int rethr(){ return dtime.hr; }
      int retmin(){ return dtime.min; }
      int retahr(){ return atime.hr; }
      int retamin(){ return atime.min; }
      char* retname(){ return name; }
      int retage(){ return age; }
      int retphno(){ return phno; }
      int retflno(){ return fl_no; }
      int retacno(){ return ac_no; }
      int retpnr(){ return PNR; }
      int retseat(){ return s; }
      int rettexpense(){ return t_expense; }
      char retsex(){ return sex; }
      char* retsplace(){ return splace; }
      char* retdplace(){ return dplace; }
      void addplace(char* d){ strcpy(dplace, d); }
      void newflno(int flno){ fl_no = flno; }
      void newacno(int acno){ ac_no = acno; }
      void newseat(int seat){ s = seat; }
      void texpense(int texpense){ t_expense = texpense; }
      void adddtime(int a, int b)
      {
         dtime.hr = a;
         dtime.min = b;
      }
      void addatime(int a, int b)
      {
         atime.hr = a;
         atime.min = b;
      }
      void pnrupd(){ PNR += 1; }
      void pnrchange(int p){ PNR = p + 1; }
      void seatnew(int p){ s = p; }
};
void flightupd(passenger &a, int x, int dd, int mm, int yy)
{
	char file2[10];
	sprintf(file2, "F%02i%02i%04i.DAT", dd, mm, yy);
	fstream fli(file2, ios::binary | ios::out | ios::in);
	ifstream air("AIRCRAFTS.DAT", ios::binary);
	flight b;
	aircraft c;
	int k = 0, m = 0, q = 0;
	while (k == 0)
	{
		air.read((char*)&c, sizeof(c));
		if (c.retflno() == a.retflno())
			k++;
	}
	fli.close();
	fstream fli1(file2, ios::binary | ios::out | ios::in);
	while (fli1.read((char*)&b, sizeof(b)) && m == 0)
		if (b.retflno() == a.retflno())
			m++;
	fli1.close();
	fstream fli2(file2, ios::binary | ios::out | ios::in);
	if (m == 0)
	{
		b.newflno(a.retflno());
		b.resetocc();
		b.newcap(c.retcap());
		b.addocc();
		fli2.seekg(0, ios::end);
		fli2.write((char*)&b, sizeof(b));
		a.confirm();
	}
	else
		while (fli2.read((char*)&b, sizeof(b)) && q == 0)
			if (b.retflno() == a.retflno())
			{
				if (x == 1)
					b.addocc();
				else
					b.delocc();
				if (b.retocc() <= c.retcap())
				{
					fli2.seekg(fli2.tellg() - sizeof(b));
					fli2.write((char*)&b, sizeof(b));
					a.confirm();
				}
			}
	air.close();
	fli2.close();
}
void showfstatus()
{
	splash();
	date dt;
	inputdate(dt);
	char file1[10];
	int c = 0;
	sprintf(file1, "F%02i%02i%04i.DAT", dt.dd, dt.mm, dt.yy);
	fstream fli(file1, ios::binary | ios::in);
	flight a;
	splash();
	printf("Fl_No Cap Occ\n");
	while (fli.read((char*)&a, sizeof(a)))
	{
		a.display();
		c++;
	}
	if (c == 0)
	{
		splash();
		cout << "No Data Found.\n";
	}
	cout << "Press any key to Continue.\n";
	fli.close();
	getch();
}
void ticket(passenger a)
{
	splash();
	cout << "Passenger Ticket\n";
	for (int x = 0; x < 80; x++)
		cout << "-";
	cout << "Ticket Number\t: " << a.retpnr() << "\t\tDate of Issue\t: " << a.retdd() << "/" << a.retmm() << "/" << a.retyy() << endl;
	cout << "From\t\t: " << a.retsplace() << "\t\tTo\t\t: " << a.retdplace() << endl;
	if (a.retsex() == 'M' || a.retsex() == 'm')
		cout << "Name\t\t: Mr. " << a.retname();
	else
		cout << "Name\t\t: Ms. " << a.retname();
	cout << "\t\tFare\t\t: " << "Rs. " << a.rettexpense() << "/-\n";
	for (int x = 0; x < 80; x++)
		cout << "-";
	cout << "Press any key to Continue.\n";
	getch();
}
void addpassenger()
{
	splash();
	char file1[10];
	passenger a;
	a.reserve();
	sprintf(file1, "P%02i%02i%04i.DAT", a.retdd(), a.retmm(), a.retyy());
	flightupd(a, 1, a.retdd(), a.retmm(), a.retyy());
	ifstream pas(file1, ios::binary);
	pas.seekg(0, ios::end);
	if (pas.tellg() == -1 || pas.tellg() == 0)
	{
		a.pnrupd();
		a.seatnew(1);
	}
	else
	{
		int x;
		passenger b;
		pas.seekg(pas.tellg() - sizeof(b));
		pas.read((char*)&b, sizeof(b));
		x = b.retpnr();
		a.pnrchange(x);
		pas.seekg(0);
		int g = 0, p = 0, k = 0;
		while (pas.read((char*)&b, sizeof(b)) && p == 0)
			if (b.retflno() == a.retflno())
			{
				g++;
				k = 1;
				if (b.retseat() != g)
					p = 1;
			}
		if (a.retstat() == 'C')
			if (k == 1)
				if (p == 0)
					a.seatnew(++g);
				else
					a.seatnew(g);
			else
				a.seatnew(1);
	}
	pas.close();
	fstream pas1(file1, ios::binary | ios::app);
	pas1.write((char*)&a, sizeof(a));
	cout << "Reservation Complete! Press any key to view your ticket.\n";
	getch();
	ticket(a);
	pas1.close();
}
void displayreservations()
{
	char file1[10];
	int c = 0;
	date dt;
	inputdate(dt);
	sprintf(file1, "P%02i%02i%04i.DAT", dt.dd, dt.mm, dt.yy);
	fstream pas(file1, ios::binary | ios::in);
	passenger a;
	splash();
	printf("Fl_No    PNR   Seat Depart     Arriv      Name      Age Sex    Phone    Amt  ST\n");
	while (pas.read((char*)&a, sizeof(a)))
	{
		a.display();
		c++;
	}
	if (c == 0)
	{
		splash();
		cout << "No Reservations Found.\n";
	}
	cout << "Press any key to Continue.\n";
	pas.close();
	getch();
}
void cancelreservation()
{
	splash();
	date dt;
	char file1[10];
	int PNR, found = 0, c = 0;
	cout << "Enter Date of Reservation:\n";
	inputdate(dt);
	sprintf(file1, "P%02i%02i%04i.DAT", dt.dd, dt.mm, dt.yy);
	fstream fin(file1, ios::binary | ios::in);
	fstream fout("TEMP.DAT", ios::binary | ios::out | ios::in);
	passenger a;
	splash();
	printf("Fl_No    PNR   Seat Depart     Arriv      Name      Age Sex    Phone    Amt  ST\n");
	while (fin.read((char*)&a, sizeof(a)))
	{
		a.display();
		c++;
	}
	fin.close();
	fin.open(file1, ios::binary | ios::in);
	if (c == 0)
	{
		splash();
		cout << "No Reservations Found.\n";
	}
	else
	{
		int b, s;
		char c;
		cout << "Enter PNR Number to Cancel: "; cin >> PNR;
		while (fin.read((char*)&a, sizeof(a)))
			if (PNR == a.retpnr())
			{
				found = 1;
				b = a.retflno();
				c = a.retstat();
				s = a.retseat();
			}
			else
				fout.write((char*)&a, sizeof(a));
		if (found == 1)
		{
			fin.close();
			fin.open(file1, ios::binary | ios::in);
			while (fin.read((char*)&a, sizeof(a)))
				if (PNR == a.retpnr())
					flightupd(a, 0, a.retdd(), a.retmm(), a.retyy());
			cout << "PNR " << PNR << " Cancelled.\n";
			if (c == 'C')
			{
				fout.seekg(0);
				int x = 0;
				while (fout.read((char*)&a, sizeof(a)) && x == 0)
					if (b == a.retflno() && a.retstat() == 'W')
					{
						a.display();
						a.confirm();
						a.display();
						a.seatnew(s);
						fout.seekp(-1 * sizeof(a), ios::cur);
						fout.write((char*)&a, sizeof(a));
						flightupd(a, 1, a.retdd(), a.retmm(), a.retyy());
						x = 1;
					}
			}
		}
		else
			cout << "PNR " << PNR << " was Not Found.\n";
	}
	getch();
	fin.close();
	fout.close();
	remove(file1);
	rename("TEMP.DAT", file1);
}
void reservemenu()
{
	int n;
	do
	{
		splash();
		cout << "1. New Reservation\n";
		cout << "2. View Reservations\n";
		cout << "3. Cancel Reservation\n";
		cout << "0. Exit to Main Menu\n";
		cout << "Input: "; cin >> n;
		switch (n)
		{
         case 1: addpassenger(); break;
         case 2: displayreservations(); break;
         case 3: cancelreservation(); break;
         case 0: splash(); break;
         default: cout << "Invalid Option. Try Again.\n"; getch();
		}
	} while (n != 0);
}
void reservemenu2()
{
	int n;
	do
	{
		splash();
		cout << "1. New Reservation\n";
		cout << "2. Cancel Reservation\n";
		cout << "0. Exit to Main Menu\n";
		cout << "Input: "; cin >> n;
		switch (n)
		{
         case 1: addpassenger(); break;
         case 2: cancelreservation(); break;
         case 0: splash(); break;
         default: cout << "Invalid Option. Try Again.\n"; getch();
		}
	} while (n != 0);
}
void slip()
{
	char file1[10];
	date dt;
	inputdate(dt);
	int pnr, c = 0;
	sprintf(file1, "P%02i%02i%04i.DAT", dt.dd, dt.mm, dt.yy);
	fstream pas(file1, ios::binary | ios::in);
	passenger a;
	splash();
	printf("Fl_No    PNR   Seat Depart     Arriv      Name      Age Sex    Phone    Amt  ST\n");
	while (pas.read((char*)&a, sizeof(a)))
	{
		a.display();
		c++;
	}
	if (c == 0)
	{
		splash();
		cout << "No Reservations Found.\n";
		pas.close();
	}
	else
	{
		pas.close();
		cout << "Enter PNR number: "; cin >> pnr;
		fstream pas1(file1, ios::binary | ios::in);
		int k = 0;
		while (k == 0 && pas1.read((char*)&a, sizeof(a)))
			if (a.retpnr() == pnr)
				k++;
		splash();
		cout << "Reservation Slip\n";
		for (int x = 0; x < 80; x++)
			cout << "-";
		cout << "PNR Number\t: " << a.retpnr() << "\t\tFlight Number\t: HA" << a.retflno() << endl;
		cout << "Status\t\t: " << a.retstat() << "\t\t\tAircraft\t: AB" << a.retacno() << endl;
		if (a.retseat() == 0)
			cout << "Seat Number\t: " << 'X' << "\t\t\tDate of Journey\t: " << a.retdd() << "/" << a.retmm() << "/" << a.retyy() << endl;
		else
			cout << "Seat Number\t: " << a.retseat() << "\t\t\tDate of Journey\t: " << a.retdd() << "/" << a.retmm() << "/" << a.retyy() << endl;
		cout << "From\t\t: " << a.retsplace() << "\t\tTo\t\t: " << a.retdplace() << endl;
		if (a.retsex() == 'M' || a.retsex() == 'm')
			cout << "Name\t\t: Mr. " << a.retname();
		else
			cout << "Name\t\t: Ms. " << a.retname();
		cout << "\t\tAge\t\t: " << a.retage() << endl;
		cout << "Contact No.\t: " << a.retphno() << "\t\tFare\t\t: Rs. " << a.rettexpense() << "/-\n";
		for (int x = 0; x < 80; x++)
			cout << "-";
		pas1.close();

	}
	cout << "Press any key to Continue.\n";
	getch();
}
void chart()
{
	char file1[10];
	int c = 0, flno;
	date dt;
	inputdate(dt);
	sprintf(file1, "P%02i%02i%04i.DAT", dt.dd, dt.mm, dt.yy);
	fstream pas(file1, ios::binary | ios::in);
	fstream air("AIRCRAFTS.DAT", ios::binary | ios::in);
	passenger a;
	aircraft b;
	cout << "Enter Flight No.: HA"; cin >> flno;
	splash();
	cout << "Reservation Chart\n";
	for (int x = 0; x < 80; x++)
		cout << "-";
	while (pas.read((char*)&a, sizeof(a)))
		if (a.retflno() == flno)
		{
			if (c == 0)
			{
				cout << "Flight Number\t: HA" << a.retflno() << "\t\tDate of Journey\t: " << a.retdd() << "/" << a.retmm() << "/" << a.retyy() << endl;
				cout << "Aircraft\t: AB" << a.retacno() << "\t\tDeparture Time\t: " << a.rethr() << ":" << a.retmin() << endl;
				for (int x = 0; x < 80; x++)
					cout << "-";
				printf("Seat\tName\t\tAge\tDestination\t   PNR\t      Status\n");
			}
			if (a.retseat() == 0)
				cout << " " << 'X' << "\t" << a.retname() << "\t\t" << a.retage() << "\t  " << a.retdplace() << "\t\t" << a.retpnr() << "\t" << a.retstat() << endl;
			else
				cout << " " << a.retseat() << "\t" << a.retname() << "\t\t" << a.retage() << "\t  " << a.retdplace() << "\t\t" << a.retpnr() << "\t" << a.retstat() << endl;
			c++;
		}
	if (c == 0)
		cout << "No Data Found.\n";
	for (int x = 0; x < 80; x++)
		cout << "-";
	cout << "Press any key to Continue.\n";
	getch();
	pas.close();
	air.close();
}
void reportsmenu()
{
	int n;
	do
	{
		splash();
		cout << "1. Reservation Slip\n";
		cout << "2. Reservation Chart\n";
		cout << "0. Exit to Main Menu\n";
		cout << "Input: "; cin >> n;
		switch (n)
		{
         case 1: slip(); break;
         case 2: chart(); break;
         case 0: break;
         default: cout << "Invalid Option. Try Again.\n"; getch();
		}
	} while (n != 0);
}
void menu()
{
	int n;
	do
	{
		splash();
		cout << "1. Aircrafts\n";
		cout << "2. Reservations\n";
		cout << "3. Reports\n";
		cout << "4. Flight Status\n";
		cout << "0. Exit\n";
		cout << "Input: "; cin >> n;
		switch (n)
		{
         case 1: aircraftmenu(); break;
         case 2: reservemenu(); break;
         case 3: reportsmenu(); break;
         case 4: showfstatus(); break;
         case 0: break;
         default: cout << "Invalid Option. Try Again.\n"; getch();
		}
	} while (n != 0);
}
void admin()
{
	splash();
	int found = 0;
	char pass[20];
	do
	{
		fstream f("PASSWORD.DAT", ios::binary | ios::in);
		password a;
		cout << "Enter Password or 0 to Exit: "; cin >> pass;
		if (pass[0] != '0')
			while (f.read((char*)&a, sizeof(a)) && found == 0)
				if (strcmp(pass, a.retpass()) == 0)
				{
					found = 1;
					menu();
					f.close();
				}
			if (found == 0)
			{
				cout << "Invalid Password. Try Again.\n";
				f.close();
			}
	} while (found == 0 && pass[0] != '0');
}
void main()
{
	int n;
	do
	{
		splash();
		cout << "Log in as:\n";
		cout << "1. Administration\n";
		cout << "2. Passenger\n";
		cout << "0. Exit\n";
		cout << "Input: "; cin >> n;
		switch (n)
		{
         case 1: admin(); break;
         case 2: reservemenu2(); break;
         case 0: break;
		}
	} while (n != 0);
	cout << "Thank You!\n";
	getch();
}
