from cs50 import get_string
from sys import argv


def main():

   
    if len(argv) == 2:
        ban = set()
        if(argv[1]=='banned.txt'):
            with open("banned.txt", "r") as dosya:
                for line in dosya:
                    ban.add(line.strip())
            text = get_string("What message would you like to censor?\n")
            words = text.split(" ")
    
            sansur = ""
            
            for word in words:
                if word.lower() in ban:
                    sansur += ("*" * len(word)) + " "
                else:
                    sansur += word + " "
    
            print(sansur.strip())
        else:
            print("Usage: python bleep.py dictionary")
            exit(1)
        
    else:
        print("Usage: python bleep.py dictionary")
        exit(1)
        

if __name__ == "__main__":
    main()
