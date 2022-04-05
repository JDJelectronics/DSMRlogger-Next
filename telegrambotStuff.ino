/*
***************************************************************************  
**  Program  : POST (part of MD_controller.ino)
**  Copyright (c) 2022 Jelmer de Jong
**
**  TERMS OF USE: MIT License. See bottom of file.                                                            
***************************************************************************      
*/

void handleNewMessages(int numNewMessages)
{

  for (int i = 0; i < numNewMessages; i++)
  {

    // Inline buttons with callbacks when pressed will raise a callback_query message
    if (bot.messages[i].type == "callback_query")
    {
      Serial.print("Call back button pressed by: ");
      Serial.println(bot.messages[i].from_id);
      Serial.print("Data on the button: ");
      Serial.println(bot.messages[i].text);
      bot.sendMessage(bot.messages[i].from_id, bot.messages[i].text, "");
    }
    else
    {
      String chat_id = bot.messages[i].chat_id;
      String text = bot.messages[i].text;
      String answer;
      String welcome;
      String keyboardJson;
      String ipAddress = "";

      IPAddress ip = WiFi.localIP();
      ipAddress = ip.toString();

      String from_name = bot.messages[i].from_name;
      if (from_name == "")
        from_name = "Guest";

      if (text == "/options")
      {
        keyboardJson = "[[{ \"text\" : \"Go to JDJ Electronics\", \"url\" : \"https://www.jdjelectronics.nl\" }]]";
        bot.sendMessageWithInlineKeyboard(chat_id, "Choose from one of the following options", "", keyboardJson);
      }

      if (text == "/start")
      {
        welcome = "DRSM-NEXT Succesfull started., " + from_name + ".\n";
        welcome += "/options : returns the inline keyboard\n";

        bot.sendMessage(chat_id, welcome, "Markdown");
      }

       if (text == "/ip")
      {
        answer = "Networks IP = " + ip.toString() + ".\n";
        bot.sendMessage(chat_id, answer, "Markdown");
      }
    }
  }
}

//========================================================================

void bot_setup()
{
  const String commands = F("["
                            "{\"command\":\"start\",\"description\":\"NextGen DRSM-Logger Activated Service\"},"
                            "{\"command\":\"ip\",\"description\":\"Show network IP adress\"}" // no comma on last command
                            "{\"command\":\"scan wifi\",\"description\":\"Scanning new wifi networks\"}" // no comma on last command
                            "]");
  bot.setMyCommands(commands);
}



boolean postTelegram_Status() 
{

  Monitor.println("\r\n=========================================================");
  Monitor.printf(">>>>>>>>  [%s]  <<<<<<<<\r\n", __FUNCTION__);
  Monitor.println("=========================================================\r\n");
  drawTelegram_Logo();
  bot.sendMessage("-771371129", "Status=???", "Markdown");
  Monitor.flush();

}//postTelegram_detect()

//========================================================================

boolean postTelegram_IP()
{ 
  Monitor.println("\r\n=========================================================");
  Monitor.printf(">>>>>>>>  [%s]  <<<<<<<<\r\n", __FUNCTION__);
  Monitor.println("=========================================================\r\n");
  drawTelegram_Logo();
  bot.sendMessage("-771371129", "Door is been closed!", "Markdown");
  Monitor.flush();
 
      
}//postTelegram_open()

//========================================================================

boolean postTelegram_API_test()
{ 
  Monitor.println("\r\n=========================================================");
  Monitor.printf(">>>>>>>>  [%s]  <<<<<<<<\r\n", __FUNCTION__);
  Monitor.println("=========================================================\r\n");
  bot.sendMessage("-771371129", "Succesfull connected with api.telegram.com", "Markdown");
  //drawTelegram_Logo();
  Monitor.flush();
  Debugf("Succesfull: CA certification File set");
      
}//postTelegram_test()

//========================================================================


boolean postTelegram_alive()
{ 
  Monitor.println("\r\n=========================================================");
  Monitor.printf(">>>>>>>>  [%s]  <<<<<<<<\r\n", __FUNCTION__);
  Monitor.println("=========================================================\r\n");
  drawTelegram_Logo();
  bot.sendMessage("-771371129", "I'm still alive!", "Markdown");
  Monitor.flush();
 
      
}//postTelegram_alive()





/***************************************************************************
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the
* "Software"), to deal in the Software without restriction, including
* without limitation the rights to use, copy, modify, merge, publish,
* distribute, sublicense, and/or sell copies of the Software, and to permit
* persons to whom the Software is furnished to do so, subject to the
* following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
* OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
* THE USE OR OTHER DEALINGS IN THE SOFTWARE.
* 
****************************************************************************
*/
