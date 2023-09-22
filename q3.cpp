#include<ioStream>
using namespace std;

class Str
{
    int num;
    int i = 0, count = 0;

    public:

        Str(char *ch)
        {
            int i = 0;
            while(ch[i]!='\0')
            {
                count++;
                i++;
            }
            this->num = count;
            // cout << "parameterized" << endl; 
            // cout << this->num;
        }

        bool operator==(Str obj2)
        {
            if(this->num == obj2.num)
            {
                return true;
            }
            else
            return false;
        }
};

int main()
{
    
    char ch1[] = "hasds";
    char ch2[] = "hello";

    Str obj1(ch1);
    Str obj2(ch2);

    if(obj1==obj2)
    {
        cout << "both are same in length";
    }

    else
    cout << "both are NOT same in length";

    return 0;
}