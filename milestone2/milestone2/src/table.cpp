#include "table.h"

Table current_table;
Table root = new struct table;
Table global_table = new struct table;
Table local_table = new struct table;
unordered_map<string,Table> DB;
int countt = 0;

void initialize(){
    current_table = local_table;
    local_table->scope = 0;
    global_table->scope = 0;
    root->parent=NULL;
    local_table->parent = root;
    local_table->parentitem = -1;
    global_table->parent = root;
    std :: cout << " Hello! I am your symbol table" << endl;
}

string add(string name ,int lineno,int offset,int width,string type){
    
    item* e = new item;
    e->id = countt;
    e->name = name;
    e->scope = current_table->scope;
    e->line = lineno;
    e->type = type;
    e->width = width;
    e->offset = offset;
    string s = name + to_string(countt);
    Table newtable = new struct table;
    newtable->parent = current_table;
    newtable->parentitem = e->id;
    newtable->scope = current_table->scope + 1;
    DB[s] = newtable;

    e->childscope = newtable;
    current_table->mp.push_back(*e);
    global_table->mp.push_back(*e);
    countt++;
    return s;
    
    // cout << name<<"  " << scope << endl;
  

}

void ADD(string name , int lineno,int offset,int width ,string type){
    


    item* e = new item;
    e->id = countt;
    e->name = name;
    e->scope = current_table->scope;
    e->line = lineno;
    e->type = type;
    e->width = width;
    e->offset = offset;
    e->childscope = NULL;
    current_table->mp.push_back(*e);
    global_table->mp.push_back(*e);
    countt++;
    
    // cout << name<<"  " << scope << endl;
  

}


void CLASSCHECK(string s)
{





};





// string lookupcurr(string name)

void start(string s){

    current_table = DB[s];

}

void close(){

    current_table = current_table->parent;

}






void lookforclean(string id , int line,Table p,int i)
{

   if(id =="System" ||  id == "out" || id == "println"){return;}


   if(p->parent !=NULL)
   {

         for(int j = 0;j<i;j++)
        {
           
            if(p->mp[j].name == id && p->mp[j].type == "")
            {
               std:: cout << "variable : "<<id<<" : came before but type is missing (not declared) : line : "<<line<<endl;
                std::exit(0);
            }
            if(p->mp[j].name == id && p->mp[j].type != "")
            {
                return ;
            }



        }



   }
   int iter = p->parentitem;
   p=p->parent;

    while(p->parent !=NULL )
    {
        for(auto x : p->mp)
        {
           if(x.id > iter) { break;}
            if(x.name == id && x.type == "")
            {
                std::cout << "variable : "<<id<<" : came before "<<x.scope<<"but type is missing (not declared) : line : "<<line<<endl;
                std::exit(0);
            }
            if(x.name == id && x.type != "")
            {
                return ;
            }



        }
        iter = p->parentitem;
        p = p->parent;
        
    }

    std::cout << " variable : "<<id<<" : declaration not found ( type is missing ) : line : "<<line<<endl;
    std::exit(0); 
}
















void look(string id , int line)
{
    Table p = current_table;

    while(p->parent !=NULL )
    {
        for(auto x : p->mp)
        {
           
            if(x.name == id && x.type == "")
            {
                std::cout << "variable : "<<id<<" : came before but type is missing (not declared) : line : "<<line<<endl;
                std::exit(0);
            }
            if(x.name == id && x.type != "")
            {
                return ;
            }



        }

        p = p->parent;
    }

    std::cout << " variable : "<<id<<" : declaration not found ( type is missing ) : line : "<<line<<endl;
    std:: exit(0); 
}


void lookd(string id , int line)
{
    Table p = current_table;

   
        for(auto x : p->mp)
        {
            if(x.name == id && x.type == "")
            {
                std::cout << "variable : "<<id<<" : used before declaration : line : "<<line<<endl;
                std::exit(0);
            }
            if(x.name == id && x.type != "")
            {
                std::cout << "variable : "<<id<<" : is already declarated before  : line : "<<line<<endl;
                std::exit(0);
            }


        }

   
    return ; 
}
void lookdprevadded(string id , int line)
{
    vector<item> p = current_table->mp;

   
        for(int i = 0 ; i<p.size()-1;i++)
        {
            if(p[i].name == id && p[i].type == "")
            {
                std::cout << "variable useddd before declaration : line : "<<line<<endl;
                std::exit(0);
            }
            if(p[i].name == id && p[i].type != "")
            {
                std::cout << "variable is already declarated before  : line : "<<line<<endl;
               std:: exit(0);
            }


        }

   
    return ; 
}



void lookta(string id , string type,int offset,int width ,string tname)
{
      
        for(int i = 0 ; i<current_table->mp.size();i++)
        {
            
            if(current_table->mp[i].name == id )
            {
               
                current_table->mp[i].type = type;
                current_table->mp[i].tname = tname;
                 current_table->mp[i].width = width;
                  current_table->mp[i].offset = offset;
              
                return;
            }


        }

   
    std::cout<<"error occured : declaration error" ;
    std::exit(0); 
}




void cleanit(Table t)
{
        for(int i = 0 ; i < t->mp.size();i++)
        {
            if(t->mp[i].type == ""){lookforclean(t->mp[i].name,t->mp[i].line,t,i); t->mp.erase(t->mp.begin()+i);i--;}

            else if(t->mp[i].childscope!=NULL)
            {   
                if(t->mp[i].childscope->mp.size()!=0)
                {
                cleanit(t->mp[i].childscope);
                }
            }           

        }
}

void cleantable() { cleanit(local_table); }


void printit(Table t)
{

   for(auto x : t->mp)
   {
       
    std::cout << x.scope <<"          "<<x.line<<"          "<<x.width<<"          "<<x.offset<<"          "<<x.type<<"            "<<x.name<<"            "<<x.tname<<endl;

   }
  
   for(auto x : t->mp)
   {
       
        if(x.childscope!=NULL)
        {
            if(x.childscope->mp.size()!=0)
            { std::cout<<"\n\n-------------------------------- "<< x.name << " and "<<x.scope+1<<" ------------------------------------------------\n"<<endl;
             printit(x.childscope);
            }
        }

   }
}

void makecsv(Table t , string s,int a)
{   
     std::ofstream csv_file(s+"_"+ to_string(a)+".csv");
     if (csv_file.is_open()) { // check if the file was successfully opened
        // write the column headers to the file
        csv_file << "scope,line,width,offset,type,name,typename\n";

        for(auto x : t->mp)
        {    
            csv_file << to_string(x.scope)+ ","+ to_string(x.line)+ ","+ to_string(x.width)+ ","+ to_string(x.offset)+ ","+ x.type + ","+ x.name+ ","+ x.tname+"\n";
        }
         csv_file.close();
     }


 for(auto x : t->mp)
   {
       
        if(x.childscope!=NULL)
        {
            if(x.childscope->mp.size()!=0)
            {
             makecsv(x.childscope,x.name,++a);
            }
        }

   }

}

void printme()
{
    makecsv(local_table,"root",0);
}








