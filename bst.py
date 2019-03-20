class node:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None
        
def height(node):
    if (node==None):
        return 0
    else:
        l=height(node.left)
        r=height(node.right)
            
        if(l>r):
            return l+1
        else:
            return r+1
        
r=node(1)

r.left=node(2)
r.left.left=node(4)
r.left.right=node(5)
r.left.left.left=node(5)
    
height(r)
    
