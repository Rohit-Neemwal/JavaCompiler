class test_25
{  
    public static void main(int args[])
    {  
	int x = 20;
	int y = 18;
	if (x > y) 
  		System.out.println(1);
    
    for(int i = 0; i<x-y; i++){
        System.out.println(i);
    }

    while((x+y)--){
        if((x+y)%2) System.out.println(x+y);
    }
    }

      
}