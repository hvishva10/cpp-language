#include<iostream>
#include<string.h>

using namespace std;

class customer
{
     protected:
    string name, contact;
    public:
     void getdata()
     {
          cout<<"\n\t\t ************ n.y pizza ************ \n";
          cout<<"Enter your Name : ";
          cin>>name;
          cout<<"Enter your Number : ";
          cin>>contact;
     }

     void showdata()
     {
          cout<<"\n\t Name               : "<<name<<endl;
          cout<<"\n\t Contact Number     : "<<contact<<endl;
     }

};


class bill : public customer 
{

    protected :   

      double  GST  ,  dis , Netbill,billamt =0;
       int   Bill =0 , quty;

      string items[5];

     public :


      int item1()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quty;
         items[0] = "cheese pizza = 150 ";
         return Bill = Bill + quty*150;
      }

      int item2()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         items[1] = "sendwich pizza = 200 ";
         return Bill = Bill + quty*200;
      }

      int item3()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         items[2] = "italian pizza = 280";
         return Bill = Bill + quty*280;
      }
       int item4()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quty;
         items[3] = "margarita pizza = 400";
         return Bill = Bill + quty*400;
      }

      int item5()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quty;
         items[4] = "panner chilli pizza= 350";
         return Bill = Bill + quty*350;
      }


      double ShowBillAmt()
      { 
         
         return billamt = billamt + Bill;
      }

      double Showdis()
      {
         if (billamt >  5000 )
        {
            return dis = ( billamt *10  ) / 100; 
        }
     else 
        {
            return dis = 0;
        }
      }

      double ShowGST()
      {
         return  GST = ( billamt * 5) / 100;  
      }

      double ShowNetbill()
      {
        return Netbill =   billamt +  GST - dis ;
      }
   


      void ShowNetBill()
      {
            ShowbillItems();
            cout<<"\n\t Total price is     : "<<ShowBillAmt()<<endl;
            cout<<"\n\t GST                : "<<ShowGST()<<endl;
            cout<<"\n\t Discount           : "<<Showdis() <<endl;
            cout<<"\n\t Net Bill iS        : "<<ShowNetbill()<<endl; 
      }
       void ShowbillItems()
      {

         int i ;

         for(i=0;i<5;i++)
         {
         if(!items[i].empty())
         {
            cout<<"\n\t "<<i+1<<":"<<items[i]<<endl;
         }
         }
      }

};


int main ()
{

     bill a ;
     

        a.getdata();

        cout<<"\n\t\t\t ************* Menu ************* \n";
        cout<<" \n \t\t\t 1. cheese pizza                    : RS. 150 /- "; 
        cout<<" \n \t\t\t 2. sendwich pizza                  : RS. 200 /- "; 
        cout<<" \n \t\t\t 3. italian pizza                   : RS. 280 /- "; 
        cout<<" \n \t\t\t 4. margarita pizza                 : RS. 400 /- ";
        cout<<" \n \t\t\t 5. paneer chilli pizza             : RS. 350 /- \n";
        cout<<" \n \t\t\t  Confirm Your Order       [0]  \n";

        int i;

        do
        {
         cout<<"\n Enter your order : ";
         cin>>i;
        switch (i)
        {
        case 1: 
             a.item1();
             
            break;
        case 2: 
             a.item2();
              
            break;
        case 3: 
             a.item3(); 
              
            break;
        case 4: 
             a.item4();
            
            break;
        case 5: 
            a.item5();
            
            break;

        case 0: 
           break;
            }

      } while (i!=0);


            a.showdata();
            a.ShowNetBill();

}


