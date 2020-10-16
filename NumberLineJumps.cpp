
#include <iostream>
using namespace std;
int main()

{
    int x1,v1,x2,v2,i;
    int count = 0;

    cin>>x1>>v1>>x2>>v2;

    int k1 = x1;
    int k2 = x2;

    if(x2>x1&&v2>v1)

    {cout<<"NO";}

    else
        {

            for(i=1;i<=10000;i++)
            {
                k1+=v1;
                k2+=v2;

               if(k1==k2)
               {
                   cout<<"YES";
               }
               else{
                   count = count +1;
               }




            }
        if (count == 10000){
            cout<<"NO";
        }

        }
             

    return 0;
}
