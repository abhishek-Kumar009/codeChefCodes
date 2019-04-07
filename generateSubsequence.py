def generateSubSequence(s, ln_list, index, lst):
    if index == ln_list:
        return lst
    seq = generateSubSequence(s, ln_list, index + 1, lst)
    
    ans = []
    for i in range(len(seq)):
        ans.append(seq[i])
        ans.append(seq[i] + s[index])
    return ans
string = input()
lst = ['']
subSeq = generateSubSequence(string, len(string), 0, lst)
print(subSeq)
