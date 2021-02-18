from sys import argv
from cs50 import get_string
import sys

if(len(sys.argv)==2):
    if(str.isdigit(sys.argv[1])):
        key=int(sys.argv[1])
        text=get_string("plaintext: ")
        print("ciphertext: ",end="")
        
        for i in range(len(text)):
            if(str.isupper(text[i])):
                print(f"{chr(((ord(text[i]) - 65 + key) % 26 + 65))}",end="") 
                
            elif(str.islower(text[i])):
                print(f"{chr(((ord(text[i]) - 97 + key) % 26 + 97))}",end="")
                
            else:
                print(text[i],end="")
                
                
               
        print("")
        
        
    else:
        print("Usage: python caesar.py key")
        sys.exit(1)
 
    
else:
    print("Usage: python caesar.py key")
    sys.exit(1)
    
    


























  
    

