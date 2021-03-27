char inputBuffer[16];
char compareToThisString[] = "RESET_WIFI";

void setup(){
  Serial.begin(9600);
}

void loop(){

  if(Serial.available() > 0){

    Serial.readBytesUntil('\n', inputBuffer, 16);

    if(strcmp(compareToThisString, inputBuffer) == 0){
      Serial.println("Matches");
    }
    else{
      Serial.println("No Match");
    }
  }
  memset(inputBuffer, 0, sizeof(inputBuffer));
}
