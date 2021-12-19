#include <LiquidCrystal.h> //Memasukan library LiquidCrystal
int led=7; //pin led pada arduino
LiquidCrystal lcd (13,12,11,10,9,8); //pin LCD pada arduino

void setup(){
  lcd.begin (16, 2); // Memulai LCD
  pinMode(led,OUTPUT); //Set led sebagai output
}

void loop(){
  int pirState=digitalRead(1); //variable untuk menyimpan nilai dari sensor
  lcd.setCursor(0,0); //set cursor pada kolom 1 baris 1
  lcd.print("Selamat Datang"); //print karakter "Selamat Datang"
  if(pirState == LOW){ //Jika tidak ada objek yang terdeteksi
    lcd.setCursor(0,1); //Set cursor pada kolom 1 baris 2
    lcd.print("Hai"); //lalu print karakter "Hai"
    digitalWrite(led,LOW); //lampu LED mati
    delay(500); //Jeda waktu menampilkan karakter "Hai"
    lcd.clear(); //Bersihkan layar
  }
  else if(pirState == HIGH); //Jika ada objek terdeteksi
    lcd.setCursor(0,1); //Set cursor pada kolom 1 baris 2
    lcd.print("Zulfikar"); //Lalu print karakter "Zulfikar"
    digitalWrite(led,HIGH); //nyalakan LED
    delay(500);//Jeda waktu menampilkan karakter "Zulfikar"
    lcd.clear(); //bersihkan layar  
}
