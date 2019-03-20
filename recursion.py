class stringg:
    def reverse(self,string):
        if len(string) == 0:
            return string 
        else:
            return s.reverse(string[1 :])+string[0]
 
    s=stringg()
    a=str(input(""))
    print(s.reverse(a))

    
