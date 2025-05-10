#include<iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}

int main()
{   
    using namespace std;

    string name="Bro";

    cout<<"Hello "<< name;


    std::cout<<first::x<<std::endl;
}