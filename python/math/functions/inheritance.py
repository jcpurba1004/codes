class Parent():

    def print_last_name(self):
        print('Purba')


class Child(Parent):

    def print_first_name(self):
        print('Jeremiah')

Jeremiah = Child()
jeremiah.print_first_name
jeremiah.print_last_name