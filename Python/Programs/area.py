year=int(input("enter a year:"))
if(year%4)==0:
    if(year%100)==0:
        if(year%400)==0:
            pint("{0}is leap year".format(year))
        else:
            pint("{0}is not leap year".format(year))
    else:
         pint("{0}is leap year".format(year))
 else:
     pint("{0}is leap year".format(year))
