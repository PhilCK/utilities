#ifndef ALIGMENT_INCLUDED_8FD72235_331D_4FF9_98E0_031C879705D2
#define ALIGMENT_INCLUDED_8FD72235_331D_4FF9_98E0_031C879705D2


#ifndef __WIN32__
#define ALIGN_16(to_align) __declspec(align(16)) to_align;
#else
#define ALIGN_16(to_align) to_align __attribute__ ((aligned (16)));
#endif

#endif