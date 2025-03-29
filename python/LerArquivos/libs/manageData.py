def getPart(data, delim, i):
    tmp = data.split(",")
    return tmp[i-1]

def countPart(data, delim):
    tmp = data.split(delim)
    return len(tmp)