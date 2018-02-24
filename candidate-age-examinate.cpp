#include <iostream>
using namespace std;

int wiek;
int main()
{
   
    cout <<"Ile masz lat:";
    cin >>wiek;
    
    if (wiek<18)
    {
        cout <<"Jesteś niepełnoletni i nie możesz zostać prezydentem";
    }
    else if ((wiek>=18)&&(wiek<35))
    {
        cout <<"Jesteś pełnoletni, ale nie możesz zostać prezydentem";
    }
    else
    {
        cout <<"Możesz zostać prezydentem";
    }
    return 0;
}
