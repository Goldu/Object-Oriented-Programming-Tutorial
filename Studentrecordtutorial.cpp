#include <iostream>
using namespace std;
class add
{
     private :
            char str[20];
            char city[20];
            int pin;
     public :
            void get_add()
            {
                 cout << "\nEnter Street:";
                 cin >>str;
                 cout << "\nEnter City:";
				 cin>>city;
				 cout << "\nEnter Postal Code:";
				 cin>>pin;
            }
            void put_add()
            {
                  cout << "\nAddress:"<< str
                       <<","<<city <<","<<pin;
            }
};
class stud  : public add
{
      private :
             int sno;
             char name[20];
             int m1,m2,m3;
      public :
             void get_data()
             {
                   cout << "\nEnter Roll No:  "; cin >> sno;
                   cout << "\nEnter Student Name: "; cin >> name;
                   cout << "\nEnter Student Math Marks: ";
                   cin >> m1;
                   cout << "\n Enter Student English Marks: ";
				   cin>>m2;
				   cout << "\n Enter Student Science Marks: ";
				   cin>>m3;
             }
             void put_data()
             {
                   cout  << "\nStudent Roll no  :" << sno;
                   cout << "\nStudent name      :" << name;
                   cout << "\nStudent marks     :" << m1 << "  " <<m2<<"  "<<m3;
            }
};
int main()
{
      stud s;
      s.get_add();
      s.get_data();
      s.put_add();
      s.put_data();
      return 0;
}
