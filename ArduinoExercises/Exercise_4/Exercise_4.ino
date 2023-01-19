void setup() {
  // put your setup code here, to run once:
  // 7 segment display set up
  pinMode(1, OUTPUT); //A
  pinMode(3, OUTPUT); //B
  pinMode(5, OUTPUT); //C
  pinMode(7, OUTPUT); //D
  pinMode(9, OUTPUT); //E
  pinMode(11, OUTPUT); //F
  pinMode(13, OUTPUT); //G

}

//0, ABCDEF
//1, BC
//2, ABGE
//3, ABCDG
//4, BCFG
//5, ACDFG
//6, ACDEFG
//7, ABC
//8, ABCDEFG
//9, ABCFG
int counter = 9;
int a = 1;
int b = 3;
int c = 5;
int d = 7;
int e = 9;
int f = 11;
int g = 13;

void loop() {
  // put your main code here, to run repeatedly:
  //RESET outputs
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  
  //Turn needed outputs to high
  if (counter == 0){
    //ABCDEF
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
  }
  else if (counter == 1){
    //BC
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
  }
  else if (counter == 2){
    //ABDGE
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(d, LOW);
    digitalWrite(g, LOW);
    digitalWrite(e, LOW);
  }
  else if (counter == 3){
    //ABCDG
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(g, LOW);
  }
  else if (counter == 4){
    //BCFG
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  else if (counter == 5){
    //ACDFG
    digitalWrite(a, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  else if (counter == 6){
    //ACDEFG
    digitalWrite(a, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  else if (counter == 7){
    //ABC
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
  }
  else if (counter == 8){
    //ABCDEFG
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  else if (counter == 9){
    //ABCFG
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  
  delay(1500);
  counter -= 1;
}
