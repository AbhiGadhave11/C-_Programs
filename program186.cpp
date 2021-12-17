#include<iostream>
using namespace std;

class Marvellous
{
   public :
    
    int Addition(int x,int y)
    {
        int iAns = 0;
        iAns = x + y;
        return iAns;
    }

};
int main()
{
    int iNo1=0,iNo2=0,iRet=0;     
     cout<<"Enter First Number\n";
     cin>>iNo1;
     
     cout<<"Enter Second Number\n";
     cin>>iNo2;

     Marvellous mobj;
     //Marvellous mobj = new Marvellous(); //java 
     //Marvellous mobj = new Marvellous;  //c++
     iRet = mobj.Addition(iNo1,iNo2);

     cout<<"Addition is : "<<iRet<<"\n";
	return 0;
}