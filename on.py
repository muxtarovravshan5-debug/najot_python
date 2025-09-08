f = open("salom.txt", encoding='utf-8')
lst=[]
count=0
x=0
for i in f.read().split("\n"):
    lst += i.split(',')[1:2]
        
for i in lst: 
    count+=1       
    if i=='visa':
        print(lst[count])