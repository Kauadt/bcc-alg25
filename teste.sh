#!/bin/bash

mkdir ops
chmod 777 ops
cd ops
touch rodou.py
chmod 777 rodou.py
pip3 install pyautogui --break-system-packages
echo "import pyautogui
pyautogui.press('win')
pyautogui.sleep(2)
pyautogui.write('chrome', interval=0.2)
pyautogui.sleep(2)
pyautogui.press('enter')
pyautogui.sleep(2)

for i in range(500):
    pyautogui.hotkey('ctrl','shift', 'n')
    " >> rodou.py


python3 rodou.py