#include<bits/stdc++.h>
using namespace std;

typedef struct table* Table;

//structure for a item (token or names)
typedef struct item
{   
    int  id;
    string name;
    int line;
    string type;
    string tname;
    int offset;
    int width;
    int scope;
    Table childscope;
}item;

//unordered map for entries and items are item structure
struct table{
    vector<item> mp;
    Table parent; 
    int parentitem;
    int scope;
};

// function to initialize the symbol table
void initialize();

string add(string name , int lineno,int offset,int width ,string b = "");

void ADD(string name , int lineno,int offset,int width ,string b = "");


void CLASSCHECK(string);

void start(string s);

void close();

void look(string id , int line);
void cleantable();
void lookd(string id , int line);
void lookdprevadded(string id , int line);
void lookta(string id ,string type,int offset,int width ,string tname = "");

// string lookupcurr(string name);

void printme();



