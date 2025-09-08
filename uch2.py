lst = [7,8,1,3,4,6,7,5]

lst2 = lst.copy()

for i,v in enumerate(lst):
    if i%2==0:
        v**2
    else:
        v**3

print(lst2)
print(lst)
        