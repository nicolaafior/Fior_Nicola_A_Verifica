int rosso = 12 ;
int giallo = 6 ;
int bianco = 8 ;
int verde = 10 ;


int DurataRossoGiallo;
int DurataBiancoVerde;


void setup() 
{
  // put your setup code here, to run once:
  pinMode (rosso, OUTPUT);
  pinMode (giallo, OUTPUT);
  pinMode (bianco,OUTPUT);
  pinMode (verde, OUTPUT);
 
  Serial.begin(9600);
 
  richiestaDurataRossoGiallo();
  richiestaDurataBiancoVerde();
 
 

}

void loop() 
{
  // put your main code here, to run repeatedly:
digitalWrite(rosso,HIGH);
digitalWrite(giallo,HIGH);
delay(DurataRossoGiallo);
digitalWrite(rosso,LOW);
digitalWrite(giallo,LOW);
digitalWrite(bianco,HIGH);
digitalWrite(verde,HIGH);
delay(DurataBiancoVerde);
digitalWrite(verde,LOW);
digitalWrite(bianco,LOW);
}











void richiestaDurataRossoGiallo()   
{
  Serial.println ( "Quanti millisecondi vuoi che i led ROSSO e GIALLO rimangano accesi?");
  while ( Serial.available() == 0)   {};
  DurataRossoGiallo = Serial.readString().toInt();
}



void richiestaDurataBiancoVerde()   
{
  Serial.println ( "Quanti millisecondi vuoi che i led VERDE e BIANCO rimangano accesi?");
  while ( Serial.available() == 0)   {};
  DurataBiancoVerde  = Serial.readString().toInt();
}
