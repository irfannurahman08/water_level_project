
int kurang = 2; // sensor 1 pin digital 2
int normal = 3;// sensor 2 pin digital 3
int banjir = 4;// sensor 3 pin digital 4

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(kurang, INPUT_PULLUP);
  pinMode(normal, INPUT_PULLUP);
  pinMode(banjir, INPUT_PULLUP);
}

// the loop routine runs over and over again forever:
void loop() {
  
  Serial.println("\n");
  
  // read the input pin:
  int sensKurang = digitalRead(kurang);
  int sensNormal = digitalRead(normal);
  int sensBanjir = digitalRead(banjir);

  //default nilai 1 untuk no input = fasle
  // nilai 0 = true
  
  if(sensKurang == 0 && sensNormal == 1 && sensBanjir == 1 ){
    
    Serial.println("banyu e kuranggg");
    }
    
  else if(sensKurang == 0 && sensNormal == 0 && sensBanjir == 1 ){
    
    Serial.println("banyu ne normal bae");
    }
    
  else if(sensKurang == 0 && sensNormal == 0 && sensBanjir == 0 ){
    
    Serial.println("banjir bos");
    }
    
  else if(sensKurang == 1 && sensNormal == 1 && sensBanjir == 1 ){
    Serial.println("ora ana banyu ne");
    }
    
  else{
    Serial.println("di cek sensor e bos kok selang seling sensor e");
    }
    
  // print out the state of the button:

  Serial.print("sensor 1 = ");
  Serial.println(sensKurang);
  Serial.print("sensor 2 = ");
  Serial.println(sensNormal);
  Serial.print("sensor 3 = ");
  Serial.println(sensBanjir);
  delay(1000);        // delay 1 detik
}
