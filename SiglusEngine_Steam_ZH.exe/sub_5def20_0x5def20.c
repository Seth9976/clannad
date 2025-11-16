// 函数: sub_5def20
// 地址: 0x5def20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_c = arg1
arg1[3] += 4
int32_t eax = *arg1

if (eax == arg1[1])
    eax = 0

sub_5b48f0(arg2, *(arg1[3] + eax - 4))
int128_t* i

for (i = *arg2; i != arg2[1]; i += 0x3b4)
    int32_t edx_1 = *arg1
    
    if (edx_1 == arg1[1])
        edx_1 = 0
    
    int128_t* ecx_2 = arg1[3]
    *i = *(ecx_2 + edx_1)
    i[1] = *(ecx_2 + edx_1 + 0x10)
    arg1[3] += 0x20
    int32_t ecx_3 = *arg1
    
    if (ecx_3 == arg1[1])
        ecx_3 = 0
    
    i[2].b = arg1[3][ecx_3]
    arg1[3] += 1
    int32_t ecx_5 = *arg1
    
    if (ecx_5 == arg1[1])
        ecx_5 = 0
    
    *(i + 0x21) = arg1[3][ecx_5]
    arg1[3] += 1
    int32_t ecx_7 = *(i + 0xc)
    
    if (*i == 1)
        ecx_7 = 0
    
    int32_t edx_4 = *(i + 0x18)
    int32_t edi_1 = *(i + 0x1c)
    *(i + 0xc) = ecx_7
    *(i + 0x18) = edx_4
    *(i + 0x1c) = edi_1

return i
