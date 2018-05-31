#include <iostream>
#include <cstdlib>
int main()
{
  int n,m;
  std::cout<<"Enter the number of rows: ";
  std::cin>>n;
 std::cout<<"Enter the number of columns: ";
  std::cin>>m;
   int** arr = new int*[n];
   for(int i=0;i<n;++i)
     arr[i]=new int[m];
    for(int i = 0; i < n; ++i)
    for(int j = 0; j < m; ++j)
		 arr[i][j]= rand()%100;
		  for(int i = 0; i < n; ++i)
    for(int j = 0; j < m; ++j)
      std::cout << arr[i][j] << std::endl;
		for(int i = 0; i < n; ++i)
		 delete [] arr[i];
		 delete []arr;
		 return 0;
}
