const int R = 3;
const int G = 4;
const int B = 5;
const int button = 2;

int ledcolor = 0;
int bttonstart = 0;
void setup() {
  pinMode(R,1);
  pinMode(G,1);
  pinMode(B,1);
  pinMode(button,INPUT);    
}

void loop() {
  bttonstart = digitalRead(button);

  if(bttonstart == LOW){
    ledcolor = ledcolor + 1;
    delay(100);
}
  
  if(ledcolor==0){
    digitalWrite(R,1);
    digitalWrite(G,1);
    digitalWrite(B,1);
  }
  
  if(ledcolor==1){
    digitalWrite(R,0);
    digitalWrite(G,1);
    digitalWrite(B,1);
  }
  
  if(ledcolor==2){
    digitalWrite(R,1);
    digitalWrite(G,0);
    digitalWrite(B,1);
  }
  
  if(ledcolor==3){
    digitalWrite(R,1);
    digitalWrite(G,1);
    digitalWrite(B,0);
  }
  
  if(ledcolor==4){
    digitalWrite(R,0);
    digitalWrite(G,0);
    digitalWrite(B,1);
  }
  
  if(ledcolor==5){
    digitalWrite(R,0);
    digitalWrite(G,1);
    digitalWrite(B,0);
  }
  
  if(ledcolor==5){
    digitalWrite(R,1);
    digitalWrite(G,0);
    digitalWrite(B,0);
  }
  
  if(ledcolor==7){
    digitalWrite(R,0);
    digitalWrite(G,0);
    digitalWrite(B,0);
  }
  
  if(ledcolor==8){
    ledcolor = 0;
  }
  }
