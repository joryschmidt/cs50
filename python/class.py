class Car:
    # This special method is required if you plan on using parameters when instantiating objects defined from this class
    def __init__(self, seats=4):
        self.seats = seats

    wheels = 4
    def howmanywheels(self):
        print(f'I have {self.wheels} wheels')


car = Car(2)
four_seater = Car()
car.howmanywheels()
print('and ' + str(car.seats) + " seats")

print(f"four_seater has {four_seater.seats} seats")