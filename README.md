RecordVoiceModule
=================

Simple Recording Shell For The VoiceModule V2
http://www.elechouse.com/elechouse/images/product/Voice%20Recognition%20Module/Manual.pdf

Required
--------

Messenger Library For The Arduino - 
from http://playground.arduino.cc//Code/Messenger

Download it, then place the contents of the "firmware" folder in the "libraries" folder of your Arduino installation. You will ned to alter the CPP file - "WProgram.h" to "Arduino.h".

Compile and upload this to an Arduino Leonardo. On an UNO - you will need to swap Serial1 with Software serial.

Wiring
------

Connect the device to power, and then module Tx, Rx to Arduino Rx, Tx.

Usage
-----

This can be used as a stub, and the header borrowed for your own experiments with the module.

Start a console/monitor pointing at your Arduino on 9600 baud, and set the line ending to Carriage Return.

So far - only three operations are implemented:

REC_GROUP_1 - the device will start recording, wait for "START" to say your message. It will record five different words - asking you to repeat them for it to learn them. Avoid phonetically similar words.

IMP_GROUP_1 - Start using the voice commands in group 1. When you speak - you will see the message it sends back for each of the recognized words.

DEL_GROUP_1 - Clear the first recording bank.

