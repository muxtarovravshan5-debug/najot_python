#tpl = ("salom", "Hayr", "maktab", "alik")
#lst = list([x for x in tpl if len(x)>5])
#print(lst)

#----------------------------------------------

#tpl = ((1,3), (0,2,0), (1,1,1), (0,4), (1,9))
#tpl2 = [sum(x) for x in tpl]
#print(tpl2)

#----------------------------------------------


#tpl = ((1,2,3), (2,2), (3,0,0))
#lst = sorted(tpl, key=lambda x: sum(x))
#print(lst)

#------------------------------------------------

tpl
lst = [i[0] for i in tpl for x in i]
lst2 =[i[1] for i in tpl for x in i]
print(lst)
print(lst2)