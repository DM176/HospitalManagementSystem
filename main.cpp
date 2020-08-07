#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class Name
{
private:
char * fName;
char * lName;
public:
Name();
Name(char* fn, char* ln);
Name(const Name &g);
~Name();
Name operator=(const Name g);
char *getfName();
char *getlName();
//add following functions //Getter, Setters
//Destructor, Default Constructor, Copy Constructor,
	friend ostream & operator<<(ostream & out, const Name & n)
	{
	    out << n.fName << " " << n.lName << endl;
	    return out;
	}
};
char* Name::getfName()
{
    return fName;
}
char *Name:: getlName()
{
  return lName;
}
Name Name:: operator=(const Name g)
{
	 int f;
   int l;
    if(g.fName!=NULL && g.lName!=NULL)
    {
        if(fName!=NULL && lName!=NULL)
        {
            delete [] fName;
            fName=NULL;
            delete [] lName;
             lName=NULL;
             f=strlen(g.fName);
            l=strlen(g.lName);

            fName=new char [f+1];
            for(int i=0;i<f;i++)
            {
                fName[i]=g.fName[i];
            }
            fName[f]='\0';

            lName=new char [l+1];
            for(int i=0;i<l;i++)
            {
                lName[i]=g.lName[i];
            }
            lName[l]='\0';
        }
        else
        {
             f=strlen(g.fName);
            l=strlen(g.lName);

            fName=new char [f+1];
            for(int i=0;i<f;i++)
            {
                fName[i]=g.fName[i];
            }
            fName[f]='\0';

            lName=new char [l+1];
            for(int i=0;i<l;i++)
            {
                lName[i]=g.lName[i];
            }
            lName[l]='\0';
        }
    }
    else
    {
        if(fName!=NULL && lName!=NULL)
        {
            delete [] fName;
             fName=NULL;
            delete [] lName;
             lName=NULL;
        }
    }
	return *this;
}
Name::Name()
{
    fName=NULL;
    lName=NULL;
}
Name::Name(char* fn, char* ln)
{
    int N=strlen(fn);
    fName=new char [N+1];
    for(int i=0;i<N;i++)
    {
        fName[i]=fn[i];
    }
    fName[N]='\0';

    N=strlen(ln);
    lName=new char [N+1];
    for(int i=0;i<N;i++)
    {
        lName[i]=ln[i];
    }
    lName[N]='\0';
}
Name::Name(const Name &g)
{
    int f;
   int l;
    if(g.fName!=NULL && g.lName!=NULL)
    {
        if(fName!=NULL && lName!=NULL)
        {
          //delete   fName;
            fName=NULL;
          // delete  lName;
             lName=NULL;
             f=strlen(g.fName);
            l=strlen(g.lName);

            fName=new char [f+1];
            for(int i=0;i<f;i++)
            {
                fName[i]=g.fName[i];
            }
            fName[f]='\0';

            lName=new char [l+1];
            for(int i=0;i<l;i++)
            {
                lName[i]=g.lName[i];
            }
            lName[l]='\0';
        }
        else
        {
             f=strlen(g.fName);
            l=strlen(g.lName);

            fName=new char [f+1];
            for(int i=0;i<f;i++)
            {
                fName[i]=g.fName[i];
            }
            fName[f]='\0';

            lName=new char [l+1];
            for(int i=0;i<l;i++)
            {
                lName[i]=g.lName[i];
            }
            lName[l]='\0';
        }

    }
    else
    {
        if(fName!=NULL && lName!=NULL)
        {
            //delete [] fName;
             fName=NULL;
            //delete [] lName;
             lName=NULL;
        }
    }

}
Name::~Name()
{
    if(fName!=NULL)
    {
        delete [] fName;
        fName=NULL;
    }
    if(lName!=NULL)
    {
         delete [] lName;
        lName=NULL;
    }
}
class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date();
    Date(int d,int m,int y);
    Date (const  Date &d);
    ~Date();
    int getday();
    int getmonth();
    int getyear();
friend ostream & operator<<(ostream & out, const Date & d)
{
    out << d.day << "/" << d.month<<"/" <<d.year<< endl;
    return out;
}
};
int Date::getday()
{
	return day;
}
int Date::getmonth()
{
	return month;
}
int Date::getyear()
{
	return year;
}

Date ::Date()
{
    day=0;
    month=0;
    year=0;
}
Date::Date(int d,int m,int y)
{
    day=d;
    month=m;
    year=y;
}
Date::Date(const Date &d)
{
    day=d.day;
    month =d.month;
    year=d.year;
}
Date::~Date()
{
    day=0;
    month=0;
    year=0;
}
class mTime
{
private:

int hour;
int min;
int sec;
public:

mTime();
mTime(int h,int m,int s);
~mTime();
friend ostream & operator<<(ostream & out, const mTime &t)
{
    out << t.hour << ":" << t.min<<":" <<t.sec<< endl;
    return out;
}
//add constructurs getter setters and stream output function, which output time in
//given format Hr : Min : Sec
};
mTime::mTime()
{
    hour=0;
    min=0;
    sec=0;
}
mTime::mTime(int h,int m,int s)
{
    hour=h;
    min=m;
    sec=s;
}
mTime::~mTime()
{
    hour=0;
    min=0;
    sec=0;
}
class Person
{
private:
    Name pName;
    Date DOB;
    int Age;
    long long Nid;
public:
    Person();
    Person(Name &p,Date &d,int A,long long N);
    ~Person();
    Person(const Person &p);
    char *get_fname();
    char *get_lname();
    int get_day();
    int get_month();
    int get_year();
    int get_age();
    long long get_nid();
//add following functions in this class
//Getter, Setters
//Destructor, Default and Parametrized Constructor, Copy Constructor, Output
//operator (print information of person)
friend ostream & operator<<(ostream & out, const Person &p)
{
    out << p.pName  << p.DOB<<p.Age<<"  NID : "<<p.Nid<<endl;
    return out;
}
};
int Person::get_age()
{
	return Age;
}
long long Person::get_nid()
{
	return Nid;
}
int Person::get_day()
{
	return DOB.getday();
}
int Person::get_month()
{
	return DOB.getmonth();
}
int Person::get_year()
{
	return DOB.getyear();
}
char* Person::get_fname()
{
	return pName.getfName();
}
char *Person::get_lname()
{
	return pName.getlName();
}
Person::Person(const Person &p)
{
	pName=p.pName;
	DOB=p.DOB;
	Age=p.Age;
	Nid=p.Nid;
}
Person::Person()
{
	Name pName;
    Date DOB;
    Age=0;
    Nid=0;
}
Person::Person(Name &p,Date &d,int A,long long N)
{
    pName=p;
    DOB=d;
    Age=A;
    Nid=N;
}
Person::~Person()
{
	Age=0;
	Nid=0;
}
class pRecord
{
private:
char * DiseaseType;
Date visDate;
mTime visTime;
int AssignedDoc; // Contain Doctor ID
float feepaid;
public:
pRecord();
pRecord(char *dis,Date d,mTime t, int Doc,float fee);
~pRecord();
	friend ostream & operator<<(ostream & out, const pRecord &p)
	{
		if(p.DiseaseType!=NULL)
		{
         out<<"  disease type:  " << p.DiseaseType<<endl;
		out<<"  date of visit  "<<p.visDate ;
		out<<"  time of visit  "<<p.visTime ;
		out<<"  Doctor ID: "  <<p.AssignedDoc<<endl;
		out<<"  fee paid: "<<p.feepaid<<endl;
	    }
	    return out;
	}
};
pRecord::pRecord()
{
	DiseaseType=NULL;
	Date visDate;
    mTime visTime;
	AssignedDoc=0;
	feepaid=0;

}
pRecord::~pRecord()
{
	if(  DiseaseType!=NULL)
    {
	  DiseaseType=NULL;
    }
	AssignedDoc=0;
	feepaid=0;
}
pRecord::pRecord(char *dis,Date d,mTime t, int Doc,float fee)
{
	int l=strlen(dis);
	DiseaseType=new char [l+1];
	for(int i=0;i<l;i++)
	{
		DiseaseType[i]=dis[i];
	}
	DiseaseType[l]='\0';
	visDate=d;
	visTime=t;
	AssignedDoc=Doc;
	feepaid=fee;
}
class Patient : public Person
{
private:
	int pId;// Unique and Assigned first time when patient come to clinic
	pRecord ** history; //Maintain and Update history of patient on each visit to
	//clinic by adding new record in dynamic array. //you can add more members if required
     int num;
     pRecord record;
public:
	Patient();
	~Patient();
	Patient(int pId,pRecord r,Name &n,Date &d,int A,long long N);
	void update_history(pRecord R);
	int get_pid();
	int get_num();
	pRecord get_record();
		friend ostream & operator<<(ostream & out,  Patient &p)
	{
	    out<<endl<<"  Patient ID :  " << p.pId<<endl;
		out << "  Name of patient : "<<p.get_fname() <<" "<<p.get_lname()<< endl;
		out << "  date of visit : "<<p.get_day()<<"/"<<p.get_month()<<"/"<<p.get_year()<< endl;
		out<<"  Age of patient :"<<p.get_age()<<endl;
		out<<"  Nid :"<<p.get_nid()<<endl;
		if(p.history!=NULL)
		{
			cout<<"updated record list : "<<endl;
			for(int i=0;i<p.num;i++)
			{
				out<<*(p.history[i])<<endl;
			}
		    return out;
		 }
		 out<<endl<<endl;
	}
	//add following functions in this class
	//Getter, Setters
	//Destructor, Default and Parametrized Constructor, Copy Constructor, Output
	//operator (print cpmplete information of patient including history id any)
};
int Patient::get_num()
{
	return num;
}
pRecord Patient::get_record()
{
	return record;
}
int Patient::get_pid()
{
	return pId;
}
void Patient::update_history(pRecord R)
{
	pRecord *p=new pRecord(R);
	history[num]=p;
	num++;
}
Patient::Patient():Person()
{
	pId=0;
	history=NULL;
	num=0;
}
Patient::~Patient()
{
	pId=0;
	num=0;
	/*if(history!=NULL)
	{
		for(int i=0;i<num-1;i++)
		{
			delete history[i];
		}
		delete []history;
	}
	*/
} 
Patient::Patient(int Id,pRecord r,Name &p,Date &d,int A,long long N):Person(p,d,A, N)
{
	pId=Id;
	num=0;
	history=new pRecord*[10];
	record=r;
}

class Doctor : public Person
{
private:
int dId;
char *specialization; //General Physician, Orthopedic, Child Specialist etc.
int *patientsVisited;
int total; //Add patient id in the array for tracking complete
//information of visited patients.
public:
	Doctor();
	~Doctor();
	Doctor(int did,char *s,int patientid,Name &p,Date &d,int A,long long N);
	void set_patientsvisited(int pid);
	int get_did();
	int get_total();
	int *get_patientsvisited();
//add following functions in this class
//Getter, Setters
//Destructor, Default and Parameterized Constructor, Copy Constructor, Output
//operator(prints complete information of Doctor)
	friend ostream & operator<<(ostream & out,  Doctor &d)
	{
	    out<<"Doctor ID :  " << d.dId<<endl;
		out<<"Name of Doctor : "<<d.get_fname()<<" "<<d.get_lname()<<endl;
		out<<"DOB :"<<d.get_day()<<"/"<<d.get_month()<<"/"<<d.get_year()<<endl;
		out<<"Age : "<<d.get_age()<<endl;
		out<<"Nid : "<<d.get_nid()<<endl;
		out<<"specialization:  "<<d.specialization<<endl;
		
		if(d.patientsVisited!=NULL)
		{
			out<<"patients visited are :  "<<endl;
			for(int i=0;i<d.total;i++)
			{
				out<<i+1<<"."<<"patient id = "<<d.patientsVisited[i]<<endl;
			}
			out<<endl;
			return out;
		}
	}
};
int Doctor::get_total()
{
	return total;
}
int *Doctor::get_patientsvisited()
{
	return patientsVisited;
}
int Doctor::get_did()
{
	return dId;
}
void Doctor::set_patientsvisited(int pid)
{
	patientsVisited[total]=pid;
	total++;
}
Doctor::Doctor(int did,char *s,int patientid,Name &p,Date &d,int A,long long N):Person(p,d,A,N)
{
	dId=did;
	int l=strlen(s);
	l++;
	specialization=new char[l];
	for(int i=0;i<l-1;i++)
	{
		specialization[i]=s[i];
	}
       specialization[l-1]='\0';
       
    patientsVisited=new int[10];
	total=0;

}
Doctor::Doctor():Person()
{
	dId=0;
	specialization=NULL;
     patientsVisited=NULL;
     total=0;
}
Doctor::~Doctor()
{
     if(specialization!=NULL)
	{
	//	delete []specialization;
	}
	total=0;
	/*if(pateintsVisited!=NULL)
	{
		delete[]pateintsVisited;
	}*/
}
class Appointment
{
private:
	char *DiseaseType;
	int pId;
	int dId;
	Date appDate;
	mTime appTime;
	int token_Number;
	float fee;
	bool status;
 // false for pending, true if complete
 public:
 	Appointment();
 	Appointment(char * DisType,int pid,int did,Date appD,mTime appT,int tokenNum,float feee,bool s);
 	~Appointment();
 	int get_docid();
 	int get_patid();
 	int  get_tokennum();
 	void set_status(bool s);
 	int get_day();
 	int get_month();
 	int get_year();
 	friend ostream & operator<<(ostream & out, const Appointment a)
	{
		out<<endl;
		out<<"Disease type : "<<a.DiseaseType<<endl;
		out<<"Patient id : "<<a.pId<<endl;
		out<<"Doctor id : "<<a.dId<<endl;
		out<<"Date of appointment: "<<a.appDate;
		out<<"Time of appointment: "<<a.appTime;
		out<<"Token number :"<<a.token_Number<<endl;
		out<<"Fee:"<<a.fee<<endl;
		out<<"Appointment status : ";
		if(a.status==true)
		{
			cout<<"not pending"<<endl;
		}
		else
		{
			cout<<"pending"<<endl;
		}
		
	}
		
		
		
};
int Appointment::get_day()
{
	return appDate.getday();
}
int Appointment::get_month()
{
	return appDate.getmonth();
}
int Appointment::get_year()
{
	return appDate.getyear();
}
int Appointment::get_docid()
{
	return dId;
}
int Appointment::get_patid()
{
	return pId;
}
void Appointment::set_status(bool s)
{
	status =s;
}
int Appointment::get_tokennum()
{
	return token_Number;
}
Appointment::Appointment(char * DisType,int pid,int did,Date appD,mTime appT,int tokenNum,float feee,bool s)
{
    int l=strlen(DisType);
    DiseaseType=new char [l+1];
    for(int i=0;i<l;i++)
    {
    	DiseaseType[i]=DisType[i];
	}
	 DiseaseType[l]='\0';
	 pId=pid;
     dId=did;
	 appDate=appD;
	 appTime=appT;
     token_Number=tokenNum;
	 fee=feee;
	 status=s;;
}
Appointment::Appointment()
{
	DiseaseType=NULL;
	pId=0;
	 dId=0;
	 token_Number=0;
	 fee=0;
	 status=false;
}
Appointment::~Appointment()
{
	
    /* 
    
		if(DiseaseType!=NULL)
		{
			delete []	DiseaseType;
		}
		
	*/
	pId=0;
	 dId=0;
	 token_Number=0;
	 fee=0;
	 status=false;
}
class clinic
{
private:
Doctor *listd;
Patient *listp;
Appointment *lista;
public:

clinic();
clinic (Doctor *d,Patient *p,Appointment *a);
~clinic();
void add_patient(Patient &p,int size);
void add_doctor(Doctor D,int size );
void add_appointment(Appointment A,int size);
bool update_appointment(int token_number,int size,int did,int p);
void update_patients_visited(int did,int pid,int di);
void print_details_on_a_date(int did,int size1,int size2,int day,int month ,int year);
void print_details_of_same_doc(int did,int size1,int size2) ;
void print_details_of_pending_appointments_on_a_date(int day ,int month ,int year,int size);
void print_details_of_pending_appointments_of_a_doctor(int did ,int size);
void update_history2(pRecord R,int pid,int sizep);
void print_patient(int pid,int psize);
void print_doctor(int did,int dsize);
void update_patients_visited_in_file(int dsize);
void update_history_in_file(int psize);
};
void clinic::print_doctor(int did,int dsize)
{
	for(int i=0;i<dsize;i++)
	{
		if(listd[i].get_did()==did)
		{
			cout<<listd[i];
			i=dsize;
		}
	}
}
void clinic::print_patient(int pid,int psize)
{
	for(int i=0;i<psize;i++)
	{
		if(listp[i].get_pid()==pid)
		{
			cout<<listp[i];
			i=psize;
		}
	}
}
void clinic::update_history2(pRecord R,int pid,int sizep)
{
	for(int i=0;i<sizep;i++)
	{
		if(listp[i].get_pid()==pid)
		{
			listp[i].update_history(R);
		}
	}
}
void clinic::print_details_on_a_date(int did,int size1,int size2,int day,int month ,int year)
{
	int *p;
	for(int i=0;i<size1;i++)
	{
		if(listd[i].get_did()==did)
		{
			for(int j=0;j< listd[i].get_total();j++)
			{
			    p=listd[i].get_patientsvisited();
			    for(int k=0;k<size2;k++)
			    {
			    	if(listp[k].get_pid()==p[j])
			    	{
			    		if(listp[k].get_day()==day && listp[k].get_month() && listp[k].get_year() )
			    		{
				    		cout<<listp[k];
				    		k=size2;
						}
					}
				}
			}
		}
	}	
}
void clinic::update_patients_visited(int did,int pid,int di)
{
	for(int i=0;i<di;i++)
	{
		if(listd[i].get_did()==did)
		{
			listd[i].set_patientsvisited(pid);
			i=di;
		}
	}
}
void clinic::print_details_of_same_doc(int did,int size1,int size2)
{
	int *p;
	for(int i=0;i<size1;i++)
	{
		if(listd[i].get_did()==did)
		{
			for(int j=0;j< listd[i].get_total();j++)
			{
			    p=listd[i].get_patientsvisited();
			    for(int k=0;k<size2;k++)
			    {
			    	if(listp[k].get_pid()==p[j])
			    	{
			    		cout<<listp[k];
			    		k=size2;
					}
				}
			}
		}
	}	
}
int check_no(char c)
{
	if(c=='0')
	{
		return 0;
	}
	else if(c=='1')
	{
		return 1;
	}
	else if(c=='2')
	{
		return 2;
	}
	else if(c=='3')
	{
		return 3;
	}
		if(c=='4')
	{
		return 4;
	}
	else if(c=='5')
	{
		return 5;
	}
	else if(c=='6')
	{
		return 6;
	}
	else if(c=='7')
	{
		return 7;
	}
	else if(c=='8')
	{
		return 8;
	}
	else if(c=='9')
	{
		return 9;
	}
	
}
int convert(char u[],int &currsize)
{
	int dobara=0;
	int result=0;
	        while(u[currsize]!=' ')
		    {
		    	if(dobara>0)
		    	{
			    	result=result*10;
			      result=result+check_no(u[currsize]);
		    	  currsize++;
			    }
			    else
			    {
			    	result=check_no(u[currsize]);
			    	currsize++;
				}
			    dobara++;
		    }
		    currsize++;
		    return result;
}
void clinic::print_details_of_pending_appointments_on_a_date(int day,int month,int year,int size)
{
	bool check=false;
	       	if(size>0)
		     {
			    cout<<endl<<"appointment list"<<endl;
				for(int i=0;i<size;i++)
				{
					if(lista[i].get_day()==day && lista[i].get_month()==month && lista[i].get_year()==year)
					{
						cout<<lista[i];
						check =true;
					}
				}
				 if(check==false)
				 {
				 	cout<<"No appointment matches with given info"<<endl;
				 }
		     }
		     else
		     {
		     	cout<<"No appointments in the list"<<endl;
			 }
}
void clinic::print_details_of_pending_appointments_of_a_doctor(int did,int size)
{
	bool check=false;
	    	if(size>0)
		     {
				 cout<<endl<<"appointment list"<<endl;
				for(int i=0;i<size;i++)
				{
					if(lista[i].get_docid()==did)
					{
						cout<<lista[i];
						check=true;
					}
				}
				 if(check==false)
				 {
				 	cout<<"No appointment matches with given info"<<endl;
				 }
		     }
		    else
		     {
		     	cout<<"No appointments in the list"<<endl;
			 }
}
void clinic::update_patients_visited_in_file(int dsize)
{
		ofstream fout;
		fout.open("Patients visited.txt");
			if(!fout)
			{
				cout<<"file does not exist"<<endl;
				system("pause");
			}
			else
			{
				int i=0;
				while(i<dsize)
				{
					fout<<listd[i].get_did()<<" ";
					for(int j=0;j<(listd[i].get_total());j++)
					{
						fout<<(listd[i].get_patientsvisited())[j]<<" ";
					}
					fout<<endl;
			     	i++;
			     }
			 }
}
/*
void clinic::update_history_in_file(int psize)
{
		ofstream fout;
		fout.open("Patient - History");
			if(!fout)
			{
				cout<<"file does not exist"<<endl;
				system("pause");
			}
			else
			{
				int i=0;
				while(i<psize)
				{
					for(int j=0;j<listp[i].get_num();j++)	
					{
						fout<<*(.history[j])<<" ";
					}
					
}
*/
bool clinic::update_appointment(int token_number,int size,int did,int p)
{
	bool found=false;
	char line[100];
	int i,r=0;
	for( i=0;i<=size && found==false;i++)
	{
		if(	lista[i].get_tokennum()==token_number)
		{
			found=true;
		}
	}
	i--;
	if(found==true)
	{
	    	int count=0,count1=0,doc,pat;
	        lista[i].set_status(found);
	        doc=lista[i].get_docid();
	        pat=lista[i].get_patid(); 
	        for(int j=0;j<did;j++)
	        {
	        	if(listd[j].get_did()==doc)
	        	{
	        		listd[j].set_patientsvisited(pat);
	        		cout<<"updated doctor's data"<<endl;
					cout<<listd[j];
				}
			}
			for(int k=0;k<p;k++)
			{
				if(listp[k].get_pid()==pat)
				{
					listp[k].update_history(listp[k].get_record());
					cout<<"updated patient's data"<<endl;
					cout<<listp[k];
				}
			}
		    if(size>1)
		    {
		    	Appointment *temp=lista;
		    	lista=new Appointment[size];
		    	while(count<size && count1<=size)
		    	{
					if(count==i)
					{
						count1++;
					}		
		    		lista[count]=temp[count1];
					count++;
					count1++;
				}
				delete []temp;
			}
			cout<<endl<<"updated appointments:"<<endl;
			for(int j=0;j<count-1;j++)
			{
				cout<<lista[j];
			}
			return true;
	}
	else
	{
		cout<<"invalid token number"<<endl;
		return false;
	}
}
void clinic::add_appointment(Appointment A,int size)
{
	Appointment *temp=lista;
	if(size>0)
	{
    	lista=new Appointment[size+1];
    	for(int i=0;i<size;i++)
    	{
    		lista[i]=temp[i];
		}
		delete []temp;
		temp=NULL;
	}
	lista[size]=A;
	
        	if(size>0)
		     {
				 cout<<endl<<"new appointment list"<<endl;
				for(int i=0;i<=size;i++)
				{
					cout<<lista[i];
				}
		     }
			else
			{
				cout<<A;
			}
	
}
void clinic::add_patient(Patient &P,int size )
{
	     listp[size]=P;
			 if(size>0)
		     {
				 cout<<endl<<"new list"<<endl;
				for(int i=0;i<=size;i++)
				{
					cout<<listp[i];
				}
		     }
			else
			{
				cout<<P;
			}
}
void clinic::add_doctor(Doctor D,int size )
{
	        listd[size]=D;
			  if(size>0)
			  {
				  cout<<endl<<"new list"<<endl;
				  for(int i=0;i<=size;i++)
				  {
				  	cout<<listd[i];
				  }
			  }
			  else
			  {
			  	cout<<D;
			  } 
}
clinic::clinic()
{
    listd=NULL;
    listp=NULL;
    lista=NULL;
}
clinic::clinic(Doctor *d,Patient *p,Appointment *a)
{	   
    listp=p;
	listd=d;
	lista=a;
}
clinic::~clinic()
{
	
	delete []listd;
	delete []listp;
	delete []lista;
}
int main()
{   
	Patient *P=new Patient[15];
	Doctor *D=new Doctor[15];
	Appointment *A=new Appointment[1];
	clinic general(D,P,A);
	int p=0,di=0, pid=0,age=0;
	long long nid=0;
	int d=0,m=0,y=0, h=0,mo=0,s=0,assigned_doc, year, month, day, tokenNum,token, count=0,doctorid,da,ma,ya;
	char distype[20],menu, specs[20], fi[10], la[10], dis_type[20] ,f[10],l[10];
	float fee_paid;
	bool check=false;
	
	char u[100];
	char c='a';
	int index=0;
	int r=0,g=0,x=0;
	int dobara=0;
	int arr[20];
	ifstream fin;
	fin.open("Patient.txt");
	if(!fin)
	{
		cout<<"file does not exist"<<endl;
	}
	else
	{
		while	(!fin.eof())
		{
		  	fin>>pid;
			fin.getline(u,100);
		    r=r+1;
			while(u[r]!=' ')
			{
				f[index]=u[r];
				r++;
				index++;
			}
			f[index+1]='\0';
			index=0;
			r++;
			while(u[r]!=' ')
			{
				l[index]=u[r]	;
				r++;
				index++;
			}
			l[index+1]='\0';
		    Name n(f,l);
		     r++;
		    d=convert(u,r);
		    mo=convert(u,r);    
		    y=convert(u,r);
		    age=convert(u,r);
		    nid=convert(u,r);
			Date vis_date(d,mo,y);
			pRecord R;
		    Patient w( pid,R,n,vis_date,age,nid);
		    general.add_patient(w,p);
		    p++;
		    r=0;
		}
		fin.close();
	}			   		
	fin.open("Patient - History.txt");
	if(!fin)
	{
		cout<<"file does not exist"<<endl;
	}
	else
	{
			while(!fin.eof())
		{
			  fin>>pid;
		       r=0,index=0;
			   fin.getline(u,100);
			   r++;
				while(u[r]!=' ')
				{
					distype[index]=u[r];
					r++;
					index++;
				}
				distype[index]='\0';
				index=0;
				r++;
		    day=convert(u,r);
		    month=convert(u,r);
			 year=convert(u,r);
			Date d(day,month,year);
			h=convert(u,r);
			m=convert(u,r);
		    s=convert(u,r);
			mTime t(h,m,s);
		    assigned_doc=convert(u,r);
		    fee_paid=convert(u,r);
		    pRecord rf(distype,d,t, assigned_doc,fee_paid);
		   general.update_history2(rf,pid,p);
	     }
		fin.close();
	}
	fin.open("Doctor.txt");
    if(!fin)
	{
		cout<<"file does not exist"<<endl;
	}
	else
	{
		while(!fin.eof())
		{
			  fin>>assigned_doc;
		       r=0,index=0;
			fin.getline(u,100);
			r=r+1;
			while(u[r]!=' ')
			{
				fi[index]=u[r];
				r++;
				index++;
			}
			fi[index+1]='\0';
			index=0;
			r++;
			while(u[r]!=' ')
			{
				la[index]=u[r]	;
				r++;
				index++;
			}
			la[index+1]='\0';
		    Name a(fi,la);
			  r++;
		    year=convert(u,r);
		    month=convert(u,r);
		    day=convert(u,r);
		    Date d(year,month,day);
		    age=convert(u,r);
		     nid=convert(u,r);
		     index=0;
			while(u[r]!=' ')
			{
				specs[index]=u[r]	;
				r++;
				index++;
			}
			specs[index+1]='\0';
			Doctor x(assigned_doc,specs,pid,a,d,age,nid);
			general.add_doctor(x,di);
			  pid=0;
			di++; 
		}
		fin.close();
	}
	fin.open("Patients visited.txt");
	if(!fin)
	{
		cout<<"files does not exist"<<endl;
	}
	else
	{
		r=0;
		while(!fin.eof())
		{
			x=1,g=0;
		   fin.getline(u,100);
		   while(u[g]!='\0')
		   {
		   	g++;
		   	x++;
		   }
		   x=x/2;
		   arr[r]=x;
		    r++;
		}
		fin.close();
	 }
	 x=0;
	 	fin.open("Patients visited.txt");
			while(x<r)
			{
			  fin>>assigned_doc;
				arr[x]--;
				while(arr[x]!=0)
				{
					fin>>pid;
					general.update_patients_visited(assigned_doc,pid,di);
					arr[x]--;
				}
				x++;
			}
			fin.close();
			
	fin.open("Appointment.txt");
    if(!fin)
	{
		cout<<"file does not exist"<<endl;
	}
	else
	{
		while(!fin.eof())
		{
			index=0,r=0;
			fin.getline(u,100);
			while(u[r]!=' ')
			{
				dis_type[index]=u[r]	;
				r++;
				index++;
			}
			dis_type[index]='\0';
			index=0,r++;
			pid=convert(u,r);
		    assigned_doc=convert(u,r);
		     day=convert(u,r);
		     month=convert(u,r);
		     year=convert(u,r);
		     
			Date d(day,month,year);
			h=convert(u,r);
			m=convert(u,r);
		    s=convert(u,r);
			mTime t(h,m,s);
		    tokenNum=convert(u,r);
		    fee_paid=convert(u,r);
			Appointment a(dis_type,pid,assigned_doc, d,t,tokenNum,fee_paid,false);
			general.add_appointment(a,count);
			count++;
			check=false;
		}
     }
	while(true)
	{
		cout<<endl<<endl;
		cout<<"WELCOME TO Al-SHEIKH HOSPITAL"<<endl<<endl;
		cout<<endl;
		cout<<"enter 0 if you want to add a new patient"<<endl;
		cout<<"enter 1 if you want to add a new doctor"<<endl;
		cout<<"enter 2 if you want to set an appointment"<<endl;
		cout<<"enter 3 if you want to update appointment"<<endl;
		cout<<"enter 4 to Print details of all pending appointments of a particular doctor"<<endl;
		cout<<"enter 5 to Print details of all pending appointments on a particular date"<<endl;
		cout<<"enter 6 to print details of patients of a particular doctor"<<endl;
		cout<<"enter 7 to print details of patients of a particular doctor on a particular date";
		cout<<"enter 8 if you want to print data of a patient"<<endl;
		cout<<"enter 9 if you want to print data of doctor"<<endl;
		cin>>menu;
		if(menu=='0')
		{
		    cout<<"enter first name of patient"<<endl;
		    cin>>f;
		    cout<<"enter last name of patient"<<endl;
		    cin>>l;
		    Name n(f,l);
			cout<<"enter patient id"<<endl;
			cin>>pid;
			cout<<"enter age of patient"<<endl;
			cin>>age;
			cout<<"enter id card number of patient"<<endl;
			cin>>nid;
			cout<<"enter disease type"<<endl;
			cin.ignore();
			cin.getline(distype,20);
			cout<<"enter day of vist in day:month:year"<<endl;
			cin>>d;
			cin>>mo;
			cin>>y;
			Date vis_date(d,mo,y);
			cout<<"enter time of vist in hour:min:Sec"<<endl;
			cin>>h;
			cin>>m;
			cin>>s;
			mTime vis_time(h,m,s);
			cout<<"enter assigned doctor id"<<endl;
			cin>>assigned_doc;
			cout<<"enter amount of fee paid"<<endl;
			cin>>fee_paid;
			cout<<endl;
			pRecord R(distype,vis_date, vis_time, assigned_doc,fee_paid);
		    Patient w( pid,R,n,vis_date,age,nid);
		    general.add_patient(w,p);
		    p++;
		    ofstream fout;
		    fout.open("Patient.txt",ios::app);
		    if(!fin)
		    {
		    	cout<<"file does not exist"<<endl;
			}
			else
			{
				fout<<endl;
				fout<<pid<<" "<<f<<" "<<l<<" "<<d<<" "<<mo<<" "<<y<<" "<<age<<" "<<nid<<" "<<0;
				fout.close();
			}
		}
		else if(menu=='1')
		{
			  cout<<"enter docter id"<<endl;
			  cin>>assigned_doc;
			cout<<"enter sepcialization of doctor"<<endl;
			cin.ignore();
			cin.getline(specs,20);
			cout<<"enter patient id"<<endl;
			cin>>pid;
		    cout<<"enter first name of doctor"<<endl;
		    cin>>fi;
		    cout<<"enter last name doctor"<<endl;
		    cin>>la;
		    Name a(fi,la);
		    cout<<"enter date of birth of doctor in year:month:day"<<endl;
		    cin>>year;
		    cin>>month;
		    cin>>day;
		    Date d(year,month,day);
		    cout<<"enter age of docter"<<endl;
		    cin>>age;
		    cout<<"enter national identity card no of docter"<<endl;
		    cin>>nid;
			Doctor x(assigned_doc,specs,pid,a,d,age,nid);
			general.add_doctor(x,di);
			di++; 
			ofstream fout;
		    fout.open("Doctor.txt",ios::app);
		    if(!fin)
		    {
		    	cout<<"file does not exist"<<endl;
			}
			else
			{
				fout<<endl;
				fout<<assigned_doc<<" "<<fi<<" "<<la<<" "<<day<<" "<<month<<" "<<year<<" "<<age<<" "<<nid<<" "<<specs;
				fout.close();
			}
		}
		else if(menu=='2')
		{
			cout<<"enter disease type"<<endl;
			cin>>dis_type;
			cout<<"enter patient id"<<endl;
			cin>>pid;
			cout<<"enter doctor id"<<endl;
			cin>>assigned_doc;
			cout<<"give appintment date in day :month :year"<<endl;
			cin>>day;
			cin>>month;
			cin>>year;
			Date d(year,month,day);

			cout<<"give appintment time in hour :min :sec"<<endl;
			cin>>h;
			cin>>m;
			cin>>s;
			mTime t(h,m,s);
			cout<<"enter token number"<<endl;
			cin>>tokenNum;
			cout<<"enter fee"<<endl;
			cin>>fee_paid;
			Appointment a(dis_type,pid,assigned_doc, d,t,tokenNum,fee_paid,false);
			general.add_appointment(a,count);
			count++;
			ofstream fout;
			 fout.open("Appointment.txt",ios::app);
		    if(!fin)
		    {
		    	cout<<"file does not exist"<<endl;
			}
			else
			{
				fout<<endl;
				fout<<dis_type<<" "<<pid<<" "<<assigned_doc<<" "<<day<<" "<<month<<" "<<year<<" "<<h<<" "<<m<<" "<<s<<" "<<tokenNum<<" "<<fee_paid<<" "<<0;
				fout.close();
			}
		}
		else if(menu=='3')
		{
			cout<<"enter token number of appointment"<<endl;
			cin>>token;
		check=	general.update_appointment(token,count,di,p);
			if(check==true)
			{
				general.update_patients_visited_in_file(di);
				count--;							
			}
		}
		else if (menu=='4')
		{
			cout<<"enter doctor id"<<endl;
			cin>>doctorid;
	     	general.print_details_of_pending_appointments_of_a_doctor( doctorid,count);
		}
		else if (menu=='5')
		{
			cout<<"enter date in date/month /year format"<<endl;
			cin>>da;
			cin>>ma;
			cin>>ya;
			general.print_details_of_pending_appointments_on_a_date(da,ma,ya,count);
		}
		else if(menu=='6')
		{
			cout<<"enter doctor id"<<endl;
			cin>>doctorid;
			general.print_details_of_same_doc( doctorid,di,p);
		}
		else if(menu=='7')
		{
			cout<<"enter docter id"<<endl;
				cin>>doctorid;
				cout<<"enter date in form of day /month /year"<<endl;
			cin>>da;
			cin>>ma;
			cin>>ya;
			general.print_details_on_a_date(doctorid,di,p,da,ma,ya);
		}
		else if(menu=='8')
		{
			cout<<"enter pid of patient you want to print"<<endl;
			cin>>pid;
			general.print_patient(pid,p);
		}
		else if(menu=='9')
		{
			cout<<"enter did of doctor you want to print"<<endl;
			cin>>assigned_doc;
			general.print_doctor(assigned_doc,d);
		}
		else
		{
			cout<<"invalid value"<<endl;
		}
	}
}



