#include <iostream>
#include<stdlib.h>

using namespace std;

int main(){
    string str;
    cout<<"ingrese una palabra: ";
    cin>>str;
    int i;

    for ( i = 0; i < str.length(); i++)
    {
    
        if (i==0)    
           cout<<str[i];
        
        if (i== str.length()-1)    
            cout<<str[i]<<endl;

        if (str[i]==' ')
        {
            cout<<str[i-1]<<" "<<str[i+1]<<endl;
        }
        
    }

    
    
}