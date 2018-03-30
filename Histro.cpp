#include<iostream>
using namespace std;

    class Bangladesh
    {
        public:
        int display()
        {
            cout<<"Historical Place in BD"<<endl;

        }

    };

class Mahastangarh : public Bangladesh

{
    public:
    int cost;
    int time;
    int distance;

int display(){
    cout<<"Mahastangarh\n";
    cout<<"Cost is 30 tk\n";
    cout<<"Time is 45 miniutes\n";
    cout<<"Distance is 13 Km\n";
}
};

class Shalban Vihara: public Bangladesh

{

    int display(){
    cout<<"Shalban Vihara\n";
    cout<<"Cost is 25 tk\n";
    cout<<"Time is 33 miniutes\n";
    cout<<"Distance is 10 Km\n";
}


        int main()
        {
            Bangladesh b1;
            Mahastangarh m1;
            Shalban Vihara s1;
            b1.display();
            m1.display();
            s1.display();
            return 0;

        }


