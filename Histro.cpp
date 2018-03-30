#include<iostream>
using namespace std;

    class Bangladesh
    {
        public:
        int display()
        {
            cout<<"Historical Place in BD\n"<<endl;

        }

    };

class Mahastangarh : public Bangladesh

{
    public:
    int cost;
    int time;
    int distance;

int display(){
    cout<<"\nMahastangarh\n";
    cout<<"Cost is 30 tk\n";
    cout<<"Time is 45 miniutes\n";
    cout<<"Distance is 13 Km\n";
}
};

class ShalbanVihara : public Bangladesh

{

public :
    int display(){
    cout<<"\nShalban Vihara\n";
    cout<<"Cost is 25 tk\n";
    cout<<"Time is 33 miniutes\n";
    cout<<"Distance is 10 Km\n";
}
};


        int main()
        {
            int ch;
            char Ch1;
            Bangladesh bb;


        cout<<"******* Welcome ******"<<endl;
        bb.display();
        do{
            cout<<"\nPlease enter your choice "<<endl;
            cout<<"1 for Mahastan garh "<<endl;
            cout<<"2 for Shalban Vihara"<<endl;
            cout<<"0 for exit"<<endl;
            cin>>ch;
            cout<<"You entered "<<ch<<endl;
            switch(ch){
            case 1 :
                 Mahastangarh m1;
                  m1.display();
                  break;

            case 2:

                ShalbanVihara s1;
                s1.display();
                break;

            case 0 :
                return 0;
            }
            cout<<"Do you went to continue (Y/N) : ";
            cin>>Ch1;

        }while(Ch1 == 'Y' || Ch1 == 'y');

            return 0;

        }


