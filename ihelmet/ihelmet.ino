float measurePin = PA4;
int ledPower = PB9;
int buzzer = PB8;
//
//
unsigned int samplingTime = 280;
unsigned int deltaTime = 40;
unsigned int sleepTime = 9680;

float voMeasured = 0;
float calcVoltage = 0;
float dustDensity = 0;


void setup() {
  Serial.begin(9600);
  pinMode(ledPower,OUTPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() {
     // Get the value of R0 via in LPG

    float mq4_sensorValue;
    float mq9_sensorValue;
    float mq135_sensorValue;
   
    float mq4_sensor_volt;
    float mq9_sensor_volt;
    float mq135_sensor_volt;
    
    float mq4_RS_gas; // Get value of RS in a GAS
    float mq9_RS_gas;
    float mq135_RS_gas;

    float mq4_ratio;
    float mq9_ratio;
    float mq135_ratio;
    

    /*--- Get a average data by testing 100 times ---*/
    /*-----------------------------------------------*/
    mq4_sensorValue=analogRead(PA5);
    mq9_sensorValue=analogRead(PA6);
    mq135_sensorValue=analogRead(PA7);
    Serial.println("readings...");
    Serial.println(mq4_sensorValue);
    Serial.println(mq9_sensorValue);
    Serial.println(mq135_sensorValue);
    Serial.println("*************************");

    mq4_sensor_volt=((mq4_sensorValue/4096)*3.3);
    mq4_RS_gas = ((5.0-mq4_sensor_volt)/mq4_sensor_volt)*2.5; // omit *RL
    mq4_ratio = mq4_RS_gas/7.7;

    mq9_sensor_volt=((mq9_sensorValue/4096)*3.3);
    mq9_RS_gas = ((5.0-mq9_sensor_volt)/mq9_sensor_volt)*2.5; // omit *RL
    mq9_ratio = mq9_RS_gas/1.65;

    mq135_sensor_volt=((mq135_sensorValue/4096)*3.3);
    mq135_RS_gas = ((5.0-mq135_sensor_volt)/mq135_sensor_volt)*2.3; // omit *RL
    mq135_ratio = mq135_RS_gas/7.4;

    Serial.print("METHANE  RATIO :");
    Serial.println(mq4_ratio);
    Serial.print("CO  RATIO :");
    Serial.println(mq9_ratio);
    Serial.print("AMMONIA  RATIO :");
    Serial.println(mq135_ratio);

    digitalWrite(ledPower,LOW);
    delayMicroseconds(280);

    voMeasured = analogRead(measurePin);

    delayMicroseconds(deltaTime);
    digitalWrite(ledPower,HIGH);
    delayMicroseconds(100);

    calcVoltage = voMeasured*(5.0/4096);
    dustDensity = 0.17*calcVoltage-0.1;

    if ( dustDensity < 0)
    {
     dustDensity = 0.00;
    }

  

    if(mq4_ratio<1 or mq9_ratio<1 or mq135_ratio<1 or dustDensity >2){
        digitalWrite(buzzer,HIGH);
      }else{
        digitalWrite(buzzer,LOW);       
        }

    Serial.print("DUST :");
    Serial.println(dustDensity);
    Serial.println("*************************");
    Serial.println("*************************");
    String data = "CO : 200 , CH4 : 300, NH3: 200";

    
    delay(5000);

}
