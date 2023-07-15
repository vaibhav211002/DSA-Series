#include <bits/stdc++.h>
using namespace std;






class buyer
{

    public:
    buyer()
    {
        cout<<"welcome"<<endl;
        cout<<"\n\n\n\n\n\n\n\n";
        cout<<"\n\n\n\n\n\n\n\n";
        cout<<"CHOOSE THE OPTIONS BELOW "<<endl;
        cout<<endl;
        cout<<endl;
        int c;
        cout<<"1 : VIEW ALL CARS "<<endl;
        cout<<"2 : TYPE CARS "<<endl;
        cin>>c;

        if(c==1)
        {
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
            cout<<"-------------------------------------------\n";

            cout<<endl;
            string number;

            cout<<"TO SEE ANY PARTICULAR CAR ENTER THE CAR NUMBER BELOW "<<endl;

            fflush(stdin);
            getline(cin,number);

            cout<<"DISPLAYING THE DETAILS OF "<<number<<" BELOW :: "<<endl;
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

        }

        if(c==2)
        {
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

            cout<<"CHOOSE THE CAR YOU WANT TO SEE THE MODEL AND VARIETY OF :: "<<endl;
            string car_type;
            fflush(stdin);
            getline(cin,car_type);

            string sample=".txt";
            string main=car_type+sample;

            ifstream fil;
            fil.open(main);
            if(fil.is_open())
            {
                while(getline(fil,name1,'\n'))
                {
                    cout<<name1<<endl;
                }
            }
            else{
                cout<<"NOT OPEN"<<endl;
            }
            fil.close();



        }

        cout<<"IF INTERESTED TO BUY A CAR REPLY YES OR NO"<<endl;
        
        string a;
        cin>>a;
        string no,name;
        cout<<"ENTER THE CAR NUMBER : "<<endl;
        fflush(stdin);
        getline(cin,no);
        cout<<"NAME OF BUYER " ;
        fflush(stdin);
        getline(cin,name);
        string line;

        
        
        string sample=".txt";
        string num=no+sample;
        string rec=name+sample;

        ofstream d;
        d.open(rec,ios::app);
        d<<"NAME OF BUYER : "+name<<"\n";
        d.close();


        ifstream s;
        //ofstream d;
        
        s.open(num);
        d.open(rec,ios::app|ios::ate);


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
        s.close();
        d.close();














        //deletion
    }
};










int main()
{
    buyer b;
    return 0;
}