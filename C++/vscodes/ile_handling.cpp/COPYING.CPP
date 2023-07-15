#include <iostream>
#include <fstream>
using namespace std;

int main() {

        ofstream myfile("mains.txt",ios::ate|ios::app);
        myfile<<"vaibhav bhatt\n";
        myfile<<"its vipul\n";
        myfile<<"@\n";
        
        myfile.close();

        
        // ofstream myfil("dest.txt",ios::ate|ios::app);
        // myfil<<" ";

        //myfil.close();
        string line;
        string sample=".txt";
        string final="dest";
        string f=final+sample;

        cout<<f<<endl;


        ifstream file("dest.txt");
        file.open("dest.txt");
        if(file.is_open())
        {
            while(getline(file,line,'\n'))
            {
                cout<<line<<endl;
            }
        }
        file.close();

        ifstream s("mains.txt");
        ofstream d("dest.txt");
        if (!s.is_open()) {
            std::cout << "Failed to open the source file." << std::endl;
            return 1;
        }

        if (!d.is_open()) {
            std::cout << "Failed to open the destination file." << std::endl;
            return 1;
        }


        while (getline(s, line)) {
            d << line << endl;
        }

        s.close();
        d.close();

        cout << "Content copied successfully." <<endl;

        ifstream a(f);
        //a.open(f);
        if(a.is_open())
        {
            while(getline(a,line,'\n'))
            {
                cout<<line<<endl;
            }
        }
        a.close();

        string lin="vipul";
        int num=0;

        ofstream temp("temp.txt");

        ifstream w;
        w.open(f);

        int c=0;
        

        while (getline(w,line,'\n'))
        {
            if(line.find(lin)!=string::npos)
            {num++;
            }
        }       
        string l="@";


        while(getline(w,line,'\n'))
        {
            if(line==l)
            {
                c++;

            }
        }      
        w.close();
        temp.close();

        // remove(f.c_str());
        // rename("temp.txt", f.c_str());


        cout<<num<<" "<<c<<endl;

        int i;
        i=remove(f.c_str());
        cout<<"val : "<<i<<endl;








        return 0;


        












    // std::ifstream sourceFile("source.txt");
    // std::ofstream destinationFile("destination.txt");

    // if (!sourceFile.is_open()) {
    //     std::cout << "Failed to open the source file." << std::endl;
    //     return 1;
    // }

    // if (!destinationFile.is_open()) {
    //     std::cout << "Failed to open the destination file." << std::endl;
    //     return 1;
    // }

    // std::string line;
    // while (std::getline(sourceFile, line)) {
    //     destinationFile << line << std::endl;
    // }

    // sourceFile.close();
    // destinationFile.close();

    // std::cout << "Content copied successfully." << std::endl;

    // return 0;
}
