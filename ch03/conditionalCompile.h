//conditionalCompile.h by Aaron Johnson

//preprocessor conditional compilation statements include:
/*

#if         #else
#ifdef      #elif
#ifndef     #endif

#if defined(MACRO)
#if !defined(MACRO)

*/

//include guard
#ifndef CONDITIONAL_H_
#define CONDITIONAL_H_

#ifdef FOO
#define NUMBER 47
#else
#define NUMBER 2
#endif

#endif