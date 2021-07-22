#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring>
#include <windows.h>

using namespace std;

class Employee{
private:
    string empid;
    string emp, password_employee, proffession, email_employee, addr_employee;
    long long phone_no_emp;
    double employee_annual_income;
    static int count;
public:
    void insertEmp(){
        fflush(stdin);
        this->empid = to_string(count);
        cout << "Enter the Name of the Employee: " << endl;
        getline(cin, emp);
        cout << "Enter the Employee Profession: " << endl;
        getline(cin, proffession);
        cout << "Enter the Employee Email Address: " << endl;
        getline(cin, email_employee);
        cout << "Enter the Employee Address: " << endl;
        getline(cin, addr_employee);
        cout << "Enter the Employee Annaul Income: " << endl;
        cin >> employee_annual_income;
        cout << "Enter the Employee Current Moblie Number: " << endl;
        cin >> phone_no_emp;
        fflush(stdin);
        cout << "Enter the Password of an Employee: " << endl;
        cin >> password_employee;
    }

    void insertEmpdef(string n, string prof, string email, string addr, double sal, long long ph, string pswd){
        this->password_employee = pswd;
        this->employee_annual_income = sal;
        this->emp = n;
        this->proffession = prof;
        this->phone_no_emp = ph;
        this->email_employee = email;
        this->addr_employee = addr;
        count++;
        this->empid = to_string(count);
    }
    void display_Employee_details(){
        cout << endl
             << "Employee ID: " << empid << endl
             << "Employee Name: " << emp << endl
             << "Profession: " << proffession << endl
             << "Email Address: " << email_employee << endl
             << "Home Address: " << addr_employee << endl
             << "Annual Income: " << employee_annual_income << endl
             << "Moblie Number: " << phone_no_emp << endl
             << "Password: " << password_employee << endl;
        cout << "---------------------------------------------------------------" << endl;
    }
    string getEid()
    {
        return empid;
    }
    string getPassword()
    {
        return password_employee;
    }
    void updateEmp(){
        int ch, val;
        string vals;
        double vald;
        long long vall;
        cout << "\t\t\t\t\tLOADING..." << endl;
        Sleep(1000);
        system("CLS");
        while (true){
            cout << "Type:" << endl
                 << "1: To Update Name" << endl
                 << "2: To Update Profession" << endl
                 << "3. To Update Email Address" << endl
                 << "4. To Update Home Address" << endl
                 << "5: To Update Annual Income" << endl
                 << "6: To Update Mobile Number" << endl
                 << "7: To Update Password" << endl
                 << "8: To Exit" << endl
                 << "Enter Your Type: ";
            cin >> ch;
            switch (ch) {
            case 1:
                fflush(stdin);
                cout << "Enter New Name:";
                getline(cin, vals);
                this->emp = vals;
                break;
            case 2:
                fflush(stdin);
                cout << "Enter New Proffesion:";
                getline(cin, vals);
                this->proffession = vals;
                break;
            case 3:
                fflush(stdin);
                cout << "Enter New Email Address:";
                getline(cin, vals);
                this->email_employee = vals;
                break;
            case 4:
                fflush(stdin);
                cout << "Enter New Home Address:";
                getline(cin, vals);
                this->addr_employee = vals;
                break;
            case 5:
                cout << "Enter New Annual Income:";
                cin >> vald;
                this->emp = vald;
                break;
            case 6:
                cout << "Enter New Mobile Number:";
                cin >> vall;
                this->emp = vall;
                break;
            case 7:
                fflush(stdin);
                cout << "Enter New Password:";
                getline(cin, vals);
                this->emp = vals;
                break;
            case 8:
                display_Employee_details();
                return;
            default:
                cout<<"\a"<< endl;
                break;
            }
        }
    }
};

class Item{
private:
    string item_Name, item_colour;
    int item_price, item_quantity, item_size, item_length;
public:
    Item(){}
    Item(int price, int quanty, int siz, int len, string color, string name){
        this->item_colour = color;
        this->item_length = len;
        this->item_price = price;
        this->item_quantity = quanty;
        this->item_size = siz;
        this->item_Name = name;
    }

    void Set_Item(int price, int quanty, int siz, int len, string color, string name){
        this->item_colour = color;
        this->item_length = len;
        this->item_price = price;
        this->item_quantity = quanty;
        this->item_size = siz;
        this->item_Name = name;
    }

    string getitem_Name()
    {
        return item_Name;
    }
    string getcolour()
    {
        return item_colour;
    }

    int getitem_price()
    {
        return item_price;
    }
    int getitem_length()
    {
        return item_length;
    }
    int getitem_quantity()
    {
        return item_quantity;
    }
    int getitem_size()
    {
        return item_size;
    }
};

class Customer{
    string userid, username, password_cus, addr_cus;
    long long phoneno_cus;
    static int count;
    vector<Item>itemlist;
    void mainmenu(){
        int choose;
        system("cls");
        cout << " \n\n\n \t\tONLINE SHOPPING Mall\n\n\n ";
        cout << " Choose Anyone of Below : " << endl
             << endl
             << " 1. Electronics " << endl
             << " 2. General Items " << endl
             << " 3. Clothes " << endl<< endl
             << " Your Choice : ";
        cin >> choose;
        switch (choose){
        case 1:
            electronics();
            break;
        case 2:
            general_Items();
            break;
        case 3:
            clothes();
            break;
        default:
            cout << " Oops!You have Enterd the Wrong Index." << endl;
            mainmenu();
        }
    }

    void general_Items(){
        int choose, choice, price, quantity;
        char buy;
       cout << " \n\n\n \t\t-----------GROCERIES----------\n\n\n ";
        cout << " \t\tChoose Anyone of Below : " << endl<< endl
             << "\t\t 1. Bakering Goods " << endl
             << "\t\t 2. Fresh Produce " << endl
             << "\t\t 3. Dairy " << endl
             << "\t\t 4. Spaices " << endl
             << "\t\t 5. Frozen Food " << endl
             << endl
             << "\t\t Your Choice : ";
        cin >> choose;
        if (choose == 1){
            cout << " \n\n\n \t\t-----------*** Baking Goods ***----------\n\n\n ";
            cout << "\t\t Choose Anyone of Below : \n\n"
                 << "\t\t 1. Bakering Powder and Soda " << endl
                 << "\t\t 1. Bakering Powder and Soda " << endl
                 << "\t\t 3. Vanilla " << endl
                 << "\t\t 4. Chocolate Chips " << endl
                 << "\t\t 5. Dry Yeast " << endl
                 << endl
                 << "\t\t Your Choice : ";
            cin >> choice;
            if (choice == 1){
                price = 30;
                cout << " \n\n\t\t ========== Bakering Powder and Soda  ========== \n\n";
                cout << "\t\t You are About to Purchase the Bakering Powder and Soda\n";
                cout << "\t\t Price : " << price << endl;
                cout << "\t\t Number of Bakering Powder and Soda Want To Purchase : ";
                cin >> quantity;
                cout << "\t\t You Want to Buy a Bakering Powder and Soda Your Items are (" << quantity << ")" << endl;
                cout << "\t\t Your Total Price is : " << quantity * price << endl;
                cout << "\t\t Do ou Want to Buy (y/n) : ";
                cin >> buy;

                if (buy == 'y' || buy == 'Y'){
                    cout << "\t\t Press 1 to Buy \n\t\t Press Any Key to go to Main Menu \n\n\t\t  Or any other number to jump to General Items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Bakering Powder and Soda is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", " Bakering Powder and Soda");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            else if (choice == 2)            {
                price = 120;
                cout << " \n\n\t\t  ========== Sugar and Brown Sugar ==========  \n\n";
                cout << "\t\t You are about to Purchase the  Sugar and Brown Sugar\n";
                cout << "\t\t Price : " << price << endl;
                cout << "\t\t Number of Sugar and Brown Sugar Want to Purchase : ";
                cin >> quantity;
                cout << "\t\t You Want to Buy a  Sugar and Brown Sugar Your Items are (" << quantity << ")" << endl;
                cout << "\t\t Your Total Price is : " << quantity * price << endl;
                cout << "\t\t Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << "\t\t Press 1 to Buy \n\t\t Press Any Key to go to Main Menu \n\n\t\t   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1) {
                        cout << " Sugar and Brown Sugar is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Sugar and Brown Sugar");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            else if (choice == 3) {
                price = 350;
                cout << " \n\n ========== Vanilla Beans ========= \n\n";
                cout << " You are about to Purchase the Vanilla Beans\n";
                cout << " Price : " << price << endl;
                cout << " Number of Vanilla Beans want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a  Vanilla Beans Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Vanilla Beans is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Vanilla Beans");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            else if (choice == 4){
                price = 250;
                cout << " \n\n ========= Chocolate Chips ========= \n\n";
                cout << " You are about to Purchase the Chocolate Chips\n";
                cout << " Price : " << price << endl;
                cout << " Number of Chocolate Chips Want to Purchase : ";
                cin >> quantity;
                cout << " You Want to buy a  Chocolate Chips Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do you Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to buy \n Press any key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Chocolate Chips is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Chocolate Chips");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            if (choice == 5){
                price = 500;
                cout << " \n\n   Dry Yeast  \n\n";
                cout << " You are about to Purchase the Dry Yeast\n";
                cout << " Price : " << price << endl;
                cout << " Number of Dry Yeast want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Dry Yeast Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Dry Yeast is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Dry Yeast");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
        }
        else if (choose == 2){
            system("cls");
            cout << " \n\n\n \t\t-----------**** Fresh Produce *****----------\n\n\n ";
            cout << " Choose anyone of below : " << endl
                 << endl
                 << " 1. Bananas, Apple, Strawberries, Avacados " << endl
                 << " 2. Spinach, Potatoes, Tomatoes " << endl
                 << " 3. Garlic, Lemons/Limes " << endl
                 << " 4. Carrots, Parsley " << endl
                 << " 5. Bell Peppers " << endl
                 << endl
                 << " Your Choice : ";
            cin >> choice;
            if (choice == 1) {
                price = 500;
                cout << " \n\n ========== Bananas, Apple, Strawberries, Avacados ========== \n\n";
                cout << " You are about to purchase the  Bananas, Apple, Strawberries, Avacados\n";
                cout << " Price : " << price << endl;
                cout << " Number of  Bananas, Apple, Strawberries, Avacados want to purchase : ";
                cin >> quantity;
                cout << " You Want to buy a  Bananas, Apple, Strawberries, Avacados Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << "  Bananas, Apple, Strawberries, Avacados is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", " Bananas, Apple, Strawberries, Avacados ");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{ general_Items();}
                }
            }
            else if (choice == 2) {
                price = 350;
                cout << " \n\n ========== Spinach, Potatoes, Tomatoes ========== \n\n";
                cout << " You are about to Purchase the Spinach, Potatoes, Tomatoes\n";
                cout << " Price : " << price << endl;
                cout << " Number of Spinach, Potatoes, Tomatoes want to purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Spinach, Potatoes, Tomatoes Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1) {
                        cout << " Spinach, Potatoes, Tomatoes is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Spinach, Potatoes, Tomatoes");
                        itemlist.push_back(i);
                        mainmenu();}
                    else{general_Items(); }
                }
            }
            else if (choice == 3){
                price = 150;
                cout << " \n\n ========== Garlic, Lemons/Limes ========== \n\n";
                cout << " You are about to Purchase the Garlic, Lemons/Limes\n";
                cout << " Price : " << price << endl;
                cout << " Number of Garlic, Lemons/Limes want to purchase : ";
                cin >> quantity;
                cout << " You want to buy a  Garlic,lemons/limes Your Iterms are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Garlic, Lemons/Limes is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Garlic, Lemons/Limes");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            else if (choice == 4){
                price = 100;
                cout << " \n\n ========== Carrots and Parsley ========== \n\n";
                cout << " You are about to purchase the Carrots and Parsley\n";
                cout << " Price : " << price << endl;
                cout << " Number of Carrots and Parsley Want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Carrots and Parsley Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do you want to buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y') {
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Carrots and Parsley is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Carrots and Parsley");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            if (choice == 5){
                price = 50;
                cout << " \n\n ========== Bell Peppers ========== \n\n";
                cout << " You are about to Purchase the Bell Peppers\n";
                cout << " Price : " << price << endl;
                cout << " Number of Bell Peppers want to Purchase : ";
                cin >> quantity;
                cout << " You Wantt to Buy a Bell Peppers Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do you Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Bell Peppers is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Bell Peppers ");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
        }
        else if (choose == 3){
            system("cls");
            cout << " \n\n\n \t\t-----------**** Dairy *****----------\n\n\n ";
            cout << " Choose anyone of below : " << endl
                 << endl
                 << " 1. Butter " << endl
                 << " 2. Sliced/Shredded Cheesse " << endl
                 << " 3. milk and cream " << endl
                 << " 4. Geek yogurt " << endl
                 << endl
                 << " Your Choice : ";
            cin >> choice;
            if (choice == 1){
                price = 75;
                cout << " \n\n ========= Butter =========== \n\n";
                cout << " You are about to Purchase the Butter\n";
                cout << " Price : " << price << endl;
                cout << " Number of Butter Want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Butter Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do you Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Butter is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Butter ");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            else if (choice == 2){
                price = 120;
                cout << " \n\n ========== Sliced/Shredded Cheesse ========== \n\n";
                cout << " You are about to Purchase the Sliced/Shredded Cheesse\n";
                cout << " Price : " << price << endl;
                cout << " Number of Sliced/Shredded Cheesse want to purchase : ";
                cin >> quantity;
                cout << " You want to Buy a Sliced/Shredded Cheesse Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do you Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Sliced/Shredded Cheesse is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", " Sliced/Shredded Cheesse ");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{ general_Items();}
                }
            }
            else if (choice == 3){
                price = 250;
                cout << " \n\n ========== Milk and Cream ========== \n\n";
                cout << " You are about to Purchase the Milk and Cream\n";
                cout << " Price : " << price << endl;
                cout << " Number of Milk and Cream want to Purchase : ";
                cin >> quantity;
                cout << " You want to Puy a  Milk and Cream Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do you Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Milk and Cream is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Milk and Cream ");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            else if (choice == 4){
                price = 90;
                cout << " \n\n ========== Geek Yogurt ========== \n\n";
                cout << " You are about to Purchase the Geek Yogurt\n";
                cout << " Price : " << price << endl;
                cout << " Number of Geek Yogurt want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Geek Yogurt Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Geek Yogurt is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Geek Yogurt");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
        }
        else if (choose == 4){
            system("cls");
            cout << " \n\n\n \t\t-----------**** Spaices *****----------\n\n\n ";
            cout << " Choose anyone of below : " << endl
                 << endl
                 << " 1. Chilli Powder/Crushed Red Pepper " << endl
                 << " 2. Cumin " << endl
                 << " 3. Cinnamon " << endl
                 << " 4. Garlic Powder  " << endl
                 << " 5. Paprika " << endl
                 << " 6. Nutmeg " << endl
                 << endl
                 << " Your Choice : ";
            cin >> choice;
            if (choice == 1){
                price = 250;
                cout << " \n\n ========== Chilli Powder/Crushed Red Pepper =========== \n\n";
                cout << " You are about to Purchase the Chilli Powder/Crushed Red Pepper\n";
                cout << " Price : " << price << endl;
                cout << " Number of Chilli Powder/Crushed Red Pepper Want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Chilli Powder/Crushed Red Pepper Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Chilli Powder/Crushed Red Pepper is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Chilli Powder/Crushed Red Pepper");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            else if (choice == 2){
                price = 76;
                cout << " \n\n ========== Cumin ===========\n\n";
                cout << " You are About to Purchase the Cumin\n";
                cout << " Price : " << price << endl;
                cout << " Number of Cumin Want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Cumin Your Items are (" << quantity << ")" << endl;
                cout << " Your Total price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Cumin is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Cumin");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            else if (choice == 3){
                price = 300;
                cout << " \n\n ========== Cinnamon ========== \n\n";
                cout << " You are About to Purchase the Cinnamon\n";
                cout << " Price : " << price << endl;
                cout << " Number of Cinnamon Want to Purchase : ";
                cin >> quantity;
                cout << " You want to Buy a  Cinnamon Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any ey to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Cinnamon is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Cinnamon");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            else if (choice == 4){
                price = 90;
                cout << " \n\n ========== Garlic Powder ========== \n\n";
                cout << " You are About to Purchase the Garlic Powder\n";
                cout << " Price : " << price << endl;
                cout << " Number of Garlic Powder Want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Garlic Powder Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Garlic Powder is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Garlic Powder");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            else if (choice == 5){
                price = 199;
                cout << " \n\n ========== Paprika =========== \n\n";
                cout << " You are About to Purchase the Paprika\n";
                cout << " Price : " << price << endl;
                cout << " Number of Paprika Want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Paprika Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Paprika is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Paprika");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
            else if (choice == 6){
                price = 500;
                cout << " \n\n ========== Nutmeg ========== \n\n";
                cout << " You are About to Purchase the Nutmeg\n";
                cout << " Price : " << price << endl;
                cout << " Number of Nutmeg Want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Nutmeg Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Nutmeg is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Nutmeg");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
            }
        }
        else if (choose == 5){
            system("cls");
            cout << " \n\n\n \t\t-----------**** Frozen food *****----------\n\n\n ";
            cout << " Choose anyone of below : " << endl
                 << endl
                 << " 1. Meal " << endl
                 << " 2. Pizzas " << endl
                 << " 3. Waffles " << endl
                 << " 4. Ice Creams " << endl
                 << endl
                 << " Your Choice : ";
            cin >> choice;
            if (choice == 1){
                price = 800;
                cout << " \n\n ========== Meal ==========\n\n";
                cout << " You are About to Purchase the Meal\n";
                cout << " Price : " << price << endl;
                cout << " Number of Meal Want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Meals Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do you Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Meal is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Meal");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
                else{mainmenu();}
            }
            else if (choice == 2){
                price = 459;
                cout << " \n\n ========== Pizzas ==========\n\n";
                cout << " You are About to Purchase the Pizzas\n";
                cout << " Price : " << price << endl;
                cout << " Number of Pizzas Want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Pizzas Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Pizzas is Successfully added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Pizzas");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else { general_Items(); }
                }
                else {mainmenu(); }
            }
            else if (choice == 3){
                price = 179;
                cout << " \n\n ========== Waffles ==========\n\n";
                cout << " You are about to Purchase the  Waffles\n";
                cout << " Price : " << price << endl;
                cout << " Number of  Waffles want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a  Waffles Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do you Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << "  Waffles is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", "Waffles");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
                else{mainmenu();}
            }
            else if (choice == 4){
                price = 559;
                cout << " \n\n ========== Ice Creams ========== \n\n";
                cout << " You are about to Purchase the Ice Creams\n";
                cout << " Price : " << price << endl;
                cout << " Number of Ice Creams Want to Purchase : ";
                cin >> quantity;
                cout << " You Want to Buy a Ice Creams Your Items are (" << quantity << ")" << endl;
                cout << " Your Total Price is : " << quantity * price << endl;
                cout << " Do You Want to Buy (y/n) : ";
                cin >> buy;
                if (buy == 'y' || buy == 'Y'){
                    cout << " Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items " << endl;
                    cin >> choose;
                    if (choose == 1){
                        cout << " Ice Creams is Successfully Added to the Cart !!\n\n";
                        system("pause");
                        Item i(price, quantity, 0, 0, "", " Ice Creams");
                        itemlist.push_back(i);
                        mainmenu();
                    }
                    else{general_Items();}
                }
                else{mainmenu();}
            }
        }
    }

    void electronics(){
        int choose, price, quantity;
        char buy;
        cout << " \n\n\n \t\t\t-------------ELECTRONICS SECTION-----------\n\n\n ";
        cout << "                            Choose anyone of below : " << endl
             << endl
             << " \t\t1. Fridge " << endl
             << " \t\t2. AC " << endl
             << " \t\t3. Gaming Laptops " << endl
             << " \t\t4. Mobile " << endl
             << endl
             << " \t\tYour Choice : ";
        cin >> choose;
        if (choose == 1){
            price = 50000;
            cout << " \n\n \t\t-------*** Fridge ***-------   \n\n";
            cout << "\t\t You are about to Purchase the Fridge\n";
            cout << "\t\t Price : " << price << endl;
            cout << "\t\t Number of Fridges Want to Purchase : ";
            cin >> quantity;
            cout << "\t\t You Want to Buy a Fridge Your Items are (" << quantity << ")" << endl;
            cout << "\t\t Your total price is : " << quantity * price << endl;
            cout << "\t\t Do you Want to Buy (y/n) : ";
            cin >> buy;
            if (buy == 'y' || buy == 'Y'){
                cout << "\t\t Press 1 to buy \n\t\t Press Any Key to go to Main Menu \n\n\t\t  Your choice" << endl;
                cin >> choose;
                if (choose == 1){
                    cout << "\t\t You Have Added the Fridge to Cart!! \n\n";
                    system("pause");
                    Item i(price, quantity, 0, 0, "white", "Fridge");
                    itemlist.push_back(i);
                    mainmenu();
                }
                else{mainmenu();}}
        }
        else if (choose == 2){
            system("cls");
            price = 75000;
            cout << " \n\n\t\t ------*** Air Conditioner ***------   \n\n";
            cout << "\t\t You are About to Purchase the AC\n";
            cout << "\t\t Price : " << price << endl;
            cout << "\t\t Number of AC Want to Purchase : ";
            cin >> quantity;
            cout << "\t\t You Want to Buy a AC Your Items are (" << quantity << ")" << endl;
            cout << "\t\t Your Total Price is : " << quantity * price << endl;
            cout << "\t\t Do You Want to Buy (y/n) : ";
            cin >> buy;
            if (buy == 'y' || buy == 'Y'){
                cout << "\t\t Press 1 to Buy \n\t\t Press Any Key to go to Main Menu \n\n\t\t  Your choice" << endl;
                cin >> choose;
                if (choose == 1){
                    cout << "\t\t You Have Added the AC to Cart!! \n\n";
                    system("pause");
                    Item i(price, quantity, 0, 0, "White", "AC");
                    itemlist.push_back(i);
                    mainmenu();
                }
                else{mainmenu();}
            }
        }
        else if (choose == 3){
            system("cls");
            price = 155000;
            cout << " \n\n\t\t-------*** Gaming Laptops ***-------   \n\n";
            cout << "\t\t You are About to Purchase the Gaming Laptops\n";
            cout << "\t\t Price : " << price << endl;
            cout << "\t\t Number of Gaming Laptops Want to Purchase : ";
            cin >> quantity;
            cout << "\t\t You Want to Buy a Gaming Laptops Your Items are (" << quantity << ")" << endl;
            cout << "\t\t Your Total Price is : " << quantity * price << endl;
            cout << "\t\t Do You Want to Buy (y/n) : ";
            cin >> buy;
            if (buy == 'y' || buy == 'Y'){
                cout << "\t\t Press 1 to Buy \n\t\t Press Any Key to go to Main Menu \n\n\t\t  Your choice" << endl;
                cin >> choose;
                if (choose == 1){
                    cout << "\t\t You Have Added the Gaming Laptops to Cart !!\n\n";
                    system("pause");
                    Item i(price, quantity, 0, 0, "Grey", "Gaming Laptop");
                    itemlist.push_back(i);
                    mainmenu();
                }
                else{ mainmenu();}
            }
        }
        else if (choose == 4){
            system("cls");
            price = 20000;
            cout << " \n\n\t\t-------*** Mobile ***-------   \n\n";
            cout << "\t\t You are About to Purchase the Mobile\n";
            cout << "\t\t Price : " << price << endl;
            cout << "\t\t Number of Mobile Want to Purchase : ";
            cin >> quantity;
            cout << "\t\t You Want to Buy a Mobile Your Items are (" << quantity << ")" << endl;
            cout << "\t\t Your Total Price is : " << quantity * price << endl;
            cout << "\t\t Do You Want to Buy (y/n) : ";
            cin >> buy;
            if (buy == 'y' || buy == 'Y'){
                cout << "\t\t Press 1 to Buy \n\t\t Press Any Key to go to Main Menu \n\n\t\t  Your choice" << endl;
                cin >> choose;
                if (choose == 1) {
                    cout << "\t\t You Have Added the Mobile to cart \n\n";
                    Item i(price, quantity, 0, 0, "Rose Red", "Mobile");
                    itemlist.push_back(i);
                    system("pause");
                    mainmenu();
                }
                else{mainmenu();}
            }
        }
    }

    void clothes(){
        int choose,choice;
        int price,quantity,size,length;
        string colour;
        char buy;
        int ch;
        cout<<" \n\n\n \t\t----------- CLOTHINGS ----------\n\n\n ";
        cout<<" Choose anyone of below : "<<endl<<endl<<
        " 1. Ladies Wear "<<endl<<
        " 2. Gents Wear "<<endl<<
        " 3. Kids Wear "<<endl<<endl<<" Your Choice : ";
        cin>>choose;
            if(choose==1){
                cout<<" \n\n\n \t\t-----------**** Ladies Wear *****----------\n\n\n ";
                        cout<<" Choose anyone of below : "<<endl<<endl<<
                    " 1. Kurta and Leggings "<<endl<<
                    " 2. Jeanse and Top "<<endl<<
                    " 3. One-Pice Dresses "<<endl<<
                    " 4. Saree "<<endl<<endl<<" Your Choice : ";
                        cin>>choice;
                    if(choice==1){
                        price=2000;
                        cout<<" \n\n ========== Kurta and Leggings ============ \n\n";
                        cout<<" You are About to Purchase the Kurta and Leggings\n";
                        cout<<" Price : "<<price<<endl;
                        cout<<" Number of Kurta and Leggings want to Purchase : ";
                        cin>>quantity;
                        cout<<" You Want to Buy a Kurta and Leggings Your Items are ("<<quantity<<")"<<endl;
                        cout<<" Choose Size of Below : "<<endl<<endl<<
                        " 1. L "<<endl<< " 2. XL "<<endl<<" 3. XXL "<<endl<<endl<<" Your Choice : ";
                        cin>>size;
                        cout<<" Enter Your Desierd Colour : "<<colour;
                        cin>>colour;
                        cout<<" Your Total Price is : "<<quantity*price<<endl;
                        cout<<"\n You Made a Great Choice \n\nDo You Want to Buy (y/n) : ";
                        cin>>buy;
                        if(buy=='y'||buy=='Y'){                            
                            cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to Clothes items "<<endl;
                            cin>>choose;
                            if(choose==1){
                            cout<<" Kurta and Leggings is Successfully Added to the Cart !!\n\n";
                                system("pause");
                                Item i(price, quantity, size, length, colour, "Kurta and Leggings");
                                itemlist.push_back(i);
                                mainmenu();	
                            }
                            else{clothes();}
                        }
                        else{mainmenu();}
                    }else if(choice==2){
                        price=2500;
                        cout<<" \n\n =========== Jeans and Tops ========== \n\n";
                        cout<<" You are About to Purchase the Jeans and Tops\n";
                        cout<<" Price : "<<price<<endl;
                        cout<<" Number of Jeans and Tops Want to Purchase : ";
                        cin>>quantity;
                        cout<<" You Want to Buy a Jeans and Tops Your Items are ("<<quantity<<")"<<endl;
                        cout<<" Choose size of below : "<<endl<<endl<<
                        " 1. L "<<endl<< " 2. XL "<<endl<<" 3. XXL "<<endl<<endl<<" Your Choice : ";
                        cin>>size;
                        cout<<" Enter Your Desierd Colour : "<<colour;
                        cin>>colour;
                        cout<<" Your Total Price is : "<<quantity*price<<endl;
                        cout<<"\n You Made a Great Choice \n\nDo You Want to Buy (y/n) : ";
                        cin>>buy;
                        if(buy=='y'||buy=='Y'){ 
                            cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to Clothes items "<<endl;
                            cin>>choose;
                            if(choose==1){
                            cout<<" Jeans and Tops is Successfully Added to the Cart !!\n\n";
                                system("pause");
                                Item i(price, quantity, size, length, colour, "Jeans and Tops");
                                itemlist.push_back(i);
                                mainmenu();	
                            }else{clothes();}
                        }else{mainmenu(); }
                    }else if(choice==3){
                        price=3000;
                        cout<<" \n\n ========== One-Pice Dresses ========== \n\n";
                        cout<<" You are About to Purchase the One-Pice Dresses\n";
                        cout<<" Price : "<<price<<endl;
                        cout<<" Number of One-Pice Dresses Want to Purchase : ";
                        cin>>quantity;
                        cout<<" You Want to Buy a One-Pice Dresses Your Items are ("<<quantity<<")"<<endl;                   
                        cout<<" Choose size of below : "<<endl<<endl<<
                        " 1. L "<<endl<< " 2. XL "<<endl<<" 3. XXL "<<endl<<endl<<" Your Choice : ";
                        cin>>size;
                        cout<<" Enter Your Desierd Colour : "<<colour;
                        cin>>colour;
                        cout<<" Your Total Price is : "<<quantity*price<<endl;
                        cout<<"\n You Made a Great Choice \n\nDo You Want to Buy (y/n) : ";
                        cin>>buy;
                        if(buy=='y'||buy=='Y'){  
                            cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to Clothes items "<<endl;
                            cin>>choose;
                            if(choose==1){
                            cout<<" One-Pice Dresses is Successfully Added to the Cart !!\n\n";
                                system("pause");
                                Item i(price, quantity, size, length, colour, "One-Pice Dresses");
                                itemlist.push_back(i);
                                mainmenu();	
                            }else{clothes();}
                        }else{ mainmenu();}
                    }else if(choice==4){
                        price=3500;
                        cout<<" \n\n========== Saree ========== \n\n";
                        cout<<" You are about to Purchase the Saree\n";
                        cout<<" Price : "<<price<<endl;
                        cout<<" Number of Saree Want to Purchase : ";
                        cin>>quantity;
                        cout<<" You Want to Buy a Saree Your Items are ("<<quantity<<")"<<endl;
                        cout<<" Choose the Length of Your Dersirable Choice  : "; 
                        cin>>length;
                        cout<<" Enter Your Desierd Colour : "<<colour;
                        cin>>colour;
                        cout<<" Your Total Price is : "<<quantity*price<<endl;
                        cout<<"\n You Made a Great Choice \n\nDo You Want to Buy (y/n) : ";
                        cin>>buy;
                        if(buy=='y'||buy=='Y'){
                            cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to Clothes items "<<endl;
                            cin>>choose;
                            if(choose==1){
                            cout<<" Saree is Successfully Added to the Cart !!\n\n";
                                system("pause");
                                 Item i(price, quantity, size, length, colour, "Saree");
                                itemlist.push_back(i);
                                mainmenu();	
                            }else{clothes();}
                        }else{ mainmenu();}
                    }
            }else if(choose==2) {
                    cout<<" \n\n\n \t\t-----------**** Gents Wear *****----------\n\n\n ";
                        cout<<" Choose anyone of below : "<<endl<<endl<<
                    " 1. Shirt "<<endl<<
                    " 2. Trousers "<<endl<<
                    " 3. Suit "<<endl<<
                    " 4. T-Shirts and Shorts "<<endl<<endl<<" Your Choice : ";
                        cin>>choice;
                    if(choice==1){
                        price=1500;
                        cout<<" \n\n ========== Shirt ========== \n\n";
                        cout<<" You are About to Purchase the Shirt\n";
                        cout<<" Price : "<<price<<endl;
                        cout<<" Number of Shirt Want to Purchase : ";
                        cin>>quantity;
                        cout<<" You Want to Buy a Shirt Your Items are ("<<quantity<<")"<<endl;
                        cout<<" Choose size of below : "<<endl<<endl<<
                        " 1. L (Chest : 41'-43')   (Waist : 35'-37')"<<endl<< " 2. XL(Chest : 44'-46')   (Waist : 38'-40') "<<endl<<" 3. XXL (Chest : 47'-49')   (Waist : 41'-43')"<<endl<<endl<<" Your Choice : ";
                        cin>>size;
                        cout<<" Enter Your Desierd Colour : "<<colour;
                        cin>>colour;
                        cout<<" Your Total Price is : "<<quantity*price<<endl;
                        cout<<"\n You Made a Great Choice \n\nDo You Want to Buy (y/n) : ";
                        cin>>buy;
                        if(buy=='y'||buy=='Y'){
                            cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items "<<endl;
                            cin>>choose;
                            if(choose==1){
                            cout<<" Shirt is Successfully Added to the Cart !!\n\n";
                                system("pause");
                                Item i(price, quantity, size, length, colour, "Shirt");
                                itemlist.push_back(i);
                                mainmenu();	
                            }else{ clothes();	}
                        }else{ mainmenu();}
                    }else if(choice==2){
                        price=2000;
                        cout<<" \n\n========== Trousers ========== \n\n";
                        cout<<" You are About to Purchase the Trousers\n";
                        cout<<" Price : "<<price<<endl;
                        cout<<" Number of Trousers Want to Purchase : ";
                        cin>>quantity;
                        cout<<" You Want to Buy a Trousers Your Items are ("<<quantity<<")"<<endl;
                        cout<<" Choose size of below : "<<endl<<endl<<
                        " 1. L "<<endl<< " 2. XL "<<endl<<" 3. XXL "<<endl<<endl<<" Your Choice : ";
                        cin>>size;
                        cout<<" Enter Your Desierd Colour : "<<colour;
                        cin>>colour;
                        cout<<" Your Total Price is : "<<quantity*price<<endl;
                        cout<<"\n You Made a Great Choice \n\nDo you want to buy (y/n) : ";
                        cin>>buy;
                        if(buy=='y'||buy=='Y'){
                            cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items "<<endl;
                            cin>>choose;
                            if(choose==1){
                            cout<<" Trousers is Successfully Added to the Cart !!\n\n";
                                system("pause");
                                Item i(price, quantity, size, length, colour, " Trousers");
                                itemlist.push_back(i);
                                mainmenu();	
                            }else{clothes();}
                        }else{mainmenu();}
                    }else if(choice==3){
                        price=3100;
                        cout<<" \n\n ========== Suit ==========  \n\n";
                        cout<<" You are About to Purchase the Suits\n";
                        cout<<" Price : "<<price<<endl;
                        cout<<" Number of Suit Want to Purchase : ";
                        cin>>quantity;
                        cout<<" You Want to Buy a Suit Your Items are ("<<quantity<<")"<<endl;
                        cout<<" Choose size of below : "<<endl<<endl<<
                        " 1. L "<<endl<< " 2. XL "<<endl<<" 3. XXL "<<endl<<endl<<" Your Choice : ";
                        cin>>size;
                        cout<<" Enter Your Desierd Colour : "<<colour;
                        cin>>colour;
                        cout<<" Your Total Price is : "<<quantity*price<<endl;
                        cout<<"\n You Made a Great Choice \n\nDo You Want to Buy (y/n) : ";
                        cin>>buy;
                        if(buy=='y'||buy=='Y'){ 
                            cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items "<<endl;
                            cin>>choose;
                            if(choose==1){
                            cout<<" Suit is Successfully Added to the Cart !!\n\n";
                                system("pause");
                                  Item i(price, quantity, size, length, colour, "suit");
                                itemlist.push_back(i);
                                mainmenu();	
                            }else{clothes();	}
                        }else{mainmenu();}
                    }else if(choice==4) {
                        price=1900;
                        cout<<" \n\n ========== T-shirts and shorts ========== \n\n";
                        cout<<" You are about to Purchase the T-shirts and Shorts\n";
                        cout<<" Price : "<<price<<endl;
                        cout<<" Number of T-shirts and Shorts Want to Purchase : ";
                        cin>>quantity;
                        cout<<" You Want to Buy T-shirts and Shorts Your Items are ("<<quantity<<")"<<endl;
                        cout<<" Choose size of below : "<<endl<<endl<<
                        " 1. L "<<endl<< " 2. XL "<<endl<<" 3. XXL "<<endl<<endl<<" Your Choice : ";
                        cin>>size;
                        cout<<" Enter Your Desierd Colour : "<<colour;
                        cin>>colour;
                        cout<<" Your Total Price is : "<<quantity*price<<endl;
                        cout<<"\n You Made a Great choice \n\nDo You Want to Buy (y/n) : ";
                        cin>>buy;
                        if(buy=='y'||buy=='Y'){  
                            cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items "<<endl;
                            cin>>choose;
                            if(choose==1){
                            cout<<" T-shirts and Shorts is Successfully Added to the Cart !!\n\n";
                                system("pause");
                                Item i(price, quantity, size, length, colour, "T-shirts and Shorts");
                                itemlist.push_back(i);
                                mainmenu();	
                            }else{clothes();	}
                        }else{ mainmenu();}
                    }
                }else if(choose==3){
                    cout<<" \n\n\n \t\t----------KIDS WEAR-----------\n\n\n ";
                    cout<<" Choose anyone of below : "<<endl<<endl<<
                    " 1. Girl "<<endl<<
                    " 2. Boy "<<endl<<endl<<" Your Choice : "; 
                    cin>>ch;
                    if(ch==1){
                        system("cls"); 
                            cout<<" \n\n\n \t\t-----------**** Girls *****----------\n\n\n ";
                            cout<<" Choose anyone of below : "<<endl<<endl<<
                        " 1. Printed Dress "<<endl<<
                        " 2. Jumpsuit "<<endl<<
                        " 3. Vest and Short Set "<<endl<<
                        " 4. Pink Princess Dress "<<endl<<
                        " 5. velvet With Net Dress "<<endl<<
                        " 6. Denims "<<endl<<endl<<" Your Choice : ";
                            cin>>choice;
                            if(choice==1){
                                price=1800;
                                cout<<" \n\n ========== Printed Dress ========== \n\n";
                                cout<<" You are about to Purchase the Printed Dress\n";
                                cout<<" Price : "<<price<<endl;
                                cout<<" Number of Printed Dress Want to Purchase : ";
                                cin>>quantity;
                                cout<<" You Want to Buy a Printed Dress Your Items are ("<<quantity<<")"<<endl;
                                cout<<" Your Total Price is : "<<quantity*price<<endl;
                                cout<<" Do you Want to Buy (y/n) : ";
                                cin>>buy;
                                if(buy=='y'||buy=='Y'){
                                    cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items "<<endl;
                                    cin>>choose;
                                    if(choose==1){
                                    cout<<" Printed Dress is Successfully Added to the Cart !!\n\n";
                                        system("pause");
                                        Item i(price, quantity, size, length, colour, "Printed Dress ");
                                        itemlist.push_back(i);
                                        mainmenu();	
                                    }else{ clothes();	}
                                }
                            }else if(choice==2){
                                price=3000;
                                cout<<" \n\n ========== Jumpsuit ==========\n\n";
                                cout<<" You are about to Purchase the Jumpsuit\n";
                                cout<<" Price : "<<price<<endl;
                                cout<<" Number of Jumpsuit Want to Purchase : ";
                                cin>>quantity;
                                cout<<" You Want to Buy a Jumpsuit Your Items are ("<<quantity<<")"<<endl;
                                cout<<" Your Total Price is : "<<quantity*price<<endl;
                                cout<<" Do You Want to Buy (y/n) : ";
                                cin>>buy;
                                if(buy=='y'||buy=='Y'){
                                    cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items "<<endl;
                                    cin>>choose;
                                    if(choose==1){
                                        cout<<" Jumpsuit is Successfully Added to the Cart !!\n\n";
                                        system("pause");
                                        Item i(price, quantity, size, length, colour, "Jumpsuit");
                                        itemlist.push_back(i);
                                        mainmenu();	
                                    }else{clothes();}
                                }
                            }else if(choice==3){
                                price=2500;
                                cout<<" \n\n ========== Vest and Short Set ==========\n\n";
                                cout<<" You are about to Purchase the Vest and Short Set \n";
                                cout<<" Price : "<<price<<endl;
                                cout<<" Number of Vest and Short Set Want to Purchase : ";
                                cin>>quantity;
                                cout<<" You Want to Buy a  Vest and Short Set Your Items are ("<<quantity<<")"<<endl;
                                cout<<" Your Total Price is : "<<quantity*price<<endl;
                                cout<<" Do You Want to Buy (y/n) : ";
                                cin>>buy;
                                if(buy=='y'||buy=='Y') {
                                    cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n   Or any other number to jump to general items "<<endl;
                                    cin>>choose;
                                    if(choose==1) {
                                        cout<<" Vest and Short Set is Successfully Added to the Cart !!\n\n";
                                        system("pause");
                                        Item i(price, quantity, size, length, colour, " Vest and Short Set ");
                                        itemlist.push_back(i);
                                        mainmenu();	
                                    }else{ clothes();}
                                }
                            }else if(choice==4) {
                                price=3200;
                                cout<<" \n\n ========== Pink Princess Dress ========== \n\n";
                                cout<<" You are About to Purchase the Pink Princess Dress\n";
                                cout<<" Price : "<<price<<endl;
                                cout<<" Number of Pink Princess Dress Want to Purchase : ";
                                cin>>quantity;
                                cout<<" You Want to Buy a Pink Princess Dress Your Items are ("<<quantity<<")"<<endl;
                                cout<<" Your Total Price is : "<<quantity*price<<endl;
                                cout<<" Do You Want to Buy (y/n) : ";
                                cin>>buy;
                                if(buy=='y'||buy=='Y'){
                                    cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items "<<endl;
                                    cin>>choose;
                                    if(choose==1) {
                                        cout<<" Pink Princess Dress is Successfully Added to the Cart !!\n\n";
                                        system("pause");
                                        Item i(price, quantity, size, length, colour, " Pink Princess Dress");
                                        itemlist.push_back(i);
                                        mainmenu();	
                                    }else{ clothes();	}
                                }
                            }else if(choice==5){
                                price=3500;
                                cout<<" \n\n ========== Velvet with Net Dress ========== \n\n";
                                cout<<" You are About to Purchase the Velvet with Net Dress\n";
                                cout<<" Price : "<<price<<endl;
                                cout<<" Number of Velvet with Net Dress Want to Purchase : ";
                                cin>>quantity;
                                cout<<" You Want to Buy a Velvet with Net Dress Your Items are ("<<quantity<<")"<<endl;
                                cout<<" Your Total Price is : "<<quantity*price<<endl;
                                cout<<" Do You Want to Buy (y/n) : ";
                                cin>>buy;
                                if(buy=='y'||buy=='Y'){
                                    cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items "<<endl;
                                    cin>>choose;
                                    if(choose==1){
                                        cout<<" Velvet with Net Dress is Successfully Added to the Cart !!\n\n";
                                        system("pause");
                                         Item i(price, quantity, size, length, colour, "Velvet with Net Dress");
                                        itemlist.push_back(i);
                                        mainmenu();	
                                    }else{clothes();	}
                                }
                            }else if(choice==6){
                                price=2000;
                                cout<<" \n\n ========== Denims ========== \n\n";
                                cout<<" You are About to Purchase the  Denims\n";
                                cout<<" Price : "<<price<<endl;
                                cout<<" Number of  Denims Want to Purchase : ";
                                cin>>quantity;
                                cout<<" You Want to Buy a Denims Your Items are ("<<quantity<<")"<<endl;
                                cout<<" Your Total Price is : "<<quantity*price<<endl;
                                cout<<" Do you Want to Buy (y/n) : ";
                                cin>>buy;
                                if(buy=='y'||buy=='Y'){
                                    cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items "<<endl;
                                    cin>>choose;
                                    if(choose==1){
                                        cout<<"Denims is Successfully Added to the Cart !!\n\n";
                                        system("pause");
                                        Item i(price, quantity, size, length, colour, "Denims");
                                        itemlist.push_back(i);
                                        mainmenu();	
                                    }else{ general_Items();	}
                                    }
                            }
                    } else if (ch==2) {
                        cout<<" \n\n\n \t\t-----------**** Boys *****----------\n\n\n ";
                            cout<<" Choose anyone of below : "<<endl<<endl<<
                        " 1. Black Suspender Shorts Set "<<endl<<
                        " 2. Three piece party suit with tie "<<endl<<
                        " 3. Sripe Short with subtle graphic tshirt "<<endl<<
                        " 4. Sleeveless Hoodie  "<<endl<<endl<<" Your Choice : ";
                            cin>>choice;
                            if(choice==1){
                                price=2000;
                                cout<<" \n\n ========== Black Suspender Shorts Set ========== \n\n";
                                cout<<" You are about to Purchase the  Black Suspender Shorts Set\n";
                                cout<<" Price : "<<price<<endl;
                                cout<<" Number of Black Suspender Shorts Set Want to Purchase : ";
                                cin>>quantity;
                                cout<<" You Want to Buy a Black Suspender Shorts Set Your Items are ("<<quantity<<")"<<endl;
                                cout<<" Your Total Price is : "<<quantity*price<<endl;
                                cout<<"\n You Made a Great Choice \n\nDo You Want to Buy (y/n) : ";
                                cin>>buy;
                                if(buy=='y'||buy=='Y'){
                                    cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items "<<endl;
                                    cin>>choose;
                                    if(choose==1) {
                                    cout<<"  Black Suspender Shorts Set is Successfully Added to the Cart !!\n\n";
                                        system("pause");
                                         Item i(price, quantity, size, length, colour, "Black Suspender Shorts Set ");
                                        itemlist.push_back(i);
                                        mainmenu();	
                                    }else{clothes();	}
                                }else{ mainmenu(); }
                            }else if(choice==2){
                                price=2500;
                                cout<<" \n\n ========== Three Piece Party Suit With Tie ========== \n\n";
                                cout<<" You are About to Purchase the Three Piece Party Suit With Tie\n";
                                cout<<" Price : "<<price<<endl;
                                cout<<" Number of Three Piece Party Suit With Tie Want to Purchase : ";
                                cin>>quantity;
                                cout<<" You Want to Buy a Three Piece Party Suit With Tie Your Items are ("<<quantity<<")"<<endl;                                cout<<" enter your desierd colour : "<<colour;
                                cin>>colour;                                cout<<" Your total price is : "<<quantity*price<<endl;
                                cout<<"\n You Made a Great Choice \n\nDo You Want to Buy (y/n) : ";
                                cin>>buy;                               
                                if(buy=='y'||buy=='Y') {
                                    cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items "<<endl;
                                    cin>>choose;
                                    if(choose==1){
                                    cout<<" Three Piece Party Suit With Tie is Successfully Added to the Cart !!\n\n";
                                        system("pause");
                                         Item i(price, quantity, size, length, colour, "Three Piece Party Suit With Tie");
                                        itemlist.push_back(i);
                                        mainmenu();	
                                    }else
                                    {
                                    clothes();	
                                    }
                                }else{
                                    mainmenu();
                                }
                            }else if(choice==3)
                            {
                                price=1850;
                                cout<<" \n\n ========== Stripe Short With Subtle Graphic T-shirt ========== \n\n";
                                cout<<" You are about to Purchase the Stripe Short With Subtle Graphic T-shirt\n";
                                cout<<" Price : "<<price<<endl;
                                cout<<" Number of Stripe Short With Subtle Graphic T-shirt Want to Purchase : ";
                                cin>>quantity;
                                cout<<" You Want to Buy a Stripe Short With Subtle Graphic T-shirt Your Items are ("<<quantity<<")"<<endl;
                                cout<<" Enter Your Desierd Colour : "<<colour;
                                cin>>colour;
                                cout<<" Your Total Price is : "<<quantity*price<<endl;
                                cout<<"\n You Made a Great Choice \n\nDo You Want to Buy (y/n) : ";
                                cin>>buy;
                                if(buy=='y'||buy=='Y')
                                {
                                    cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items "<<endl;
                                    cin>>choose;
                                    if(choose==1)
                                    {
                                    cout<<" Stripe Short With Subtle Graphic T-shirt is Successfully Added to the Cart !!\n\n";
                                        system("pause");
                                        Item i(price, quantity, size, length, colour, "Stripe Short With Subtle Graphic T-shirt");
                                        itemlist.push_back(i);
                                        mainmenu();	
                                    }else
                                    {
                                    clothes();	
                                    }
                                }else{
                                    mainmenu();
                                }
                            }else if(choice==4)
                            {
                                price=1500;
                                cout<<" \n\n ========== Sleeveless Hoodie ========== \n\n";
                                cout<<" You are About to Purchase the Sleeveless Hoodie\n";
                                cout<<" Price : "<<price<<endl;
                                cout<<" Number of Sleeveless Hoodie want to Purchase : ";
                                cin>>quantity;
                                cout<<" You Want to Buy a Sleeveless Hoodie Your Items are ("<<quantity<<")"<<endl;
                                cout<<" Enter Your Desierd Colour : "<<colour;
                                cin>>colour;
                                cout<<" Your Total Price is : "<<quantity*price<<endl;
                                cout<<"\n You Made a Great Choice \n\nDo You Want to Buy (y/n) : ";
                                cin>>buy;
                                if(buy=='y'||buy=='Y')
                                {
                                    cout<<" Press 1 to Buy \n Press Any Key to go to Main Menu \n\n  Or any other number to jump to general items "<<endl;
                                    cin>>choose;
                                    if(choose==1)
                                   {
                                    cout<<" Sleeveless Hoodie is Successfully Added to the Cart !!\n\n";
                                        system("pause");
                                        Item i(price, quantity, size, length, colour, " Sleeveless Hoodie ");
                                        itemlist.push_back(i);
                                        mainmenu();	
                                    }else
                                    {
                                    clothes();	
                                    }
                                }else
                                {
                                    mainmenu();
                                }

                            }
                }       
        }
    }
public:
    Customer() {}
    Customer(string u_name, string pas_cus, string add_cus, long long phn_cus){
        count++;
        this->userid = to_string(count);
        this->username = u_name;
        this->password_cus = pas_cus;
        this->addr_cus = add_cus;
        this->phoneno_cus = phn_cus;
    }

    void setCustomer(string u_name, string pas_cus, string add_cus, long long phn_cus){
        count++;
        this->userid = to_string(count);
        this->username = u_name;
        this->password_cus = pas_cus;
        this->addr_cus = add_cus;
        this->phoneno_cus = phn_cus;
    }

    void set_Customer_Details(){
        fflush(stdin);
        count++;
        userid = to_string(count);
        cout << "Enter Customer Name: " << endl;
        getline(cin, username);
        cout << "Enter Customer Password: " << endl;
        getline(cin, password_cus);
        cout << "Enter Customer Address: " << endl;
        getline(cin, addr_cus);
        fflush(stdin);
        cout << "Enter the Customer Phone Number: " << endl;
        cin >> phoneno_cus;
        fflush(stdin);
    }
    void Add_Item()
    {
        mainmenu();
    }
    void GenerateBill()
    {
        vector<Item>::iterator itr;
        int total = 0;
        cout << "\t\t\t\t\tLOADING..." << endl;
        cout<<"\t\t\t\t\tGENERATING A BILL";
        Sleep(1000);
        system("CLS");
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t|| CUSTOMER BILL ||\t\n\n"<<endl;
        cout<<"\tCustomer Id: "<<userid<<" || Customer Name: "<<username<<endl;
        for (itr = itemlist.begin(); itr != itemlist.end(); ++itr){
            string itemname=itr->getitem_Name();
            double iprice=itr->getitem_price();
            int iquantity=itr->getitem_quantity();
            cout<<"\tItem Name: "<<itemname<<" || Item Price: "<<iprice<<" || Item Quantity: "<<iquantity<<endl;
            total+=iprice;
        }
        cout<<"\tTotal Amount to Paid: \n\n"<<total<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
    }
    string getUserid()
    {
        return userid;
    }

    string getUsername()
    {
        return username;
    }

    string getPassword()
    {
        return password_cus;
    }

    string getAddress()
    {
        return addr_cus;
    }

    int getPhone()
    {
        return phoneno_cus;
    }
};

int Customer ::count = 20221;

class Shopping_Mall{
public:
    vector<Employee> emplist;
    vector<Customer> cuslist;
    Shopping_Mall() {}
    Shopping_Mall(Employee e)
    {
        emplist.push_back(e);
    }

    void add_Employee_Data()
    {
        Employee e;
        e.insertEmp();
        emplist.push_back(e);
    }

    void generate_Emp_Data(int n){
        Employee e[n];
        string names[] = {"Aditi Khare", "Arpit Khare", "Jhon Jenson", "Swarangi Tathe", "Amisha Singh", "Naruto Uzumaki", "Hinnata Hyuga"};
        string email[] = {"aditikhare@gmail.com", "arpitkhare@gmail.com", "jhonjenson@gmail.com", "swarangitathe@gmail.com", "amishasingh@gmail.com", "narutouzumaki@gmail.com", "hinnatahyuga@gmail.com"};
        string addr[] = {"Pune", "UK", "USA", "Europe", "Mumbai", "Kerala", "Japan", "Japan"};
        long long ph[] = {8261951491, 9850755856, 7774005563, 7774005573, 8769054632, 7689507658, 8769054321};
        string prof[] = {"CEO", "Sr. CEO", "Customer Service Representative", "sr devloper", "Cashier", "Store Manager", "Manager/Assistant Manager"};
        string pswd[] = {"aditiak1101", "1234@rpit", "1234swdads", "$wara01", "@misha$", "Hokage", "LadyHinnata*"};
        for (int i = 0; i < n; i++){
            e[i].insertEmpdef(names[i], prof[i], email[i], addr[i], (INT16_MAX/(i+1) - (i)), ph[i], pswd[i]);
            emplist.push_back(e[i]);
        }
    }
    void show_Employee_Data(){
        vector<Employee>::iterator itr;
        for (itr = emplist.begin(); itr != emplist.end(); ++itr){
            cout << endl;
            itr->display_Employee_details();
            cout << "\n";
        }
    }

    void deleteEmp(string id){
        vector<Employee>::iterator itr;
        int f = 0;
        for (itr = emplist.begin(); itr != emplist.end(); ++itr){
            string eid = itr->getEid();
            if (id == eid){
                cout<<endl;
                cout<<"\t\t\t\t\tLOADING..." << endl;
                Sleep(1000);
                system("CLS");
                cout << "Employee With Empolyee_ID " << eid << " is Found!\n";
                emplist.erase(itr);
                cout << "Employee Data Has Been Removed From the Current Data Successfully!\n";
                f = 1;
                break;
            }
            cout << "\n";
        }
        if (f == 0){
            cout << endl;
            cout << "\aEmployee Not Found! \n";
        }
        show_Employee_Data();
    }

    void searchEmp(string id){
        int f = 0;
        vector<Employee>::iterator itr;
        for (itr = emplist.begin(); itr != emplist.end(); ++itr){
            string eid = itr->getEid();
            if (id == eid){
                cout << endl;
                cout << "\t\t\t\t\tLOADING..." << endl;
                Sleep(1000);
                system("CLS");
                cout << "Employee with Employee_ID " << eid << " is found \n";
                f = 1;
                itr->display_Employee_details();
                break;
            }
            cout << "\n";
        }
        if (f == 0){
            cout << endl;
            cout << "\aEmployee not  found! \n";
        }
    }

    void modify(string id){
        int f = 0;
        vector<Employee>::iterator itr;
        for (itr = emplist.begin(); itr != emplist.end(); ++itr){
            string eid = itr->getEid();
            if (id == eid){
                cout << endl;
                cout << "Employee with Employee_ID " << eid << " is found \n";
                itr->display_Employee_details();
                itr->updateEmp();
            }
        }
    }

    void generate_Customer_Data(int n){
        Customer c[n];
        string names[] = {"Neji Hyuga", "Sasuke Uchiha", "Arti Khare", "Anil Khare", "Minnata Namikaze", "Sakura Haruno", "Kakashi Hatake"};
        string addr[] = {"Pune", "UK", "USA", "Europe", "Mumbai", "Kerala", "Japan", "Japan"};
        long long ph[] = {8261951491, 9850755856, 7774005563, 7774005573, 8769054632, 7689507658, 8769054321};
        string pswd[] = {"neji", "sasuke", "arti", "anil", "minnata", "sakura", "kakashi"};
        for (int i = 0; i < n; i++){
            c[i].setCustomer(names[i], pswd[i], addr[i], ph[i]);
            cuslist.push_back(c[i]);
        }
    }

    void registerCustomer(){
        vector<Customer>::iterator itr;
        string userid, username, password_cus, addr_cus;
        long long phoneno_cus;
        fflush(stdin);
        cout << "Enter Customer Name: " << endl;
        getline(cin, username);
        cout << "Enter Customer Password: " << endl;
        getline(cin, password_cus);
        cout << "Enter Customer Address: " << endl;
        getline(cin, addr_cus);
        fflush(stdin);
        cout << "Enter the Customer Phone Number: " << endl;
        cin >> phoneno_cus;
        fflush(stdin);
        Customer c(username, password_cus, addr_cus, phoneno_cus);
        cuslist.push_back(c);
        cout << "\t\t\t\t\tLOADING..." << endl;
        cout << "\t\t\t\t\tCustomer Registeration Process Sucessfully Done!\n\n\n"<< endl;
        Sleep(1000);
        system("CLS");
        login_Customer();
    }

    void login_Customer(){
        int f = 0;
        string userid, password_cus;
        fflush(stdin);
        cout << "Enter Customer ID: " << endl;
        getline(cin, userid);
        cout << "Enter Customer Password: " << endl;
        getline(cin, password_cus);
        vector<Customer>::iterator itr;
        for (itr = cuslist.begin(); itr != cuslist.end(); ++itr){
            string cid = itr->getUserid();
            string cpswd = itr->getPassword();
            if (cid == userid){
                cout << "\t\t\t\t\tID Matched\n\n\n"<< endl;
                if (cpswd == password_cus){
                    cout << "\t\t\t\t\tPassword Matched\n\n\n"<< endl;

                    cout << "\t\t\t\t\tCustomer Login Sucessfully Done!\n\n\n"<< endl;
                    itr->Add_Item();
                    itr->GenerateBill();
                    f = 1;
                }
            }
            cout << "\n";
        }
        if (f == 0){
            cout << endl;
            cout << "\t\t\t\t\tInvalid User ID\n\n\n\n";
        }
    }

    int login_Employee(){
        int f = 0;
        string userid, password_cus;
        fflush(stdin);
        cout << "Enter employee ID: " << endl;
        getline(cin, userid);
        cout << "Enter employee Password: " << endl;
        getline(cin, password_cus);
        vector<Employee>::iterator itr;
        for (itr = emplist.begin(); itr != emplist.end(); ++itr){
            string eid = itr->getEid();
            string epswd = itr->getPassword();
            if (eid == userid){
                cout << "\t\t\t\t\tID Matched\n\n\n" << endl;
                if (epswd == password_cus){
                    cout << "\t\t\t\t\tPassword Matched\n\n\n"<< endl;
                    cout << "\t\t\t\t\tEmployee Login Sucessfully Done\n\n\n"<< endl;
                        f = 1;
                }
            }
            cout << "\n";
        }
        if (f == 0){
            cout << endl;
            cout << "\t\t\t\t\tInvalid User ID\n\n\n\n";
        }
        return f;
    }
};
int Employee ::count = 180700;

int main(){
    int flag1 = 0;
    Shopping_Mall sm1;
    cout << endl;
    int del, search, modi;
    int choice, choose;
    int select;
    while (true){
        cout << endl
             << "                           -------------------------------------------------------                 " << endl
             << "                                          SHOPPING MALL                                  " << endl
             << "                           -------------------------------------------------------                 " << endl;
        cout << endl
             << "                     Select, which one you are: " << endl;
        cout << "                     1.Employee " << endl;
        cout << "                     2.Customer " << endl;
        cout << "                     3.Exit " << endl;
        cout << endl
             << "               Enter the choice: ";
        cin >> choose;
        cout << endl<< endl<< endl<< endl<< endl << endl << endl<< "\t\t\t\t\tLoading..." << endl;
        Sleep(1000);
        system("CLS");
        int lef;
        switch (choose){
        case 1:
            cout << endl;
            cout << "\t\t\t\t\tLOADING..." << endl;
            Sleep(1000);
            system("CLS");
            sm1.generate_Emp_Data(7);
            flag1 = 0;
            while (true){
                cout << "                     -------------------------------------------------------                " << endl
                     << "                                         SHOPPING MALL                            " << endl
                     << "                     -------------------------------------------------------                " << endl;
                cout << endl;
                cout << endl
                     << " \t\t\t\t\t WELCOME TO OUR SHOP SIR/MA'AM...                                 " << endl
                     << endl
                     << endl;
                cout << "1.LOGIN" << endl;
                cout << "2.Exit" << endl;
                cout << "\nEnter your choice :";
                cin >> select;
                cout << endl;
                switch (select){
                case 1:
                    lef=sm1.login_Employee();
                    break;
                case 2:
                    cout << "Thanks for Visiting To Our Store \n  Visit Again \n Have Good Day!!!" << endl;
                    exit(1);
                    break;
                default:
                    system("cls");
                    cout << "You've Made a Mistake , Give it a Try Again\n"
                         << endl;
                }
                if(lef==0){
                    continue;
                }
                cout << endl;
                cout << "\t\t\t\t\tLOADING..." << endl;
                Sleep(1000);
                system("CLS");
                cout << "                     -------------------------------------------------------                " << endl
                     << "                                         SHOPPING MALL                            " << endl
                     << "                     -------------------------------------------------------                " << endl;
                cout << "\t\t\t Employee Detail Chart:             " << endl;
                cout << "\t\t\t\t\tHEY,CHOOSE ONE OPTION OUT OF THEM: \n"<< endl << endl;
                cout << "\t\t\t\t\t1.Insert an Employee Detail : " << endl;
                cout << "\t\t\t\t\t2.Search an Employee Detail :" << endl;
                cout << "\t\t\t\t\t3.Display an Employees Detail : " << endl;
                cout << "\t\t\t\t\t4.Modify an Employee Detail : " << endl;
                cout << "\t\t\t\t\t5.Delete an Employee Detail : " << endl;
                cout << "\t\t\t\t\t6.Press 6 To get Exit: " << endl;
                cout << "\t\t\t\t\tEnter your Option: ";
                cin >> choice;
                cout << "\n\t\t\t\t\tLOADING..." << endl;
                Sleep(1000);
                system("CLS");
                switch (choice){
                case 1:
                    sm1.add_Employee_Data();
                    break;
                case 2:
                    cout << endl
                         << "\t\t\t\t\tEnter the ID to be Searched: " << endl;
                    cin >> search;
                    sm1.searchEmp(to_string(search));
                    break;
                case 3:
                    sm1.show_Employee_Data();
                    break;
                case 4:
                    cout << endl
                         << "\t\t\t\t\tEnter the ID to be Modified: " << endl;
                    cin >> modi;
                    sm1.modify(to_string(modi));
                    sm1.show_Employee_Data();
                    break;
                case 5:
                    cout << endl
                         << "\t\t\t\t\tEnter the ID to be Deleted: " << endl;
                    cin >> del;
                    sm1.deleteEmp(to_string(del));
                    sm1.show_Employee_Data();
                    break;
                case 6:
                    flag1 = 1;
                    break;
                    cout << "\t\t\t\t\tLOADING..." << endl;
                    Sleep(1000);
                    system("CLS");
                default:
                    cout << '\a';
                    cout << endl
                         << "\t\t\t\t\tSorry to such match found" << endl;
                }
                if (flag1 == 1){ break;}
            }
            break;
        case 2:
            sm1.generate_Customer_Data(7);
            while (true){
                cout << "                     -------------------------------------------------------                " << endl
                     << "                                         SHOPPING MALL                            " << endl
                     << "                     -------------------------------------------------------                " << endl;
                cout << endl;
                cout << endl
                     << " \t\t\t\t\t WELCOME TO OUR SHOP SIR/MA'AM...                                 " << endl
                     << endl
                     << endl;
                cout << "1.LOGIN" << endl;
                cout << "2.REGISTER" << endl;
                cout << "3.Exit" << endl;
                cout << "\nEnter your choice :";
                cin >> select;
                cout << endl;

                switch (select){
                case 1:
                    sm1.login_Customer();
                    break;
                case 2:
                    sm1.registerCustomer();
                    break;
                case 3:
                    cout << "Thanks for Visiting To Our Store \n  Visit Again \n Have Good Day!!!" << endl;
                    exit(1);
                    break;
                default:
                    system("cls");
                    cout << "You've made a mistake , give it a try again\n"
                         << endl;
                }
            }
        case 3:
            cout << "                     -------------------------------------------------------                " << endl
                 << "                                         SHOPPING MALL                            " << endl
                 << "                     -------------------------------------------------------                " << endl;
            cout << endl;
            cout << "\t\t\t    Thank you For Visiting,Visit Again!\n\t\t\t    Have A Great Day! " << endl;
            exit(1);
            system("CLS");
        default:
            cout << "                     -------------------------------------------------------               " << endl
                 << "                                         SHOPPING MALL                            " << endl
                 << "                      -------------------------------------------------------                " << endl;
            cout << endl;
            cout << '\a';
            cout << " \t\t\t\t\t\t\nNo Such Match Found!" << endl;
        }
    }
    return 0;
}