// 函数: sub_42a6ee
// 地址: 0x42a6ee
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_4 = ebx
int32_t esi = arg1[1]

if (*arg1 u< esi)
    void* i
    
    do
        char* eax_1 = *arg1
        ebx.b = *eax_1
        
        if (ebx.b == 0xa)
            return 1
        
        if (ebx.b != 0x5c)
            i = &eax_1[1]
        else if (&eax_1[1] u< esi && eax_1[1] == 0xa)
            i = &eax_1[2]
            arg1[7] += 1
        else if (ebx.b != 0x5c || &eax_1[2] u>= esi || eax_1[1] != 0xd || eax_1[2] != 0xa)
            i = &eax_1[1]
        else
            i = &eax_1[3]
            arg1[7] += 1
        
        *arg1 = i
    while (i u< arg1[1])

return 0
