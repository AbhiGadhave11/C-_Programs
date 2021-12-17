#include<iostream>
using namespace std;

typedef unsigned long int UINT;

UINT CountBit(UINT iNo,int iPos1,int iPos2)
{
	UINT iMask1 = 0x00000001,iMask=0x00000000,iResult=0;
  UINT iMask2 = 0x00000001;
  
  iMask1 = iMask1<<(iPos1-1);
  iMask2 = iMask2<<(iPos2-1);

  iMask = iMask1 | iMask2;
     
  iResult = iMask ^ iNo;
  
  return iResult;
}
int main()
{
  
    UINT iValue=0,iRet=0;
    int pBit1=0,pBit2=0;

    cout<<"Enter Number\n";
    cin>>iValue;
    cout<<"Enter First Position";
    cin>>pBit1;

     cout<<"Enter second Position";
    cin>>pBit2;
    iRet = CountBit(iValue,pBit1,pBit2);

    cout<<"Updated Number is :"<<iRet<<"\n";

	return 0;
}