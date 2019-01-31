#ifndef __FOO_FOO_H__
#define __FOO_FOO_H__ 1

extern void foo_1(void);
extern void foo_2(void);

static inline void foo(void)
{
	foo_1();
	foo_2();
}

#endif /* __FOO_FOO_H__ */
