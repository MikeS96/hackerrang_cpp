/*Goal:
*/

#include "main.hpp"

int main()
{
    Cat c1("polly", 20.0, "cat");
    Dog d1("spot", 30.0, "dog");
    
    cout<<"\nPolly Rate: $"<<c1.calcDailyRate();
     cout<<"\nSpot Rate: $"<<d1.calcDailyRate();
   
    return 0;
}
