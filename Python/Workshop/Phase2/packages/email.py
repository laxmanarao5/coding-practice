import re
pattern="^[0-9a-z][a-z0-9._]{5,35}[@][a-z.]{4,10}[.][a-z]{2,5}$"
def email(mail):
    if re.match(pattern,mail):
        return True
    else:
        return False