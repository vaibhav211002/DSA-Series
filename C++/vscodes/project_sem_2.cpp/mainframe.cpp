#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;


class mainline{
    public:

    int choice;
    do {
        cout << "Welcome to the " << userType << " management system." << endl;

        cout<<endl;
        cout << "1. Create account" << endl;
        cout<<endl;
        cout << "2. Login" << endl;
        cout<<endl;
        cout << "3. Exit" << endl;
        cout<<endl;
        cout << "Enter your choice: ";
        cout<<endl;
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
                    cout<<endl;
                    cout<<endl;
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


void mainframe()
{
    int choice;
    do {
        cout << "Select user type:" << endl;
        cout<<endl;
        cout << "1. Buyer" << endl;
        cout<<endl;
        cout << "2. Seller" << endl;
        cout<<endl;
        cout << "3. Exit" << endl;
        cout<<endl;
        cout << "Enter your choice: ";
        cout<<endl;
        cin >> choice;
        switch (choice) {
            case 1:
                displayMenu("buyer");
                cout<<endl;
                cout<<endl;
                break;
            case 2:
                displayMenu("seller");
                inputobject();
                cout<<endl;
                cout<<endl;
                break;
            case 3:
                cout << "Exiting..." << endl;
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



class create_account{
    string username,password;

    public:
    
    create_account()
    {
    cout << "Enter username: ";
    cin >> username;
    
    cout << "Enter password: ";
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
    cout << "Account created successfully!" << endl;
    }

}
// Function to create a new account


// Function to login
bool login(char userType[]) 
{
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    
    cout << "Enter password: ";
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
            cout << "Login successful!" << endl;
            cout<<endl;
            return true;
        }
    }
    infile.close();
    cout << "Invalid username or password. Please try again." << endl;
    return false;
}




//seller object function 

void inputobject()
{
    cout<<"WELCOME TO THE SELLER"<<endl;

}

// Function to display the menu
void displayMenu(char userType[]) {
    int choice;
    do {
        cout << "Welcome to the " << userType << " management system." << endl;

        cout<<endl;
        cout << "1. Create account" << endl;
        cout<<endl;
        cout << "2. Login" << endl;
        cout<<endl;
        cout << "3. Exit" << endl;
        cout<<endl;
        cout << "Enter your choice: ";
        cout<<endl;
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
                    cout<<endl;
                    cout<<endl;
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

int main() {
    mainframe();
    return 0;
}