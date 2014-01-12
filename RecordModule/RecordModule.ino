#include "VoiceModuleV2.h"
#include <Messenger.h>
//Start recording

Messenger cli = Messenger();

//voice module in common mode
int convert_command() {
  //  Convert the text to a command to the voice module
  if(cli.checkString("DEL_GROUP_1")) {
    return VM_DEL_GROUP1;
  } 
  else if(cli.checkString("REC_GROUP_1")) {
    return VM_REC_GROUP1;
  } 
  else if(cli.checkString("IMP_GROUP_1")) {
    return VM_IMP_GROUP1;
  } 
}

void evaluateMessage() {
  // start the command
  Serial1.write(VM_HEAD);
  Serial1.write(convert_command());
}


void setup() {
  Serial1.begin(9600);
  Serial.begin(9600);
  //prompt
  Serial.println("Record Module");
  cli.attach(evaluateMessage);
}

void loop() {
  while(Serial1.available()) {
    Serial.write(Serial1.read());
  }
  while(Serial.available()) {
    cli.process(Serial.read());
  }
}

