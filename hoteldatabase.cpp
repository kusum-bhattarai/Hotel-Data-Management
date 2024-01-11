#include <iostream>
using namespace std;

int main()
{
    int quant, choice;
    //quantity of items
    int Qrooms=0, Qpasta=0, Qburgers=0, Qnoodles=0, Qchicken=0, Qdrinks=0, Qcake=0;
    //items sold
    int Srooms=0, Spasta=0, Sburgers=0, Snoodles=0, Schicken=0, Sdrinks=0, Scake=0;
    //total price of items
    int Total_rooms=0, Total_pasta=0, Total_burgers=0, Total_noodles=0,
    Total_chicken=0, Total_drinks=0, Total_cake=0;
    
    cout<<"Quantity of items available:  "<<endl;
    cout<<"Rooms available: " <<endl;
    cin>>Qrooms;
    cout<<"Quantity of pasta"<<endl;
    cin>>Qpasta;
    cout<<"Quantity of burgers"<<endl;
    cin>>Qburgers;
    cout<<"Quantity of noodles"<<endl;
    cin>>Qnoodles;
    cout<<"Quantity of chicken-sandwich"<<endl;
    cin>>Qchicken;
    cout<<"Quantity of drinks"<<endl;
    cin>>Qdrinks;
    cout<<"Quantity of cake"<<endl;
    cin>>Qcake;
    
    m:

    cout<<"\n\t\t\t Please select from the menu options";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burgers";
    cout<<"\n4) Noodles";
    cout<<"\n5) Chicken-sandwich";
    cout<<"\n6) Drinks";
    cout<<"\n7) Cake";
    cout<<"\n8) Information regarding sales and collection";
    cout<<"\n9) Exit";

    cout<<"\n\n Please enter your choice!";
    cin>>choice;

    switch(choice){
case 1:
cout<<"\n\n Enter the number of rooms you want: ";
cin>>quant;
if(Qrooms-Srooms >=quant)
{
    Srooms = Srooms+quant;
    Total_rooms = Total_rooms +(quant*250);
        cout<<"\n\n\t\t"<<quant<<" room/rooms have reserved for you.";
}
else 
    cout<<"\n\tOnly "<<Qrooms-Srooms<<" rooms are available in hotel.";
    break;

case 2:
cout<<"\n\n Enter pasta quantity: ";
cin>>quant;
if(Qpasta-Spasta >= quant)
{
    Spasta = Spasta+quant;
    Total_pasta = Total_pasta +(quant*22);
        cout<<"\n\n\t\t"<<quant<<" pasta ordered.";
}
else 
    cout<<"\n\tOnly "<<Qpasta-Spasta<<" pasta available.";
    break;

case 3:
cout<<"\n\n Enter the quantity of burgers ";
cin>>quant;
if(Qburgers-Sburgers >=quant)
{
    Sburgers = Sburgers+quant;
    Total_burgers = Total_burgers +(quant*1200);
        cout<<"\n\n\t\t"<<quant<<" burgers ordered.";
}
else 
    cout<<"\n\tOnly "<<Qburgers-Sburgers<<" burgers available.";
    break;

case 4:
cout<<"\n\n Enter the quantity of noodles ";
cin>>quant;
if(Qnoodles-Snoodles >=quant)
{
    Snoodles = Snoodles+quant;
    Total_noodles = Total_noodles +(quant*1200);
        cout<<"\n\n\t\t"<<quant<<" plates of noodles ordered";
}
else 
    cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" plates of noodles available.";
    break;

case 5:
cout<<"\n\n Enter the quantity of chicken-sandwich: ";
cin>>quant;
if(Qchicken-Schicken >=quant)
{
    Schicken = Schicken+quant;
    Total_chicken = Total_chicken +(quant*1200);
        cout<<"\n\n\t\t"<<quant<<" chicken-sandwich ordered.";
}
else 
    cout<<"\n\tOnly "<<Qchicken-Schicken<<" chicken-sandwich available.";
    break;

case 6:
cout<<"\n\n Enter the quantity of drinks: ";
cin>>quant;
if(Qdrinks-Sdrinks >=quant)
{
    Sdrinks = Sdrinks+quant;
    Total_drinks = Total_drinks +(quant*1200);
        cout<<"\n\n\t\t"<<quant<<" drinks ordered.";
}
else 
    cout<<"\n\tOnly "<<Qdrinks-Sdrinks<<" drinks available.";
    break;

case 7:
cout<<"\n\n Enter the quantity of cake: ";
cin>>quant;
if(Qcake-Scake >=quant)
{
    Scake = Scake+quant;
    Total_cake = Total_cake +(quant*1200);
        cout<<"\n\n\t\t"<<quant<<" cake ordered.";
}
else 
    cout<<"\n\tOnly "<<Qcake-Scake<<" cake available";
    break;    

case 8:
    cout<<"\n\n\t\tDetails of sales and collection "; 
    cout<<"\n\n Number of rooms we had: "<<Qrooms;
    cout<<"\n\n Number of rooms we rented:  "<<Srooms;
    cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
    cout<<"\n\n Total rooms sales for the day: "<< Total_rooms;

    cout<<"\n\n Quantity of pasta we had: "<<Qpasta;
    cout<<"\n\n Number of pasta orders:  "<<Spasta;
    cout<<"\n\n Remaining pasta: "<<Qpasta-Spasta;
    cout<<"\n\n Total pasta sales for the day: "<< Total_pasta;

    cout<<"\n\n Quantity of burgers we had: "<<Qburgers;
    cout<<"\n\n Number of burgers ordered:  "<<Sburgers;
    cout<<"\n\n Remaining burgers: "<<Qburgers-Sburgers;
    cout<<"\n\n Total burgers sales for the day: "<< Total_burgers;

    cout<<"\n\n Quantity of noodles we had: "<<Qnoodles;
    cout<<"\n\n Number of noodles ordered:  "<<Snoodles;
    cout<<"\n\n Remaining noodles: "<<Qnoodles-Snoodles;
    cout<<"\n\n Total noodles sales for the day: "<< Total_noodles;

    cout<<"\n\n Quantity of chicken-sandwich we had: "<<Qchicken;
    cout<<"\n\n Number of chicken-sandwich ordered:  "<<Schicken;
    cout<<"\n\n Remaining chicken-sandwich: "<<Qchicken-Schicken;
    cout<<"\n\n Total chicken-sandwich sales for the day: "<< Total_chicken;

    cout<<"\n\n Quantity of drinks we had: "<<Qdrinks;
    cout<<"\n\n Number of drinks ordered:  "<<Sdrinks;
    cout<<"\n\n Remaining drinks: "<<Qdrinks-Sdrinks;
    cout<<"\n\n Total drinks sales for the day: "<< Total_drinks;

    cout<<"\n\n Quantity of cake we had: "<<Qcake;
    cout<<"\n\n Number of cakes ordered:  "<<Scake;
    cout<<"\n\n Remaining cake : "<<Qcake-Scake;
    cout<<"\n\n Total cake sales for the day: "<< Total_cake;
    
    cout<<"\n\n\n Total collection for the day = "<<Total_rooms+Total_pasta+Total_burgers+Total_noodles
    +Total_chicken+ Total_drinks+ Total_cake;

    case 9:
    exit(0);
    default:
    cout<<"Please select from the numbers mentioned above!" << endl;
    }
    goto m;

    return 0;
}