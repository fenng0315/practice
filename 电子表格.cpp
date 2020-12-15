#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int r, c = 0;//行和列 
	int row, col = 0;//行和列的计数 
	int n1, n2 = 0;
	char exc[1000][50] = {0};
	int temp1[1000] = {0};//暂时存储列表一行数据的数组
	char order[10] = {0};//存储命令 
	int norder = 0;//输入的命令数量 
	int num1, num2 = 0;
	
	//进入表格输入 
	scanf("%d %d", &r, &c);
	for(row = 0; row < r; row++)
	  for(col = 0; col < c; col++)
	  	scanf("%d", &exc[row][col]);
	  	
	//进入操作  	 	    	    	 
	scanf("%d", &norder);//输入待执行命令的数量	
	getchar();
	for(int n = 0; n < norder; n++){
		fgets(order,10,stdin);
		if(order[0] == 'S' && order[1] == 'C'){					//SC
	 		num1 = (int)order[3] - 48;
			num2 = (int)order[5] - 48; 
			for(int nn = 0; nn < r; nn++){
				temp1[nn] = exc[nn][num1 - 1];
			}
			for(int nn = 0; nn < r; nn++){
				exc[nn][num1 - 1] = exc[nn][num2 - 1];
			}
			for(int nn = 0; nn < r; nn++){
				exc[nn][num2 - 1] = temp1[nn];
			}
		}
		if(order[0] == 'S' && order[1] == 'R'){					//SR
	 		num1 = (int)order[3] - 48;
			num2 = (int)order[5] - 48; 
			for(int nn = 0; nn < c; nn++){
				temp1[nn] = exc[num1 - 1][nn];
			}
			for(int nn = 0; nn < c; nn++){
				exc[num1 - 1][nn] = exc[num2 - 1][nn];
			}
			for(int nn = 0; nn < c; nn++){
				exc[num2 - 1][nn] = temp1[nn];
			}
		}
		if(order[0] == 'D' && order[1] == 'R'){					//DR
			num1 = (int)order[3]-48;
			for(int row_ = num1 - 1; row_ < r - 1; row_++){
				for(int col_ = 0; col_ < c; col_++){
					exc[row_][col_] = exc[row_ + 1][col_];
				}
			}
			r = r - 1;	
		}
		if(order[0] == 'D' && order[1] == 'C'){					//DC
			num1 = (int)order[3]-48;
			for(int  col_ = num1 - 1; col_ < c - 1; col_++){
				for(int row_ = 0; row_ < r; row_++){
					exc[row_][col_] = exc[row_][col_ + 1];
				}
			}
			c = c - 1;	
		}
		if(order[0] == 'I' && order[1] == 'C'){					//IC
			num1 = (int)order[3]-48;
			for(int col_ = c; col_ >= num1; col_--){
				for(int row_ = 0; row_ < r; row_++){
					exc[row_][col_] = exc[row_][col_ - 1];
				}
			}
			for(int nn = 0; nn < r; nn++)
	  		exc[nn][num1 - 1] = 0;
	  		c = c + 1;				
		}
		if(order[0] == 'I' && order[1] == 'R'){					//IR
			num1 = (int)order[3]-48;
			for(int row_ = c; row_ >= num1; row_--){
				for(int col_ = 0; col_ < c; col_++){
					exc[row_][col_] = exc[row_ - 1][col_];
				}
			}
			for(int nn = 0; nn < c; nn++)
	  		exc[num1 - 1][nn] = 0;
	  		r = r + 1;
		}
	}
	
		  	    
	for(row = 0; row < r; row++)
	  for(col = 0; col < c; col++){
	  	printf("%d ", exc[row][col]);
	      if(col == c - 1){
	      	printf("\n");
		  }  
	  }	
	  return 0; 
}
	  
	     
	    
	    
	    
	
	
	
