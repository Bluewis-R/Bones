#pragma once
#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_
#include <vector>


class Keyboard
{
public:
  void GetKey();
  void GetKeyDown();
  void GetKeyUp();



private:
  std::vector<int> m_keyCodes;
};
#endif // !_KEYBOARD_H_