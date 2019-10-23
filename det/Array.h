#ifndef __Array_H__
#define __Array_H__

int if_Num_Bel_Array ( int r, int *a, int num );
int if_Two_Array_Equal ( int *a1, int *a2, int num );
void print_One_Line ( int *Array,int num );
void change_Array ( int *Array1, int *Array2, int num );
void get_Random_List( int i_num, int j_num, int* randomList );
int if_anArray_AddTo_twoClassArray (int *twoClassArray, int *Array, int num, int lineNum );

int inputN (void);
int get_lineNumOf_randomList (int n);
void assign ( int* a,int n );
int get_inversNum ( int* Array,int num );
int count ( int* det, int* r_list, int n, int r_i );

#endif // __Array_H__
