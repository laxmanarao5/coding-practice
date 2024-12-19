import re
pattern="(0|91)?[6-9][0-9]{9}$"
def phone(p):
    if re.match(pattern,str(p)):
        return True
    else:
        return False