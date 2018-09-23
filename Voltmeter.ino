/*
  Multiprobe Voltmeter
  Reads analog input at pin 0, 1, 2 and 3, gets average value, converts it to voltage, and prints the result to the serial monitor.
  Used for multiple voltage readout
 */
float ADCreadout1;
float ADCreadout2;
float ADCreadout3;
float ADCreadout4;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  }

// the loop routine runs over and over again forever:
void loop() {
  String voltages;

  ADCread1();
  ADCread2();
  ADCread3();
  ADCread4();
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage1 = ADCreadout1 * (5.0 / 1023.0);
  float voltage2 = ADCreadout2 * (5.0 / 1023.0);
  float voltage3 = ADCreadout3 * (5.0 / 1023.0);
  float voltage4 = ADCreadout4 * (5.0 / 1023.0);
  // print out the value you read:
  voltages += (voltage1);
  voltages += ", ";
  voltages += (voltage2);
  voltages += ", ";
  voltages += (voltage3);
  voltages += ", ";
  voltages += (voltage4);
  voltages += ", ";    
  Serial.println(voltages);
  voltages = "";
}


void ADCread1() {
  int total1 = 0;
  for (int i = 1; i < 10; i++ ){
    total1 += analogRead(A0);   
    }
   ADCreadout1 = (total1/9);
  }

void ADCread2() {
  int total2 = 0;
  for (int i = 1; i < 10; i++ ){
    total2 += analogRead(A1);   
    }
   ADCreadout2 = (total2/9);  
  }
  
void ADCread3() {
  int total2 = 0;
  for (int i = 1; i < 10; i++ ){
    total2 += analogRead(A2);   
    }
   ADCreadout3 = (total2/9);   
  }
  
void ADCread4() {
  int total2 = 0;
  for (int i = 1; i < 10; i++ ){
    total2 += analogRead(A3);   
    }
   ADCreadout4 = (total2/9); 
  }

  
