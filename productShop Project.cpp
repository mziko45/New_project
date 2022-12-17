

#include <iostream>

using namespace std;

  class AbstractulShop{
      public:
          string ProductName;
          int Price;
          static int  ProductCount;
    
   AbstractulShop(string ProductName, int Price) {
       
        this->ProductName=ProductName;
        this->Price=Price;
        
        ProductCount ++;
        
    }     
       void Buy(){
           cout <<"girl bought:" <<ProductName <<endl;
       }
        
        void FoodPrice(){
            cout <<"product price is:" <<Price <<endl;
        }
        
        
    
    virtual void SoldProducts()=0;
    
  };
  
  int AbstractulShop::ProductCount=0;
   
   class Cereal:public AbstractulShop {
       public:
           
        Cereal(string ProductName, int Price):AbstractulShop(ProductName, Price){};
        
           void SoldProducts(){
               cout <<"Sold out:" <<ProductName  <<endl;
           }
    };
    
    class Fruits:public AbstractulShop {
        public:
          
         Fruits(string ProductName, int Price):AbstractulShop(ProductName, Price){}
        
           void SoldProducts(){
               cout <<"sold out:" <<ProductName <<endl;
           }
    };
    
    
int main()
{
    Cereal product1("bread", 2);
    product1.Buy();
    product1.FoodPrice();
    product1.SoldProducts();
     
     cout <<endl;
    
    Fruits product2("apple", 3);
    product2.Buy();
    product2.FoodPrice();
    product2.SoldProducts();

    return 0;
}
