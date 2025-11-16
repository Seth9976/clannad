// 函数: sub_5e17b0
// 地址: 0x5e17b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
*arg1 = *ebx
arg1[1] = ebx[1]
arg1[2] = ebx[2]

if (&arg1[3] != &ebx[3])
    sub_52e3c0(&arg1[3], &ebx[3], 0, 0xffffffff)

arg1[9] = ebx[9]
arg1[0xa] = ebx[0xa]
sub_5b48f0(arg1 + 0x80, (ebx[0x21] - ebx[0x20]) s/ 0x3b4)
arg2 = nullptr
int32_t result = (*(arg1 + 0x84) - *(arg1 + 0x80)) s/ 0x3b4

if (result s> 0)
    int32_t esi_1 = 0
    
    do
        sub_5b0fe0(*(arg1 + 0x80) + esi_1, ebx[0x20] + esi_1)
        esi_1 += 0x3b4
        arg2 += 1
        result = (*(arg1 + 0x84) - *(arg1 + 0x80)) s/ 0x3b4
    while (arg2 s< result)

return result
