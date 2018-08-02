#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <windows.h>
#include <string.h>
#include "Type.h"
#include "Function.h"

using namespace std;


std::map<std::string, Function> functions;
std::map<std::string, Type*> variables;

void executeF(char* c)
{
    functions[c].run();
}

void loadvariable(char* c)
{
    if(strcmp(c, "int")==0)
        {
            c+=4;
            variables[c];
            *((int*)(variables[c]->getcontent()))=4;
        }
else if(strcmp(c, "float")==0)
        {

        }
    //variables[c];

}


int main()
{

    functions["click"]=Function([](){Beep(100,100);});
    functions["show"]=Function([](){cout<<"show\n";});
    functions["show2"]=Function([](){cout<<"show2\n";});
    functions["sleep"]=Function([](){Sleep(1000);});

    functions["add"].parameters["a"];
    functions["add"].parameters["b"];
    functions["add"]=Function([](){cout<<functions["add"].parameters["a"]+functions["add"].parameters["b"]<<endl;});



    ifstream file("lol.lfop");
    if(!file.is_open())
        {
        return 1;
        }

    while(!file.eof())
        {
         char line[250]={0};

            file.getline(line, 250);

            int pos=0;
            for(pos=0; line[pos]==' '||line[pos]=='\t'; pos++){};

            for(;line[pos]!=0;pos++)
                {
                    if(line[pos]=='@')
                        {
                            executeF(&line[pos+1]);
                            break;
                        }
                else if(line[pos]=='$')
                        {
                            loadvariable(&line[pos+1]);
                            break;
                        }
                }


        }
    file.close();

    cout<<"\nProcess ended\n";
    cin.get();
    return 0;
}
