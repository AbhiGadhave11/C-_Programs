#include<iostream>
using namespace std;

typedef unsigned long int UINT;

UINT ToggleRange(UINT iNo,int iStart,int iEnd)
{
    return (iNo ^((0xffffffff<<(iStart-1)) & (0xffffffff>>(32-iEnd))));
}


int main()
{
  
    UINT iValue=0,iRet=0;
    int i=0,j=0;
    cout<<"Enter Number\n";
    cin>>iValue;
   
    cout<<"Enter Starting Point\n";
    cin>>i;
   
    cout<<"Enter Ending Point\n";
    cin>>j;
    
    iRet = ToggleRange(iValue,i,j);

    cout<<"Updated Number is : "<<iRet<<"\n";
    //printf("%lu\n",iRet);

	return 0;
}