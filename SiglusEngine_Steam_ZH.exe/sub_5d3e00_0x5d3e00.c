// 函数: sub_5d3e00
// 地址: 0x5d3e00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x118)
int32_t temp1 = mods.dp.d(sx.q(*(arg1 + 0x11c) - 1 + ecx), *(arg1 + 0x108))
int32_t eax_4 = *(arg1 + 0x140)

if (eax_4 s> temp1)
    *(arg1 + 0x140) = eax_4 + 1
    
    if (eax_4 + 1 s>= ecx)
        *(arg1 + 0x140) = eax_4 + 1 - ecx
else
    *(arg1 + 0x140) = eax_4 + 1
    
    if (eax_4 + 1 s> temp1)
        *(arg1 + 0x140) = temp1
        sub_5d3e70(arg1)
        return sub_5d4230(arg1) __tailcall

sub_5d3e70(arg1)
return sub_5d4230(arg1) __tailcall
