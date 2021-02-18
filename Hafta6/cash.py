from cs50 import get_float

lira = get_float("Changed owed: ")
kurus=round (lira*100)
sayi=0
 
while(kurus>=25):
     kurus-=25
     sayi+=1
 
 
while(kurus>=10):
    kurus-=10
    sayi+=1
 
while(kurus>=5):
    kurus-=5
    sayi+=1

 
while(kurus>=1):
    kurus-=1
    sayi+=1


print(f"{sayi}")