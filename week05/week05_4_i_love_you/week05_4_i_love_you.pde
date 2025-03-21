// week05-3.cpp
// week05_4_i_love_you
// File-Preference 字型放大
size(300,300); // 大小300
stroke(255,0,0); // 紅色的線條
for(int xx=0;xx<300;xx++){ // 大的x 0~300
  for(int yy=0;yy<300;yy++){ // 大的y 0~300
    float x = (xx-150)/100.0; // 減一半,除100
    float y = - (yy-150)/100.0; // 減一半,除100
              // 0~300變-150~+150 變 -1.5~+1.5
    float d = x*x+y*y-1;
    if(d*d*d-x*x*y*y*y < 0) point(xx,yy);
  }
}
