#include <bits/stdc++.h>
#include <windows.h>//for sleep
#include <unistd.h>//for sleep
#include <cstdlib>//for system pause
using namespace std;





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
        }while(choice!=2 && choice!=1);
            
    }

};

int main()
{
    seller o;
}











        