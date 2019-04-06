def exactMatch(text, lenText, curr_pos, pat, curr_pos_pat, lenPat):
    
    if curr_pos == lenText:
        return False
    if curr_pos_pat == lenPat:
        return True
    if text[curr_pos] == pat[curr_pos_pat]:
        return exactMatch(text, lenText, curr_pos + 1, pat, curr_pos_pat + 1,lenPat)
    return False
def contains(text, lenText, curr_pos, pat, curr_pos_pat, lenPat):
    if curr_pos == lenText:
        return False
    if text[curr_pos] == pat[curr_pos_pat]:
        if exactMatch(text, lenText, curr_pos, pat, 0, lenPat):
            return 1
        else:
            return contains(text, lenText, curr_pos + 1, pat, curr_pos_pat, lenPat)
    else:
        return contains(text, lenText, curr_pos + 1, pat, curr_pos_pat, lenPat)
text = input()
pat = input()
lenText = len(text)
lenPat = len(pat)
curr_pos_pat = 0
print(contains(text, lenText, 0, pat, curr_pos_pat, lenPat))
    
