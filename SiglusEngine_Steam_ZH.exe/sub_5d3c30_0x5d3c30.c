// 函数: sub_5d3c30
// 地址: 0x5d3c30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x188) != 0)
    int32_t result = timeGetTime() - *(arg1 + 0x188)
    
    if (result u<= 0xc8)
        return result
else
    *(arg1 + 0x188) = timeGetTime()

int32_t eax_2 = *(arg1 + 0x140)
int32_t ecx = *(arg1 + 0x11c)

if (eax_2 s< ecx)
    *(arg1 + 0x140) = eax_2 - 1
    
    if (eax_2 - 1 s< 0)
        *(arg1 + 0x140) = *(arg1 + 0x118) + eax_2 - 1
else
    *(arg1 + 0x140) = eax_2 - 1
    
    if (eax_2 - 1 s< ecx)
        *(arg1 + 0x140) = ecx
        sub_5d3e70(arg1)
        return sub_5d4230(arg1) __tailcall

sub_5d3e70(arg1)
return sub_5d4230(arg1) __tailcall
