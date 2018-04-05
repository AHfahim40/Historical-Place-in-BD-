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
    int discover;
    int histro_place;

int display(){
    cout<<"\nMahastangarh\n";
    cout<<"Cost is 35 tk\n";
    cout<<"Time is 30 miniutes\n";
    cout<<"Distance is 13.6 Km\n";
    cout<<"Discover: Francis Buchanan Hamilton was the first to locate\n";
    cout<<"Discover: and visit Mahasthangarh in 1808\n";
    cout<<"histro_place : Mahasthan Museum,Bairagir Bhita,Khodarpathar Bhita\n";
    cout<<"histro_place : Shrine of Hazrat Shah Sultan Balkhi,Jiyot Kunda,Govinda Bhita\n";
    cout<<"histro_place : Gokul Medh,Palace of Parshuram,Bhimer Jangal,\n";
}
};

class ShalbanVihara : public Bangladesh

{

public :
    int display(){
    cout<<"\nShalban Vihara\n";
    cout<<"Cost is 40 tk\n";
    cout<<"Time is 33 miniutes\n";
    cout<<"Distance is 10 Km\n";
    cout<<"Discover: Before 1200 years ago the King Bhava Deva\n";
    cout<<"Discover: The fourth ruler of the Early-Deva dynasty built\n";
    cout<<"Discover: that place on 168 square meters of ground\n";
    cout<<"Discover: It was the royal palace for\n";
    cout<<"Discover: the early Buddhist students\n";
    cout<<"Discover: This site, previously called Shalban Rajar Bari\n";
    cout<<"Discover: came out after archaeological excavation as\n";
    cout<<"Discover: a Buddhist monastery\n";
    cout<<"Discover: and hence termed as Salban vihara from \n";
    cout<<"Discover: the terracotta seals and copper plates discovered\n";
    cout<<"histro_place : Staircases,Chapels,Niches,The central shrine\n";
}
};

class SomapuraMahavihara : public Bangladesh
{

public :
    int display(){
    cout<<"\nSomapura Mahavihara\n";
    cout<<"Cost is 100 tk\n";
    cout<<"Time is 1 h 8 min\n";
    cout<<"Distance is 32.0 km\n";
    cout<<"Discover: A number of monasteries grew up during the Pāla period in ancient Bengal and Magadha\n";
    cout<<"Discover: According to Tibetan sources, five great Mahaviharas stood out\n";
    cout<<"Discover: Vikramashila, the premier university of the era; Nalanda\n";
    cout<<"Discover: past its prime but still illustrious; Somapura Mahavihara\n";
    cout<<"histro_place : 'Chamunda' Statue of Clay Stone,Nandi Statue\n";
    cout<<"histro_place : Standing 'Seetala' Statue of Red Stone,Sun Statue\n";
    cout<<"histro_place : 'Keerti' Statue of Clay Stone,Damaged 'Haargouri' Statue\n";
    cout<<"histro_place : 'Visnu' Statue of Krishna Stone,'Mansha' Statue of Clay Stone\n";
    cout<<"histro_place : 'Uma' Statue of krishna Stone,Broken Statue of Laxmi Narayan of Krishna Stone\n";

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
            cout<<"3 for Somapura Mahavihara"<<endl;
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
            case 3 :

                SomapuraMahavihara k1;
                k1.display();
                break;

            case 0 :
                return 0;
            }
            cout<<"Do you went to continue (Y/N) : ";
            cin>>Ch1;

        }while(Ch1 == 'Y' || Ch1 == 'y');

            return 0;

        }


