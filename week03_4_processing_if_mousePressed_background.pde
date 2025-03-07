// week03_4_processing_if_mousePressed_background
// File-Preference 偏好設定, 把字型放大至合適大小
// 程式的字好大喔!!!
void setup(){
  size(400,400);//開啟400*400視窗
}  

void draw(){
  if(mousePressed) background(255,0,255);
  else background(0,255,0);
}
