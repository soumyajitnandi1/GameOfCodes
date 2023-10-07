#ok
import random


def play():
    amt=0
    for i in range(1,100):
        r=random.uniform(0,1)
        if(r<0.5):
            amt=amt+1
    return amt


s=0
for i in range(0,100):
    s=s+play()/100
print(s)    
                

