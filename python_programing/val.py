def IsIn(a, b):
    if len(a)>len(b):
        value = len(a)
        value2 =len(b)
    else:
        value =len(b)
        value2 =len(a)
    index =0
    index2 =0
 
    if a[index:value] == b[index2:value2]:
        print('true for a')
        index = index+1
        print(index)
    else:
        a[index:value2] == b[index2:value]
        print('true for b')
        index = index+1
        print(index)
    print("it worked")
IsIn('john', 'hn')