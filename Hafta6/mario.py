from cs50 import get_int

key=0

while(key==0):
    h=get_int("Height:")
    if(h>0 and h<9):
        for i in range(1,h+1):
                
            for j in range(h - i):
                print(" ", end = "")
            for k in range(i):
                print("#", end = "")
            print("")
            key=1
        
    else:
        key=0
    
        
    


    

        

