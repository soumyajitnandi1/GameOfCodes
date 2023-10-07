#ok
def intersect(l1,l2):
    a=[]
    for i in l1:
        if i in l2 and i not in a:
            a.append(i)
    return(a)        
