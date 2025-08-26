#include <iostream>
using namespace std;
#include <ctime>     // 与下面的srand有关系

int main() {

	// 1、系统生成随机数
	// 2| 玩家进行猜测
	// 3 判断玩家的猜测
	// 4 、猜对退出游戏
	// 5、猜错提示猜大了还是猜小了

	srand((unsigned int)time(NULL));   // 生成一个关于时间的随机数 

	int num = rand() % 100 + 1;   // 1、系统生成随机数
	int val = 0;
	
	while (1)
	{
		cin >> val;    // 2| 玩家进行猜测
		if (val > num)   // 3 判断玩家的猜测
		{
			cout << "猜大了" << endl;
		}
		else if (val < num)
		{
			cout << "猜小了" << endl;
		}
		else     // 4 、猜对退出游戏
		{
			cout << "恭喜你猜对了" << endl;
			break;
		}
		

	}
	system("pause");

}