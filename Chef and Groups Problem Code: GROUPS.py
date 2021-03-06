# cook your dish here
def group():
               x=input()
               c=0
               if x[0]=='1':
                              c+=1 
               for i in range(1,len(x)):
                              if x[i]=='1' and x[i]!=x[i-1]:
                                             c+=1 
               print (c)
for i in range (int(input())):
               group()
                              # TODO: write code...
