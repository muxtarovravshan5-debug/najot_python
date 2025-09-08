import json

# with open('dostlar.json') as f:
#     natija = json.load(f)

# for i in natija:
#     if "Matematika" in i["subject"]:
#         print(i)

#-------------------------------------

dct = {}
lst = []


with open('dostlar.json') as f:
    natija = json.load(f)

for i in natija:
    lst+=i["subject"]

list(set(lst))


for i in lst:
    for x in natija:
        if i not in x["subject"]:
            dct[i]=x["name"]
        else:
            dct[i]+=x["name"]
            

print(dct)    