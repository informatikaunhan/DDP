const int SENSOR_PIN=34;
void setup(){Serial.begin(115200);}
void loop(){int raw=analogRead(SENSOR_PIN);float pct=raw*100.0f/4095.0f;Serial.print("raw=");Serial.print(raw);Serial.print(" pct=");Serial.println(pct,1);delay(250);}
