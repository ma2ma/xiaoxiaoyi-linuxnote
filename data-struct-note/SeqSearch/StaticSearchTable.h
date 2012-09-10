#ifndef STATIC_TABLE_H
#define STATIC_TABLE_H

//关键字数据类型定义

typedef float KeyType;
//typedef char  KeyType;
//typedef int   KeyType;

//关键字的比较约定
//
//数值型比较
#ifdef VAL_TYPE_CMP

#define EQ(a,b) ((a)==(b))
#define LT(a,b) ((a) <(b))
#define LQ(a,b) ((a) >(b))

#endif

//字符型字符型比较
#ifndef STR_TYPE_CMP

#define EQ(a,b) (!strcmp((a),(b)))
#define LT(a,b) (strcmp((a),(b))<0)
#define EQ(a,b) (strcmp((a),(b))>0)

#endif// #ifndef STR_TYPE_CMP 
				


#endif //#ifndef STATIC_TABLE_H

