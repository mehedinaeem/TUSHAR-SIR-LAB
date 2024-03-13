def call():
    print("call outer class")

class phone:
    price=1000;
    brand='Nokia'
    features=['black','5g','smart_phone']
    
    def call(self):
        print("call the method")
        return call()
    
    def send_sms(self,no,sms):
        print(f'from {no} send {sms} i missed u')
    
my_phone=phone()
print(my_phone.features)
my_phone.call()
my_phone.send_sms(1234,'missy')