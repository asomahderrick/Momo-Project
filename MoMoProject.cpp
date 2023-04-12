#include <iostream>

using namespace std;

int main() {
	
	 int pin=0000;// Default pin;
   int balance=1000.00;// Default balance ;
   int attempt=0;// Number of incorrect pin attempts ;
while(true){// program runs until exit option is selected ;
cout<<" Welcome to Mobile money services"<<endl;
cout<<" 1. Authentication"<<endl;
cout<<" 2. Reset Pin/Change Pin" <<endl;
cout<<" 3. Check balance"<<endl;
cout<<" 4. Send Money"<<endl;
cout<<" 5. Exit"<<endl;

int option;
cout<<"Select an option";
cin>> option;
if( option==1){// Authentication ;
int entered_pin;
cout<<"Enter Pin:";
cin>>pin;
if(entered_pin==pin){cout<<"Authentication successful"<<endl;
attempt=0;
}
else{
attempt++;
if(attempt==3){cout<<"You have exceeded the maximum number of attempts.Exiting program"<<endl;
break;
}
    else{cout<<"Authentication failed. Incorrect pin entered"<<endl;
      }
    }
   }
else if(option==2){//Reset/Change Pin ;
int new_pin;
cout<<"Enter new pin:";
cin>>new_pin;
cout<<"Pin changed successfully"<<endl;
}
else if(option==3){//check Balance ;
cout<<"Your balance is: " <<balance<<endl;
}
else if(option==4){//Send Money ;
int recipient_number;
float amount;
cout<<"Enter recipient's phone number.";
cin>>amount;
if(amount>balance){cout<<"Insufficient balance"<<endl;
}
else{balance-=amount;
cout<<"Transaction successful."<<amount<<"sent to"<<recipient_number<<endl;
}
}
else if(option==5){//Exit break;
}
else{cout<<"Invalid option selected, please select a valid number"<<endl;
}
    }

	return 0;
}
