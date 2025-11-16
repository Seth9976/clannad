// 函数: sub_5d3da0
// 地址: 0x5d3da0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x140)
int32_t ecx = *(arg1 + 0x11c)

if (eax s< ecx)
    *(arg1 + 0x140) = eax - 1
    
    if (eax - 1 s< 0)
        *(arg1 + 0x140) = *(arg1 + 0x118) + eax - 1
else
    *(arg1 + 0x140) = eax - 1
    
    if (eax - 1 s< ecx)
        *(arg1 + 0x140) = ecx
        sub_5d3e70(arg1)
        return sub_5d4230(arg1) __tailcall

sub_5d3e70(arg1)
return sub_5d4230(arg1) __tailcall
