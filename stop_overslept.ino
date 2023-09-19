#define buzzerPin 26
#define sensorPin 33 
#define echoPin 32 //INPUTA:33 INPUTB:32
#define trigPin 19 //INPUTA:17 INPUTB:19


#define on LOW
#define off HIGH

#define BEAT 200
#define DO 261.6
#define _DO 277.18
#define RE 293.665
#define _RE 311.127
#define MI 329.63
#define FA 349.228
#define _FA 369.994
#define SO 391.995
#define _SO 415.305
#define RA 440
#define _RA 466.164
#define SI 493.883
#define octDO 523.251

double Duration = 0; //受信した間隔
double Distance = 0; //距離

int stopMusicFlag = 0;

void playmusic(){

    ledcWriteTone(1, 784);    // ソ
    delay(BEAT);
    delay(BEAT);
    delay(BEAT);
    ledcWriteTone(1,0);
    delay(BEAT);
    ledcWriteTone(1, 1318);   // シ
    delay(BEAT);
    ledcWriteTone(1, 1174);   // レ
    delay(BEAT);
    ledcWriteTone(1, 740);    // ファ#
    delay(BEAT);
    ledcWriteTone(1, 1174);   // レ
    delay(BEAT);
    ledcWriteTone(1, 622);    // シ♭
    delay(BEAT);
    ledcWriteTone(1, 830);    // ド#
    delay(BEAT);
    ledcWriteTone(1, 659);    // ミ
    delay(BEAT);
    ledcWriteTone(1, 830);    // ド#
    delay(BEAT);
    ledcWriteTone(1, 740);    // シ
    delay(BEAT);
    ledcWriteTone(1, 1174);   // レ
    delay(BEAT);
    ledcWriteTone(1, 740);    // ファ#
    delay(BEAT);
    ledcWriteTone(1, 1174);   // レ
    delay(BEAT);
    ledcWriteTone(1, 622);    // シ♭
    delay(BEAT);
    ledcWriteTone(1, 659);    // ミ
    delay(BEAT);
    ledcWriteTone(1, 880);    // ラ
    delay(BEAT);
    ledcWriteTone(1, 698);    // ソ
    delay(BEAT);
    ledcWriteTone(1, 740);    // ファ#
    delay(BEAT);
    ledcWriteTone(1, 659);    // ミ
    delay(BEAT);
    ledcWriteTone(1, 698);    // ソ
    delay(BEAT);
    ledcWriteTone(1, 740);    // ファ#
    delay(BEAT);
    ledcWriteTone(1, 659);    // ミ
    delay(BEAT);
    ledcWriteTone(1, 587);    // レ
    delay(BEAT);
    ledcWriteTone(1, 554);    // ド#
    delay(BEAT);
    ledcWriteTone(1, 494);    // シ
    delay(BEAT);
    ledcWriteTone(1, 740);    // ファ#
    delay(BEAT);
    ledcWriteTone(1, 659);    // ミ
    delay(BEAT);
    ledcWriteTone(1, 587);    // レ
    delay(BEAT);
    ledcWriteTone(1, 494);    // シ
    delay(BEAT);
    ledcWriteTone(1, 622);    // ソ#
    delay(BEAT);
    ledcWriteTone(1, 659);    // ラ
    delay(BEAT);
    ledcWriteTone(1, 622);    // ソ#
    delay(BEAT);
    ledcWriteTone(1, 659);    // ラ
    delay(BEAT);
    ledcWriteTone(1, 622);    // ソ#
    delay(BEAT);
    ledcWriteTone(1, 659);    // ラ
    delay(BEAT);
    ledcWriteTone(1, 622);    // ソ#
    delay(BEAT);
    ledcWriteTone(1, 659);    // ラ
    delay(BEAT);
    ledcWriteTone(1, 622);    // ソ#
    delay(BEAT);
    ledcWriteTone(1, 659);    // ラ
    delay(BEAT);
    ledcWriteTone(1, 415);    // ラ#
    delay(BEAT);
    ledcWriteTone(1, 494);    // シ
    delay(BEAT);
    ledcWriteTone(1, 830);    // ド#
    delay(BEAT);
    ledcWriteTone(1, 622);    // シ
    delay(BEAT);
    ledcWriteTone(1, 415);    // ラ#
    delay(BEAT);
    ledcWriteTone(1, 415);    // ラ#
    delay(BEAT);
    ledcWriteTone(1, 415);    // ラ#
    delay(BEAT);
    ledcWriteTone(1, 830);    // ソ#
    delay(BEAT);
    ledcWriteTone(1, 415);    // ラ#
    delay(BEAT);
    ledcWriteTone(1, 494);    // シ
    delay(BEAT);
    ledcWriteTone(1, 415);    // ラ#
    delay(BEAT);
    ledcWriteTone(1, 830);    // ソ#
    delay(BEAT);
    ledcWriteTone(1, 415);    // ラ#
    delay(BEAT);
    ledcWriteTone(1,0);
    delay(1000);  

    // ledcWriteTone(1, 880);    // 音階: A5
    // delay(BEAT);              // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 440);    // 音階: A4
    // delay(BEAT);              // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 293);    // 音階: D4
    // delay(BEAT * 2);          // 間隔: 2拍分 (BEATの2倍)
    // ledcWriteTone(1, 440);    // 音階: A4
    // delay(BEAT);              // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 293);    // 音階: D4
    // delay(BEAT * 4);          // 間隔: 4拍分 (BEATの4倍)
    // ledcWriteTone(1, 0);      // 音階: オフ
    // delay(1000);              // 間隔: 1秒

    // ledcWriteTone(1, 800);     // 音階: 800 Hz
    // delay(BEAT * 2);           // 間隔: 2拍分 (BEATの2倍)
    // ledcWriteTone(1, 1000);    // 音階: 1000 Hz
    // delay(BEAT * 2);           // 間隔: 2拍分 (BEATの2倍)
    // ledcWriteTone(1, 600);     // 音階: 600 Hz
    // delay(BEAT * 2);           // 間隔: 2拍分 (BEATの2倍)
    // ledcWriteTone(1, 1200);    // 音階: 1200 Hz
    // delay(BEAT * 2);           // 間隔: 2拍分 (BEATの2倍)
    // ledcWriteTone(1, 400);     // 音階: 400 Hz
    // delay(BEAT * 2);           // 間隔: 2拍分 (BEATの2倍)
    // ledcWriteTone(1, 800);     // 音階: 800 Hz
    // delay(BEAT * 2);           // 間隔: 2拍分 (BEATの2倍)
    // ledcWriteTone(1, 0);       // 音階: オフ
    // delay(1000);               // 間隔: 1秒
    

    // ledcWriteTone(1,_FA);
    // delay(BEAT);
    // ledcWriteTone(1,FA);
    // delay(BEAT);
    // ledcWriteTone(1,RE);
    // delay(BEAT);
    // ledcWriteTone(1,_SO);
    // delay(BEAT);
    // ledcWriteTone(1,SO);
    // delay(BEAT);
    // ledcWriteTone(1,_RE);
    // delay(BEAT);
    // ledcWriteTone(1,SO);
    // delay(BEAT);
    // ledcWriteTone(1,SI);
    // delay(BEAT);
    // ledcWriteTone(1,0);
    // delay(1000);

    // ledcWriteTone(1, 200);     // 音階: 200 Hz
    // delay(BEAT);               // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 300);     // 音階: 300 Hz
    // delay(BEAT);               // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 150);     // 音階: 150 Hz
    // delay(BEAT);               // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 250);     // 音階: 250 Hz
    // delay(BEAT);               // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 100);     // 音階: 100 Hz
    // delay(BEAT);               // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 200);     // 音階: 200 Hz
    // delay(BEAT);               // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 150);     // 音階: 150 Hz
    // delay(BEAT);               // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 250);     // 音階: 250 Hz
    // delay(BEAT);               // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 100);     // 音階: 100 Hz
    // delay(BEAT);               // 間隔: 1拍分 (BEAT)
    // ledcWriteTone(1, 0);       // 音階: オフ
    // delay(1000);               // 間隔: 1秒
}

void stopmusic() {
    ledcWriteTone(1,0);
    delay(1000);
}

int getLux(){
    // R1のAD値を取得
  float cds_ad = analogRead(sensorPin);

  // AD値を電圧値に変換
  float cds_v = cds_ad * 3.3 / 4096;

  // 電圧値より、Lux計算
  float lux = 10000 * cds_v / (3.3 - cds_v) / 1000;

  Serial.print(lux);
  Serial.println(" Lux ");

  if (lux > 20) {
    return 1;
  } else {
    return 0;
  }
}

int getDistance(){
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH); //超音波を出力
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    Duration = pulseIn(echoPin, HIGH); //センサからの入力

    if (Duration > 0) {
    Duration = Duration/2; //往復距離を半分
    Distance = Duration*340*100/1000000; //音速を340m/sに設定 
    Serial.print("Distance:");
    Serial.print(Distance);
    Serial.println("cm");
  }
  
  if (Distance < 7.5) {
    return 1;
  }
  else {
    return 0;
  }

  delay(500);
}

void setup() {
    ledcSetup(1,12000,8);
    ledcAttachPin(buzzerPin, 1);
    pinMode(sensorPin, INPUT);
    pinMode(echoPin,INPUT);
    pinMode(trigPin,OUTPUT);
    Serial.begin(115200); //シリアル通信のスピード設定
}

void loop() {
  int luxResult;
  while (!stopMusicFlag){
    luxResult = getLux();

    if(luxResult){
        playmusic(); 
    }

    int distanceResult = getDistance();

    if(distanceResult){
        stopmusic();
        stopMusicFlag = 1;
    }
 }

  

}
