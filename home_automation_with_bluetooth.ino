char command;

void setup()
{
  pinMode(6, OUTPUT);
  Serial.begin(9600);

  Serial.println("Home Automation with Bluetooth");
  Serial.println("Type 1 for ON");
  Serial.println("Type 0 for OFF");
}

void loop()
{
  if (Serial.available() > 0)
  {
    command = Serial.read();

    if (command == '1')
    {
      digitalWrite(13, HIGH);
      Serial.println("Device ON");
    }

    else if (command == '0')
    {
      digitalWrite(13, LOW);
      Serial.println("Device OFF");
    }
  }
}