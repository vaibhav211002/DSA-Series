#include <bits/stdc++.h>
#include <windows.h>//for sleep
#include <unistd.h>//for sleep
#include <cstdlib>//for system pause
using namespace std;

void createAccount(char userType[]);
bool login(char userType[]);
void displayMenu(char userType[]);


void createAccount(char userType[])
{


    cout<<"\n\t\t\t\t\t =================================="<<endl;
    cout<<"\n\t\t\t\t\t ACCOUNT CREATION WINDOW "<<endl;
    cout<<"\n\t\t\t\t\t =================================="<<endl;


    string username, password;
    system("cls");
    for (int i = 0; i < 4; i++)
    {
        Sleep(1000);//one second delay
        cout << ".";
    }


    cout << "\n\t\t\t\t\t Enter username: ";
    cin >> username;


    cout << "\n\t\t\t\t\t Enter password: ";
    cin >> password;


    ofstream outfile;


    if (strcmp(userType, "buyer") == 0)
    {
        outfile.open("buyers.txt", ios::app);
    }
    else if (strcmp(userType, "seller") == 0)
    {
        outfile.open("sellers.txt", ios::app);
    }


    outfile << username << " " << password << endl;

    outfile.close();
    system("cls");
    cout<<"\n\t\t\t\t\t ";
    cout<<"verifying";
    for (int i = 0; i < 4; i++)
    {
        Sleep(1000);//one second delay
        cout << ".";
    }

    system("cls");

    cout << "\n\t\t\t\t\t Account created successfully!" << endl;

    sleep(3);
}




bool login(char userType[])
{
    system("cls");
    cout<<"\n\t\t\t\t\t =================================="<<endl;
    cout<<"\n\t\t\t\t\t LOGIN WINDOW "<<endl;
    cout<<"\n\t\t\t\t\t =================================="<<endl;
    string username, password;
    cout << "\n\t\t\t\t\t Enter username: ";
    cin >> username;

    cout << "\n\t\t\t\t\t Enter password: ";
    cin >> password;

    ifstream infile;
    string line;

    if (strcmp(userType, "buyer") == 0)
    {
        infile.open("buyers.txt");
    }
    else if (strcmp(userType, "seller") == 0)
    {
        infile.open("sellers.txt");
    }
    while (getline(infile, line))
    {
        if (line.find(username + " " + password) != string::npos) {
            infile.close();
            system("cls");
            cout<<"\n\t\t\t\t\t ";
            cout<<"verifying";
            for (int i = 0; i < 4; i++)
            {
                Sleep(1000);//one second delay
                cout << ".";
            }

            system("cls");
            cout << "\n\t\t\t\t\t Login successful!" << endl;
            cout<<endl;
            return true;
        }
    }
    infile.close();
    cout << "\n\t\t\t\t\t Invalid username or password. Please try again." << endl;
    return false;
}


class buyer
{

    public:
    buyer()
    {
        system("cls");
        
        int choice;
        do
        {
            cout<<"\n\t\t\t\t\t 1. BUY AGAIN "<<endl;
            cout<<"\n\t\t\t\t\t 2. EXIT "<<endl;
            cout<<"\n\t\t\t\t\t "<<endl;
            cout<<"\n\t\t\t\t\t ENTER CHOICE ";
            cin>>choice;
            system("cls");


            
            switch(choice)
            {
                case 1:
                {
                    cout<<"\n\t\t\t\t\t ----------------------------------------------"<<endl;
                    cout<<"\n\t\t\t\t\t welcome"<<endl;
                    cout<<"\n\t\t\t\t\t ----------------------------------------------"<<endl;
                    cout<<"\n\n\n\n\n\n\n\n";
                    cout<<"\n\n\n\n\n\n\n\n";
                    cout<<"\n\t\t\t\t\t CHOOSE THE OPTIONS BELOW "<<endl;
                    cout<<endl;
                    cout<<endl;
                    int c;

                    //MAIN MENU OF BUYER

                    cout<<"\n\t\t\t\t\t 1 : VIEW ALL CARS "<<endl;
                    cout<<"\n\t\t\t\t\t 2 : TYPE CARS "<<endl;
                    cout<<"\n\t\t\t\t\t SELECT OPTION : " ;
                    cin>>c;
                    system("cls");

                    if(c==1)
                    {


                        //ALL TYPES OF CARS 

                        cout<<"\n\t\t\t\t\t ALL TYPES OF CARS "<<endl;
                        cout<<endl;
                        ifstream file;
                        string line;
                        file.open("full.txt");
                        if(file.is_open())
                        {
                            while(getline(file,line,'\n'))
                            {
                            cout<<line<<endl;
                            }
                        }

                        cout<<endl;
                        string number;

                        cout<<"\n\t\t\t\t\t TO SEE ANY PARTICULAR CAR ENTER THE CAR NUMBER BELOW "<<endl;

                        fflush(stdin);
                        getline(cin,number);

                        cout<<"\n\t\t\t\t\t DISPLAYING THE DETAILS OF "<<number<<" BELOW :: "<<endl;
                        ifstream d;
                        string filename;
                        string sample=".txt";
                        filename=number+sample;
                        d.open(filename);
                        if(d.is_open())
                        {
                            while(getline(d,line,'\n'))
                            {
                            cout<<line<<endl;
                            }
                        }

                        //FILENAME=NUM
                        //REC=NAME+SAMPLE
                        //MAIN

                                    cout<<"\n\t\t\t\t\t IF INTERESTED TO BUY A CAR REPLY YES OR NO ::";
                        
                        string a,car;
                        cin>>a;
                        string no,name;

                        // BUYING OF THE CAR

                        cout<<"\n\t\t\t\t\t ENTER THE CAR NUMBER : "<<endl;
                        fflush(stdin);
                        getline(cin,no);
                        cout<<"\n\t\t\t\t\t NAME OF BUYER " ;
                        fflush(stdin);
                        getline(cin,name);
                        cout<<"\n\t\t\t\t\t NAME OF CAR " ;
                        fflush(stdin);
                        getline(cin,car);
                        //string line;

                        
                        
                        //string sample=".txt";
                        string num=no+sample;
                        string main=car+sample;
                        string rec=name+sample;

                        ofstream A;
                        A.open(rec,ios::app);
                        A<<"\n\t\t\t\t\t NAME OF BUYER : "+name<<"\n";
                        A.close();


                        ifstream s;
                        //ofstream d;
                        
                        s.open(filename);
                        A.open(rec,ios::app|ios::ate);

                        //RECIEPT PRINTING 

                        if(a=="YES" || a=="yes")
                        {



                            if(!s.is_open())
                            {
                                cout<<"not open 1"<<endl;
                            }

                            if(!d.is_open())
                            {
                                cout<<"not open 2"<<endl;
                            }

                            while(getline(s,line))
                            {
                                A<<line<<endl;
                            }


                        }
                        else
                        {
                            cout<<"no buy"<<endl;
                        }


                        cout<<"\n\t\t\t\t\t YOUR RECIEPT IS GENERATED "<<endl;
                        s.close();
                        A.close();
                        //deletion of files
                            //string line;


                        //DELETION OF THE FILE 

                        ifstream j;
                        j.open(main);
                        
                        string content((istreambuf_iterator<char>(j)),istreambuf_iterator<char>());
                        ifstream L;
                        
                        L.open(num);
                        
                        string sub((istreambuf_iterator<char>(L)),istreambuf_iterator<char>());
                        L.close();

                        int start = content.find(sub);
                        if (start!=string::npos)
                        {
                            content.erase(start,sub.length());
                        }
                        j.close();
                        L.close();

                        


                        ofstream i;
                        i.open(main);
                        i<<content<<endl;
                        i.close();

                        remove(num.c_str());

                        break;
                        
                    }
               

                    if(c==2)
                    {
                        //PARTICULAR TYPES OF CARS 

                        cout<<"\n\t\t\t\t\t ALL TYPES OF CARS "<<endl;
                        cout<<endl;
                        int k=1;
                        string name1;
                        ifstream file;
                        file.open("menu.txt");
                        if(file.is_open())
                        {
                            while(getline(file,name1,'\n'))
                            {
                                cout<<k<<" "<<name1<<endl;
                                k++;
                            }
                        }

                        cout<<endl;

                        cout<<"\n\t\t\t\t\t CHOOSE THE CAR YOU WANT TO SEE THE MODEL AND VARIETY OF :: ";
                        string car_type;
                        fflush(stdin);
                        getline(cin,car_type);

                        string sample=".txt";
                        string main=car_type+sample;

                        ifstream fil;
                        fil.open(main);

                        //DISPLAY OF PARTICULAR TYPE OF CAR 

                        if(fil.is_open())
                        {
                            while(getline(fil,name1,'\n'))
                            {
                                cout<<name1<<endl;
                            }
                        }
                        else{
                            cout<<"\n\t\t\t\t\t NOT OPEN"<<endl;
                        }
                        fil.close();




                        cout<<"\n\t\t\t\t\t IF INTERESTED TO BUY A CAR REPLY YES OR NO ::";
                        
                        string a;
                        cin>>a;
                        string no,name;

                        // BUYING OF THE CAR

                        cout<<"\n\t\t\t\t\t ENTER THE CAR NUMBER : ";
                        fflush(stdin);
                        getline(cin,no);
                        cout<<"\n\t\t\t\t\t NAME OF BUYER " ;
                        fflush(stdin);
                        getline(cin,name);
                        string line;

                        
                        
                        //string sample=".txt";
                        string num=no+sample;
                        string rec=name+sample;

                        ofstream d;
                        d.open(rec,ios::app);
                        d<<"\n\t\t\t\t\t NAME OF BUYER : "+name<<"\n";
                        d.close();


                        ifstream s;
                        //ofstream d;
                        
                        s.open(num);
                        d.open(rec,ios::app|ios::ate);

                        //RECIEPT PRINTING 

                        if(a=="YES" || a=="yes")
                        {



                            if(!s.is_open())
                            {
                                cout<<"not open 1"<<endl;
                            }

                            if(!d.is_open())
                            {
                                cout<<"not open 2"<<endl;
                            }

                            while(getline(s,line))
                            {
                                d<<line<<endl;
                            }


                        }
                        else
                        {
                            cout<<"no buy"<<endl;
                        }


                        cout<<"\n\t\t\t\t\t YOUR RECIEPT IS GENERATED "<<endl;
                        s.close();
                        d.close();
                        //deletion of files
                            //string line;


                        //DELETION OF THE FILE 

                        ifstream j;
                        j.open(main);
                        
                        string content((istreambuf_iterator<char>(j)),istreambuf_iterator<char>());
                        ifstream L;
                        
                        L.open(num);
                        
                        string sub((istreambuf_iterator<char>(L)),istreambuf_iterator<char>());
                        L.close();

                        int start = content.find(sub);
                        if (start!=string::npos)
                        {
                            content.erase(start,sub.length());
                        }
                        j.close();
                        L.close();

                            


                        ofstream i;
                        i.open(main);
                        i<<content<<endl;
                        i.close();

                        remove(num.c_str());
                        break;
                    }
                }
                case 2:
                {
                    cout<<"\n\t\t\t\t\t EXITING THE BUYER WINDOW ";
                    system("cls");
                    cout<<"\n\t\t\t\t\t ";
                    for (int i = 0; i < 4; i++)
                    {
                        Sleep(1000);//one second delay
                        cout << ".";
                    }
                    sleep(2);

                    return ;
                }
                default:
                {
                   cout<<"\n\t\t\t\t\t INVALID CHOICE "<<endl;
                   system("cls");
                   break;
                }
            }   
        }while(choice!=2);
    }
};



class seller
{

    string name,fuel_type,engine,features,number,price;
    string seat_capa,tank_capacity,km_travel,service,link;
public:
    seller()
    {
        int choice;
        do {
                sleep(3);
                system("cls");

                cout<<"\n\t\t\t\t\t WELCOME TO SELL YOUR  CAR :) "<<endl;
                
                cout<<"\n\t\t\t\t\t CONNECTING ";
                for (int i = 0; i < 4; i++)
                {
                    Sleep(1000);//one second delay
                    cout << ".";
                }
                sleep(2);
                system("cls");

                // MENU OF THE SELLING

                cout<<"\n\t\t\t\t\t WELCOME TO SELL YOUR  CAR :) "<<endl;
                cout<<"\n\n\n\n\n";
                cout<<"\n\t\t\t\t\t FOR THE ENTRY TO ADD NEW CAR ENTER ALL THE DETAILS OF THE CAR :: "<<endl;
                cout<<"\n\t\t\t\t\t ";
                cout<<"\n\t\t\t\t\t ";
                cout<<"\n\t\t\t\t\t 1 . TO ENTER NEW CAR ";
                cout<<"\n\t\t\t\t\t 2 . TO EXIT  ";
                cout<<"\n\t\t\t\t\t ";
                cout<<"\n\t\t\t\t\t YOUR CHOICE : ";
                
                cin>>choice;

                switch(choice)
                {
                    case 1:
                    {
                        cout<<"\n\t\t\t\t\t ENTER CAR DETAILS : ";
                        fflush(stdin);
                        getline(cin,name);
                        cout<<endl;

                        cout<<"\n\t\t\t\t\t ENTER CAR NUMBER : ";
                        fflush(stdin);
                        getline(cin,number);
                        cout<<endl;

                        cout<<"\n\t\t\t\t\t ENTER OFFERED PRICE : ";
                        fflush(stdin);
                        getline(cin,price);
                        cout<<endl;

                        cout<<"\n\t\t\t\t\t SEATING CAPACITY : ";
                        fflush(stdin);
                        cin>>seat_capa;
                        cout<<endl;

                        cout<<"\n\t\t\t\t\t FUEL TYPE : ";
                        fflush(stdin);
                        getline(cin,fuel_type);
                        cout<<endl;

                        cout<<"\n\t\t\t\t\t ENGINE DETAILS : ";
                        fflush(stdin);
                        getline(cin,engine);
                        cout<<endl;

                        cout<<"\n\t\t\t\t\t TANK CAPACITY : ";
                        fflush(stdin);
                        cin>>tank_capacity;
                        cout<<endl;

                        cout<<"\n\t\t\t\t\t KILOMETERS TRAVELLED : ";
                        fflush(stdin);
                        cin>>km_travel;
                        cout<<endl;

                        cout<<"\n\t\t\t\t\t NUMBER OF SERVICING DONE : ";
                        fflush(stdin);
                        cin>>service;
                        cout<<endl;

                        cout<<"\n\t\t\t\t\t ENTER THE KEY FEATURES OF THE CAR :: "<<endl;
                        fflush(stdin);
                        cout<<endl;
                        cout<<"\n\t\t\t\t\t ";
                        getline(cin,features);
                        cout<<endl;

                        cout<<"\n\t\t\t\t\t ADD IMAGE : ";
                        fflush(stdin);
                        cin>>link;
                        cout<<endl;

                        string sample=".txt";
                        string filename=number+sample;

                        system("cls");
                        cout<<"\n\t\t\t\t\t THE DATA IS BEING ADDED TO OUR SERVER";
                        for (int i = 0; i < 4; i++)
                        {
                            Sleep(1000);//one second delay
                            cout << ".";
                        }

                        // WRITING INTO INDIVIDUAL FILE 

                        ofstream myfile(filename,ios::ate|ios::app);
                        myfile<<"-------------------------------------------------\n";
                        myfile<<"IMAGE LINK : "+link+"\n";
                        myfile<<"CAR NUMBER : "+number+"\n";
                        myfile<<"CAR NAME : "+name+"\n";
                        myfile<<"CAR OFFERED PRICE : "+price+"\n";
                        myfile<<"SEATING CAPACITY : ";
                        myfile<<seat_capa+"\n";
                        myfile<<"FUEL TYPE : "+fuel_type+"\n";
                        myfile<<"ENGINE DETAILS : "+engine+"\n";
                        myfile<<"TANK CAPACITY : ";
                        myfile<<tank_capacity+"\n";
                        myfile<<"KILOMETERS TRAVELLED : ";
                        myfile<<km_travel+"\n";
                        myfile<<"NUMBER OF SERVICING DONE : ";
                        myfile<<service+"\n";
                        myfile<<"EXTRA FEATURES : "+features+"\n";

                        myfile.close();
                        system("cls");
                        cout<<"\n\n\n";
                        cout<<"\n\t\t\t\t\t ALL DATA IS BEING ADDED TO OUR SERVER WHICH WILL REFLECT SHORTLY ";


                        for (int i = 0; i < 4; i++)
                        {
                            Sleep(1000);//one second delay
                            cout << ".";
                        }

                        system("cls");

                        //creation of new car list
                        int c=0;
                        string line;
                        ifstream w;
                        w.open("menu.txt");
                        while (getline(w,line,'\n'))
                        {
                            if (line.find(name)!=string::npos)
                            {
                                c++;

                            }
                        }
                        w.close();

                        //CREATION AND CHECKING OF THE MENU FILE

                        ofstream r;
                        r.open("menu.txt",ios::app);
                        if(c==0)
                        {
                            r<<name+"\n";
                        }
                        r.close();


                        string car_name=name+sample;

                        ofstream mainfil(car_name,ios::ate|ios::app);
                        mainfil<<"-------------------------------------------------\n";
                        mainfil<<"IMAGE LINK : "+link+"\n";
                        
                        mainfil<<"CAR NUMBER : "+number+"\n";
                        mainfil<<"CAR NAME : "+name+"\n";
                        mainfil<<"CAR OFFERED PRICE : "+price+"\n";
                        mainfil<<"SEATING CAPACITY : ";
                        mainfil<<seat_capa+"\n";
                        mainfil<<"FUEL TYPE : "+fuel_type+"\n";
                        mainfil<<"ENGINE DETAILS : "+engine+"\n";
                        mainfil<<"TANK CAPACITY : ";
                        mainfil<<tank_capacity+"\n";
                        mainfil<<"KILOMETERS TRAVELLED : ";
                        mainfil<<km_travel+"\n";
                        mainfil<<"NUMBER OF SERVICING DONE : ";
                        mainfil<<service+"\n";
                        mainfil<<"EXTRA FEATURES : "+features+"\n";
                        mainfil.close();







                        //CREATION AND ENTRY OF THE FULL DISPLAY OF CARS 


                        ofstream mainfile("full.txt",ios::ate|ios::app);
                        mainfile<<"-------------------------------------------\n";
                        mainfile<<"CAR NUMBER : "+number+"\n";
                        mainfile<<"CAR NAME : "+name+"\n";
                        mainfile<<"IMAGE LINK : "+link+"\n";
                        mainfile<<"CAR OFFERED PRICE : "+price+"\n";
                        mainfile.close();

                        string name1;

                        cout<<"\n\t\t\t\t\t DATA TO BE ADDED ";
                        cout<<"\n\t\t\t\t\t --------------------------------------------";

                        cout<<"\n\t\t\t\t\t CAR DATA OF "<<name<<" "<<number<<" IS BEING ADDED :: "<<endl;
                        ifstream file;
                        file.open(filename);
                        if(file.is_open())
                        {
                            while(getline(file,name1,'\n'))
                            {
                                cout<<name1<<endl;
                            }
                        }

                        system("cls");
                        cout<<"\n\t\t\t\t\t ALL DATA HAS BEEN ADDED TO OUR SERVER WILL REFLECTED SHORTLY ";

                        system("cls");
                        int k=0;

                        for (int i = 0; i < 3; i++)
                        {
                            
                            cout<<"\n\t\t\t\t\t ";
                            Sleep(1000);//one second delay
                            cout <<k++<<" "<<"seconds"<<endl;
                            sleep(1);
                            system("cls");
                        }

                        cout<<"\n\t\t\t\t\t ALL DATA HAS BEEN ADDED :) "<<endl;

                        sleep(3);
                        break;
                    }
                
                    case 2:
                    {
                        cout<<"\n\t\t\t\t\t EXITING SELLER PORTAL "<<endl;
                        system("cls");
                        return;
                    }
                    default:
                        cout<<"\n\t\t\t\t\t INVALID CHOICE "<<endl;
                        system("cls");
                        break;
            }
        }while(choice!=2);
            
    }

};




//MENU DISPLAY

void displayMenu(char userType[]) {
    int choice;
    do {
        system("cls");
        cout<<"\n\t\t\t\t\t CONNECTING THE SYSTEM ";
        for (int i = 0; i < 4; i++)
        {
            Sleep(1000);//one second delay
            cout << ".";
        }

        sleep(2);
        system("cls");
        cout << "\n\t\t\t\t\t Welcome to the " << userType << " management system." << endl;

        cout<<endl;
        cout << "\n\t\t\t\t\t 1. Create account" << endl;
        cout<<endl;
        cout << "\n\t\t\t\t\t 2. Login" << endl;
        cout<<endl;
        cout << "\n\t\t\t\t\t 3. Exit" << endl;
        cout<<endl;
        cout << "\n\t\t\t\t\t Enter your choice: ";
        //cout<<endl;
        cin >> choice;
        switch (choice) {
            case 1:
                createAccount(userType);
                cout<<endl;
                break;
            case 2:
                if (login(userType))
                {
                    // Do something after login
                    cout << "Login successful. Proceeding to main menu." << endl;
                    if(userType=="buyer")
                    {
                        buyer B;
                        return ;
                    }
                    else
                    {
                        seller S;
                        return ;
                    }
                }
                break;
            case 3:
                cout << "Exiting..." << endl;
                cout<<endl;
                cout<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                cout<<endl;
                cout<<endl;
                break;
        }
    } while (choice != 3);
}


int main()
{
    system("color 70");
    system("cls");

    cout<<"\t\t\t\t\t ========================================="<<endl;
    cout<<"\t\t\t\t\t CAR SELLING SYSTEM "<<endl;
    cout<<"\t\t\t\t\t We Sell The Car You Want"<<endl;
    cout<<"\t\t\t\t\t ========================================="<<endl;

    sleep(3);
    system("cls");
    cout<<"\t\t\t\t\t ========================================="<<endl;
    cout<<"\t\t\t\t\t CAR SELLING SYSTEM "<<endl;
    cout<<"\t\t\t\t\t ========================================="<<endl;



    int choice;
    do {
        cout<<"\t\t\t\t\t Select user type:" << endl;
        cout<<endl;
        cout<< "\n\t\t\t\t\t 1. Buyer" << endl;
        cout<<endl;
        cout << "\n\t\t\t\t\t 2. Seller" << endl;
        cout<<endl;
        cout << "\n\t\t\t\t\t 3. Exit" << endl;
        cout<<endl;
        cout << "\n\t\t\t\t\t Enter your choice: ";
        //cout<<endl;
        cin >> choice;
        switch (choice) {
            case 1:
                displayMenu("buyer");
                cout<<endl;
                cout<<endl;
                break;
            case 2:
                displayMenu("seller");
                cout<<endl;
                cout<<endl;
                break;
            case 3:
                cout <<"\n\t\t\t\t\t Exiting..." << endl;
                cout<<endl;
                cout<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                cout<<endl;
                break;
        }
    } while (choice != 3);
}
