#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  pinMode(10, OUTPUT);
  Serial.println("Arduino Ready");

}

void loop() {
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');
    Serial.println("Received data: " + data);

    // Parse the incoming data
    int numRows, numCols;
    int array[10][10];  // Example with a 10x10 maximum size
    int arrayIndex = 0;
    
    sscanf(data.c_str(), "%d,%d,", &numRows, &numCols);
    
    // Parse the array elements (after the rows and columns part)
    char* token = strtok((char*)data.c_str() + strlen(String(numRows).c_str()) + strlen(String(numCols).c_str()) + 2, ",");
    for (int i = 0; i < numRows; ++i) {
      for (int j = 0; j < numCols; ++j) {
        array[i][j] = atoi(token);
        token = strtok(NULL, ",");
      }
    }

    // Process the array data (e.g., toggle an LED based on array values)
    if (array[0][0] == 1) {
      digitalWrite(10, HIGH);  // Turn on LED if the first element is 1
    } else if (array[0][0] == 2) {
      digitalWrite(10, HIGH);
      delay(1);
      digitalWrite(10, LOW);
      delay(1);
      digitalWrite(10, HIGH);    
    } else {
      digitalWrite(10, LOW);   // Otherwise, turn it off
    }
  }
}
