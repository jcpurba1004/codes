from operator import itemgetter

users = [
    {'fname': 'Bucky', 'lname': 'Roberts'},
    {'fname': 'Tom', 'lname': 'Roberts'},
    {'fname': 'Bernie', 'lname': 'Zunks'},
    {'fname': 'Jenna', 'lname': 'Hayes'},
    {'fname': 'Sally', 'lname': 'Jones'},
    {'fname': 'Amanda', 'lname': 'Roberts'},
    {'fname': 'Tom', 'lname': 'Williams'},
    {'fname': 'Dean', 'lname': 'Hayes'},
    {'fname': 'Bernie', 'lname': 'Barbie'},
    {'fname': 'Tom', 'lname': 'Jones'},
]


for x in sorted(users, key=itemgetter('fname')):
    print(x)

print('-----')
for x in sorted(users, key=itemgetter('fname', 'lname'))
    print(x)
