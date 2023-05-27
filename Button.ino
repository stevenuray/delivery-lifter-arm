enum CraneState {
  IN,
  OUT
};

CraneState craneState = IN;

long lastCraneStateChange = millis();

long getMSSinceLastCraneStateChange(){
  return millis() - lastCraneStateChange;
}

void setStateFromInputButton(){
  Serial.print("Milliseconds Since Last Change:");
  Serial.println(getMSSinceLastCraneStateChange());
  
  if(getMSSinceLastCraneStateChange() > BUTTON_SWITCH_DELAY_MILLIS){
    Serial.print("Crane State: ");
    Serial.println(craneState);
    
    Serial.print("Toggle Button State: ");
    Serial.println(digitalRead(TOGGLE_BUTTON_PIN));
    if(digitalRead(TOGGLE_BUTTON_PIN) == LOW){
      if(craneState == IN){
        goOutSequence();
        craneState = OUT;
        lastCraneStateChange = millis();
        return;
      }
      if(craneState == OUT){
        goInSequence();
        craneState = IN;
        lastCraneStateChange = millis();
      }
    }    
  }
}