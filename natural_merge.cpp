#include <iostream>

using namespace std;

int* natural_merge(int *a, int *b, int lena, int lenb)
{
	int *s = new int[lena + lenb];
	
	int i, j, h;
	i = j = h = 0;
	
	while((i < lena) && (j < lenb))
	{
		if(a[i] < b[j])
			s[h++] = a[i++];
		else
			s[h++] = b[j++];
	}
	
	if(i < lena)
		for(int k = i; k < lena; k++)
			s[h++] = a[k];
	else
		for(int k = j; k < lenb; k++)
			s[h++] = b[k];
	
	return s;
}



int main()
{
	int vet1[] = {78, 85, 156};
	int vet2[] = {14, 54, 93};
	
	int *result = natural_merge(vet1, vet2, 3, 3);
	for(int i = 0; i < 6; i++)
		cout << result[i] << " ";
	
	cout << endl;
	
	return 0;
}








