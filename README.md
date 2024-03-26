# SimKey
Shows the method used to reliably send keystrokes to DirectX applications externally.

## Table of contents

- [Overview](#overview)
  - [The challenge](#the-challenge)
- [My process](#my-process)
  - [Built with](#built-with)
  - [Useful resources](#useful-resources)
- [Acknowledgments](#acknowledgments)

## Overview

### The challenge

Whenever you try to send keys to applications which use DirectX via another process(externally), you will find that its very unreliable or outright fails.
This project shows a method you can use to get around that.

## My process

### Built with

- SendInput
- MapVirtualKeyW

### Useful resources

- [MSDN Keyboard Input Documentation](https://learn.microsoft.com/en-us/windows/win32/inputdev/keyboard-input)
- [MSDN MapVirtualKeyW Documentation](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-mapvirtualkeyw)
- [MSDN SendInput Documentation](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-sendinput)

## Acknowledgments

- [CasualGamer's YouTube Channel](https://www.youtube.com/@casualgamer1791) - The method i used here i learned from him.
