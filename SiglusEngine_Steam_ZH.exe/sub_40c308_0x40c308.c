// 函数: sub_40c308
// 地址: 0x40c308
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi

if (arg1[4] == 0)
    int32_t eax_3 = sub_745f3f(arg1[3] << 1)
    arg1[4] = eax_3
    
    if (eax_3 == 0)
        return 0x8007000e

int32_t i = 0

if (arg1[3] u> 0)
    do
        *(arg1[4] + (i << 1)) = 0xffff
        i += 1
    while (i u< arg1[3])

arg1[2] = 0
arg1[1] = 0
*arg1 = 0
return 0
