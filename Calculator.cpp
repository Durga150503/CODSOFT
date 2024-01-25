#include <iostream>

using namespace std;

int main()
{
    int val1,val2,op,x;
    do{
        cout<<"1.+\n";
        cout<<"2.-\n";
        cout<<"3./\n";
        cout<<"4*\n";
        cout<<"5%\n";
        cin>>op;
        cout<<"Enter val1:";
        cin>>val1;
        cout<<"Enter val2:";
        cin>>val2;
        switch(op)
        {
            case 1:
            cout<<val1+val2<<endl;
            break;
            case 2:
            cout<<val1-val2<<endl;
            break;
            case 3:
            cout<<val1/val2<<endl;
            break;
            case 4:
            cout<<val1*val2<<endl;
            break;
            case 5:
            cout<<val1%val2<<endl;
            break;
            if(op>5);
            cout<<"Error"<<endl;
            break;
        }
        cout<<"if you want to continue click 1 else 0"<<endl;
        cin>>x;
    }
        while(x);
        return 0;
}
