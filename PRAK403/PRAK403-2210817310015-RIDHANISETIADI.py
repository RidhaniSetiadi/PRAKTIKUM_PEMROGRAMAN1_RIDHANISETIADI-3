bil1,bil2 = input().split()
bil1 =int(bil1)
bil2=int(bil2)
if bil1>bil2 :
    a = bil1 ; b = bil2
    while a >= bil2 and b <= bil1 :
        print("%d %d"%(a,b),end=" ")
        if a == bil2 : break
        else : print(" - ", end=" ")
        a-=1 ; b+=1
else :
    a = bil1 ; b = bil2
    while a <= bil2 and b >= bil1 :
        print("%d %d"%(a,b),end=" ")
        if a == bil2 : break
        else : print(" - ", end=" ")
        a+=1 ; b-=1
        

    
        