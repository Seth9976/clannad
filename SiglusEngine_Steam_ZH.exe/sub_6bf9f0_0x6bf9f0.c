// 函数: sub_6bf9f0
// 地址: 0x6bf9f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[7]
*(eax + arg1 + 0x20) = 0x80
arg1[7] += 1
int32_t i = arg1[7]

if (eax s> 0x37)
    for (; i s< 0x40; i = arg1[7])
        *(arg1 + i + 0x20) = 0
        arg1[7] += 1
    
    sub_6bf7a0(arg1)
    
    while (arg1[7] s< 0x38)
        *(arg1 + arg1[7] + 0x20) = 0
        arg1[7] += 1
else
    for (; i s< 0x38; i = arg1[7])
        *(arg1 + i + 0x20) = 0
        arg1[7] += 1

arg1[0x16].b = *(arg1 + 0x1b)
*(arg1 + 0x59) = *(arg1 + 0x1a)
*(arg1 + 0x5a) = (arg1[6] u>> 8).b
*(arg1 + 0x5b) = arg1[6].b
arg1[0x17].b = *(arg1 + 0x17)
*(arg1 + 0x5d) = *(arg1 + 0x16)
*(arg1 + 0x5e) = (arg1[5] u>> 8).b
*(arg1 + 0x5f) = arg1[5].b
return sub_6bf7a0(arg1) __tailcall
