// 函数: sub_42d940
// 地址: 0x42d940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0
arg1[1] = 0xffffffff
int32_t eax
sub_4d1ba0(eax, 0x1e, &arg1[0x24], 0)
int32_t* edi = arg1[0x5c]
void* eax_1 = &arg1[0x5c]
int32_t i = 0

if (arg1[0x5d] s> 0)
    do
        sub_42d720(edi)
        i += 1
        edi = &edi[0xc]
    while (i s< arg1[0x5d])
    
    eax_1 = &arg1[0x5c]

arg1[0x5d] = 0
return sub_4d6c40(&arg1[0x5b], eax_1) __tailcall
