#C Code for Lighting Protocol increasing Darkness Interval

int output_pin11 = 11;
int output_pin12 = 12;
int input_pin2 = 2;

void setup() {
    // put your setup code here, to run once:
    pinMode(output_pin11, OUTPUT);
    pinMode(output_pin12, OUTPUT);
    pinMode(input_pin2, INPUT_PULLUP);
  }

void loop() {
 // put your main code here, to run repeatedly:
 while(digitalRead(input_pin2) == HIGH);
 
 if (digitalRead(input_pin2) == LOW){
  //camera constant high 
 digitalWrite(output_pin12, HIGH);
  //0% 1s darkness delay
 analogWrite(output_pin11, 0);
 delay(1000);
  //for loop for different pulses and delays
 int a = 10000;
 for ( a = 10000; a <= 200000; a = a + 10000 ){
 
 analogWrite(output_pin11, 255);
 delay(1000);
 analogWrite(output_pin11, 0);
 delay(a);
 }
   } 
 else {
 digitalWrite(output_pin11, LOW);
 delay(5000);
 digitalWrite(output_pin12, LOW);
  }
}
