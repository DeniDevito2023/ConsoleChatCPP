#include <iostream>
#include "Chat.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Chat chat;
	chat.run(); // ������ ���������� isWork �� true

	while (chat.isChatWork()) // ���� ������ ����
	{
		chat.showMenu();
	}
    return 0;
}

