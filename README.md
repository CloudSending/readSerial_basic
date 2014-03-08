sendSerial_basic
================

Simple codes to test sending serial data to Arduino from oF

Mouse click -> send text you definced in the code

Key press -> send keycode to arduino

A sample Arduino sketch included.


oFからArduinoにシリアルを送るテスト用プログラムです。
今回、Arduino側でサーマルプリンタのライブラリとデータを書き込む想定なので、firmataを使わないでも通信できるofSerialを使っています。
このサンプルでは、oFのアプリからキー入力またはクリックでシリアルを送り、Arduino IDEのシリアルモニターに結果が表示されます。
