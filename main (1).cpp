#include <iostream>

using namespace std;
class calculator
{
private:
    float a, b ,res;
    char o;
    int commandC;
public:
    void menuC()
    {
        string b[]={"1.home , 2.start , 3. stop 4.exit "};

        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
        cout << "////////////////////////////////////////////////////////" << endl;
        cout<<"1.home ,"<<endl<<"2.start"<< endl<<"3. stop"<<endl<<"4.exit "<<endl;
        cout << "////////////////////////////////////////////////////////" << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
        cout<<"command:"<<endl;
        cin>>commandC;
    }

    void set ()
    {
        cout<<"addad ra vared kkonid"<<endl;
        cin>>a>>b;
        cout<<"char"<<endl;
        cin>>o;
    }
    void mohasebe()
    {
        switch(o)
        {
            case '+':
                res=a+b;
                cout<<res;

                break;
        }
    }
    void stopp()
    {
        cout <<"natije nahaee: "<<res<<endl;
    }
    void commandCC()
    {
        switch (commandC)
        {
            case 1:
                break;

            case 2:
               set();
                break;

            case 3:
                mohasebe();
                stopp();
                break;

        }
    }
};
class basee : public calculator
{
private:
    int command;
   string a[5]={"1.home      ","2.calculator","3.notepad   ","4.casting   ","5.contact   "};
    public:
    void home()
    {
        cout << "////////////////////////////////////////////////////////" << endl;
        for(int i=0;i<5;i++)
        {
            cout<<"||                    "<<a[i]<< "                      ||"<<endl;

        }
        cout << "////////////////////////////////////////////////////////" << endl;
        cout<<"command:"<<endl;
        cin>>command;
switch(command)
{
    case 1:
        break;
    case 2:
calculator obj;
obj.menuC();

        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
}
    }

};

int main() {

  basee obj;
  obj.home();
  calculator obj1;
  obj1.menuC();
  obj1.set();
  obj1.mohasebe();
  obj1.stopp();


    return 0;
}
