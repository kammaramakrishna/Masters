d = {1:10,2:20,3:30,4:40,5:50,6:60}
d1 = {7:70,8:80}
print(d.pop(1)) #pop items
print(d.popitem())  #remove arbitary element
del d[5]    #delete element
print(d)
d.update(d1)    #update dictionary
print(d)
print(d.items())    #items in dictionary
print(d.keys())     #display keys
print(d.values())   #display values
d2 = d.copy()       #copy dictionary
print(d2)
print(all(d))       #check all are true
print(any(d))       #check if anyone is true
print(len(d))       #print length of dictionary 
print(sorted(d))    #print sorted dictionary
d3 = {i : i*i for i in range(5)}    #dictionary compression
print(d3)
