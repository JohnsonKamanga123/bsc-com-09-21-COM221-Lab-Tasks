#include <iostream>
#include <random>
#include <string>

using namespace std;

//function declaration

string expirationMessage(int days);

int main(){
    unsigned int range = 11;
    random_device engine;
    uniform_int_distribution<int> randomNumbers(1,range);
    unsigned int daysUntilExpiration ;

        
        for(int i = 0 ; i < 10 ; i++){
            daysUntilExpiration = randomNumbers(engine) ;
            cout << expirationMessage(daysUntilExpiration) << endl; 
        }

}

string expirationMessage(int days){
    if( days > 5 && days < 11){
        return "Your subscription will expire soon. Renew now!" ;
    }
    else if( days > 1 && days < 6){
        return  "Your subscription will expire in " + to_string(days) + " days. \nRenew now and save 10% !"  ;
    }    
    else if( days == 1)
        return "Your subscription expires within a day! \nRenew now and save 20%" ;
    else if (days == 0){
        return "Your subscription has expired";    
    }    

    return "You have an active subscription";
}
