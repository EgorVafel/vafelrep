void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
}
byte ENV=0;

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (10,0);
  digitalWrite (9,0);
  digitalWrite (8,0);
  digitalWrite (13,0);
  digitalWrite (12,0);
  digitalWrite (11,0);
 if (ENV/8==0) {
  if (ENV%8==0) {}
  if (ENV%8==1) {digitalWrite (11,1); }
  if (ENV%8==2) {digitalWrite (12,1); }
  if (ENV%8==3) {digitalWrite (13,1); }
  if (ENV%8==4) {digitalWrite (11,1); digitalWrite (12,1); }
  if (ENV%8==5) {digitalWrite (11,1); digitalWrite (13,1); }
  if (ENV%8==6) {digitalWrite (12,1); digitalWrite (13,1); }
  if (ENV%8==7) {digitalWrite (13,1); digitalWrite (12,1); digitalWrite (11,1);
 }
}
 if (ENV/8==1) { digitalWrite(10,1);
  if (ENV%8==0) {}
  if (ENV%8==1) {digitalWrite (11,1); }
  if (ENV%8==2) {digitalWrite (12,1); }
  if (ENV%8==3) {digitalWrite (13,1); }
  if (ENV%8==4) {digitalWrite (11,1); digitalWrite (12,1); }
  if (ENV%8==5) {digitalWrite (11,1); digitalWrite (13,1); }
  if (ENV%8==6) {digitalWrite (12,1); digitalWrite (13,1); }
  if (ENV%8==7) {digitalWrite (13,1); digitalWrite (12,1); digitalWrite (11,1);
 }
}
 if (ENV/8==2) { digitalWrite(9,1);
  if (ENV%8==0) {}
  if (ENV%8==1) {digitalWrite (11,1); }
  if (ENV%8==2) {digitalWrite (12,1); }
  if (ENV%8==3) {digitalWrite (13,1); }
  if (ENV%8==4) {digitalWrite (11,1); digitalWrite (12,1); }
  if (ENV%8==5) {digitalWrite (11,1); digitalWrite (13,1); }
  if (ENV%8==6) {digitalWrite (12,1); digitalWrite (13,1); }
  if (ENV%8==7) {digitalWrite (13,1); digitalWrite (12,1); digitalWrite (11,1);
 }
}
 if (ENV/8==3) {digitalWrite(8,1);
  if (ENV%8==0) {}
  if (ENV%8==1) {digitalWrite (11,1); }
  if (ENV%8==2) {digitalWrite (12,1); }
  if (ENV%8==3) {digitalWrite (13,1); }
  if (ENV%8==4) {digitalWrite (11,1); digitalWrite (12,1); }
  if (ENV%8==5) {digitalWrite (11,1); digitalWrite (13,1); }
  if (ENV%8==6) {digitalWrite (12,1); digitalWrite (13,1); }
  if (ENV%8==7) {digitalWrite (13,1); digitalWrite (12,1); digitalWrite (11,1);
 }
}
 if (ENV/8==4) {digitalWrite(10,1); digitalWrite(9,1);
  if (ENV%8==0) {}
  if (ENV%8==1) {digitalWrite (11,1); }
  if (ENV%8==2) {digitalWrite (12,1); }
  if (ENV%8==3) {digitalWrite (13,1); }
  if (ENV%8==4) {digitalWrite (11,1); digitalWrite (12,1); }
  if (ENV%8==5) {digitalWrite (11,1); digitalWrite (13,1); }
  if (ENV%8==6) {digitalWrite (12,1); digitalWrite (13,1); }
  if (ENV%8==7) {digitalWrite (13,1); digitalWrite (12,1); digitalWrite (11,1);
 }
}
 if (ENV/8==5) {digitalWrite(10,1); digitalWrite(8,1);
  if (ENV%8==0) {}
  if (ENV%8==1) {digitalWrite (11,1); }
  if (ENV%8==2) {digitalWrite (12,1); }
  if (ENV%8==3) {digitalWrite (13,1); }
  if (ENV%8==4) {digitalWrite (11,1); digitalWrite (12,1); }
  if (ENV%8==5) {digitalWrite (11,1); digitalWrite (13,1); }
  if (ENV%8==6) {digitalWrite (12,1); digitalWrite (13,1); }
  if (ENV%8==7) {digitalWrite (13,1); digitalWrite (12,1); digitalWrite (11,1);
 }
}
 if (ENV/8==6) {digitalWrite(9,1); digitalWrite(8,1);
  if (ENV%8==0) {}
  if (ENV%8==1) {digitalWrite (11,1); }
  if (ENV%8==2) {digitalWrite (12,1); }
  if (ENV%8==3) {digitalWrite (13,1); }
  if (ENV%8==4) {digitalWrite (11,1); digitalWrite (12,1); }
  if (ENV%8==5) {digitalWrite (11,1); digitalWrite (13,1); }
  if (ENV%8==6) {digitalWrite (12,1); digitalWrite (13,1); }
  if (ENV%8==7) {digitalWrite (13,1); digitalWrite (12,1); digitalWrite (11,1);
 }
}
 if (ENV/8==7) {digitalWrite(10,1);digitalWrite(9,1);digitalWrite(8,1);
  if (ENV%8==0) {}
  if (ENV%8==1) {digitalWrite (11,1); }
  if (ENV%8==2) {digitalWrite (12,1); }
  if (ENV%8==3) {digitalWrite (13,1); }
  if (ENV%8==4) {digitalWrite (11,1); digitalWrite (12,1); }
  if (ENV%8==5) {digitalWrite (11,1); digitalWrite (13,1); }
  if (ENV%8==6) {digitalWrite (12,1); digitalWrite (13,1); }
  if (ENV%8==7) {digitalWrite (13,1); digitalWrite (12,1); digitalWrite (11,1);
 }
}
 ENV++;
 if (ENV>63){ENV=0;}
 delay (250);
}
