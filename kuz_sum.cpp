// Вычисляет сумму элементов вектора
// Автор: И.О. Кузьминых
#include <vector>

int sum(Vector<int> v)
{
	int sum = 0;
	for (int i = 0; i < v.size(); ++i)
	{
		sum += v[i];
	}
	return sum;
}