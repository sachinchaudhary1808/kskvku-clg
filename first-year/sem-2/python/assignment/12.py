"""
0 – 50 Units: Rs. 3.05 per unit
51 – 100 Units: Rs. 3.50 per unit
101 – 250 Units: Rs. 4.15 per unit
Above 250 Units: Rs. 5.20 per unit
"""

unit = int(input("Enter total unit consumption: "))

if unit <= 50:
    bill = unit * 3.05
elif unit <= 100:
    bill = unit * 3.50
elif unit <= 250:
    bill = unit * 4.15
else:
    bill = unit * 5.20

print(bill)
