#include <iostream>

using namespace std;
// Structure to represent the engine of a vehicle
struct Engine
{
    int horsePower;// Engine horsepower
    int cylinders;// Number of cylinders
    string fuelType;// Fuel type
    };
// Structure to represent a wheel of a vehicle
struct Wheel
{
    int size;// Size of the wheel
    string type;  // Type of the wheel (e.g., alloy, steel)  
};
// Structure to represent the body of a vehicle
struct Body
{
    string color;// Color of the vehicle's body
    string material;// Material used for the body (e.g., metal, plastic)
    int doors;// Number of doors on the vehicle
};
// Structure to represent a vehicle
struct Vehicle
{
    string brand;// Brand of the vehicle
    Engine engine;// Engine of the vehicle
    Wheel wheels[4];// Array of four wheels
    Body body;// Body of the vehicle

};
// Function to display a welcome message
void welcomeMessage(){
    cout << endl<<" Hey Welcome to myGarage "<<endl;
}
// Function to build a vehicle by setting its attributes
void buildVehicle(Vehicle &vehicle){
    string f;// Variable to store the fuel type input
    
    // Input and set engine properties
    cout << "First stop engine !"<<endl;
    cout << "Please enter the Horse Power : ";cin>>vehicle.engine.horsePower;
    cout << "Please enter the number of cylinders : ";cin>>vehicle.engine.cylinders;
    bool flag=false;
    // Loop to ensure valid fuel type input
    while (flag==false){
        cout << "Please enter the type of fuel Gasoline ,diesel or electric : ";
        cin >> f;
        // Check if the input is one of the accepted values
        if(f == "gasoline" || f == "Gasoline"|| f == "Diesel"|| f == "diesel"|| f == "electric"|| f == "Electric"){
            flag = true;
            continue;
        }
        cout << "Please choose from the 3 thank you !"<<endl;
    }
    vehicle.engine.fuelType = f;// Set the engine's fuel type
    
    // Input and set wheel properties
    cout << "Second Stop the Wheels ! "<<endl;
    for(int i=0;i<4;i++){
        cout << "Please enter the type of wheel "<< i+1 << " : ";cin>>vehicle.wheels[i].type;
        cout << "Please enter the size of wheel "<< i+1 << " : ";cin>>vehicle.wheels[i].size;
        cout << endl;
    }
    // Input and set body properties
    cout << " Last but not least , let's build the body ! "<<endl;
    cout << "please enter the vehicle's color : ";cin >> vehicle.body.color;
    cout << "please enter the vehicle's material : ";cin >> vehicle.body.material;
    cout << "Enter total number of doors in thwe vehicle : "; cin >> vehicle.body.doors;
    // Input and set vehicle brand
    cout << "Please enter the brand of the vehicle (BMV,TESLA,etc.) : ";cin >> vehicle.brand;
    cout << endl;
    
}
// Function to upgrade the engine of a vehicle
void UpgradeEngine(Engine &engine){
    cout << endl;
    char nch='x';// Variable to store user's choice

    // Loop to update horsepower
    while(nch != 'n' && nch != 'N' && nch != 'y' && nch!='Y'){
        cout << "Do you want to update horse power : (Y/N PLEASE)"; cin >> nch;
    }
    if(nch == 'Y' || nch =='y'){
        cout << "Please enter new horse Power : "; cin >> engine.horsePower;
    }

    nch ='x';
    // Loop to update the number of cylinders
    while(nch != 'n' && nch != 'N' && nch != 'y' && nch!='Y'){
        cout << "Do you want to update No. Of cylinder : (Y/N PLEASE)"; cin >> nch;
    }
    if(nch == 'Y' || nch =='y'){
        cout << "Please enter new no. of cylinders : "; cin >> engine.cylinders;
    }

    nch ='x';
     // Loop to update fuel type
    while(nch != 'n' && nch != 'N' && nch != 'y' && nch!='Y'){
        cout << "Do you want to update fuel type: (Y/N PLEASE)"; cin >> nch;
    }
    if(nch == 'Y' || nch =='y'){
        bool flag = false; string f;
        // Loop to ensure valid fuel type input
        while (flag==false){
        cout << "Please enter the type of fuel Gasoline ,diesel or electric : ";
        cin >> f;
        if(f == "gasoline" || f == "Gasoline"|| f == "Diesel"|| f == "diesel"|| f == "electric"|| f == "Electric"){
            flag = true;
            continue;
        }
        // Prompt user to enter a valid option
        cout << "Please choose from the 3 thank you !"<<endl;
        }
        engine.fuelType = f;    
    }

    
    
}
// Function to upgrade a specific wheel
void upgradeWheels(Wheel &wheel){
    cout <<endl<< "I see upgrading a wheel ! "<<endl;    
    cout << "Please enter the type of wheel : ";cin>>wheel.type;
    cout << "Please enter the size of wheel : ";cin>>wheel.size;
    cout << endl;
}
// Function to customize the body of a vehicle
void customizeBody(Body &body){
    cout << endl<<" A new body , let's get you the best : ";

    char nch='x';// Variable to store user's choice
    
    // Loop to update body color
    while(nch != 'n' && nch != 'N' && nch != 'y' && nch!='Y'){
        cout << "Do you want to update the body color : (Y/N PLEASE)"; cin >> nch;
    }
    if(nch == 'Y' || nch =='y'){
        cout << "Please enter new color : "; cin >> body.color;
    }

    nch='x';
    // Loop to update body material
    while(nch != 'n' && nch != 'N' && nch != 'y' && nch!='Y'){
        cout << "Do you want to update the body material : (Y/N PLEASE)"; cin >> nch;
    }
    if(nch == 'Y' || nch =='y'){
        cout << "Please enter new body material : "; cin >> body.material;
    }

    nch='x';
    while(nch != 'n' && nch != 'N' && nch != 'y' && nch!='Y'){
        cout << "Do you want to update the no. of doors  : (Y/N PLEASE)"; cin >> nch;
    }
    if(nch == 'Y' || nch =='y'){
        cout << "Please enter new no. of doors : "; cin >> body.doors;
    }
}
// Function to display the details of the vehicle
void displayVehicle(Vehicle &vehicle){
    cout << endl<<"OK time to see what we have ! " << endl ;

    cout << "Car brand : "<< vehicle.brand<<endl;
    cout << "Engine : " << endl << "        HP : "<<vehicle.engine.horsePower;
    cout << endl <<"        Cylinders : " << vehicle.engine.cylinders;
    cout << endl <<"        Fuel Type: : " << vehicle.engine.fuelType<<endl;

    cout << "Wheels  : " << endl ;
    for(int i=0 ; i<4;i++){
        cout << "        size of wheel no. "<<i+1<< " : "<<vehicle.wheels[i].size;
        cout << " || type of wheel no. "<<i+1<< " : "<<vehicle.wheels[i].type;
        cout << endl;
    }

    cout <<"Now the body ! "<<endl;
    cout << "       The color : "<<vehicle.body.color<<endl;
    cout << "       The material : "<<vehicle.body.material<<endl;
    cout << "       No. of doors : "<<vehicle.body.doors<<endl;
    

}
// Function to display the menu
void menu(){
    Vehicle  myVehicle;
    welcomeMessage();
    cout << "Before anything else , Let's start with building our vehicle ! ";
    buildVehicle(myVehicle);

    while(1){    
        cout <<endl<<"Nice build ! but let's see if we want to upgrade anything : "<<endl;
        int nch;
        nch = -1;
        while(!(nch >= 1 && nch <=4)){
            cout << "Please enter 1 to Upgrade the engine" <<endl;
            cout << "Please enter 2 to Upgrade the wheels" <<endl;
            cout << "Please enter 3 to Upgrade the body" <<endl;
            cout << "Please enter 4 to Display the vehicle : " ;cin >> nch;
        }
        if(nch == 1){UpgradeEngine(myVehicle.engine);}
        else if(nch == 2){
            int wheelNo = -1;
            while(!(wheelNo>=1 && wheelNo<=4)){
                cout << "please ennter which wheel you want to upgrade (1,2,3,4)";
                cin >>wheelNo;
            }
            upgradeWheels(myVehicle.wheels[wheelNo]);
        }
        else if(nch == 3){customizeBody(myVehicle.body);}
        else if (nch ==4) {displayVehicle(myVehicle);}
    }

    
}

int main(){
    menu();
    return 0;
}
