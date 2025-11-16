// 函数: sub_65b030
// 地址: 0x65b030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[3] += 4
int32_t eax = *arg1

if (eax == arg1[1])
    eax = 0

sub_65b150(arg2, *(arg1[3] + eax - 4))
int32_t* i = *arg2
int32_t* i_1 = i

while (i != arg2[1])
    int32_t* edx_1 = *arg1
    
    if (edx_1 == arg1[1])
        edx_1 = nullptr
    
    *i = *(edx_1 + arg1[3])
    arg1[3] += 4
    int32_t ecx_4 = *arg1
    
    if (ecx_4 == arg1[1])
        ecx_4 = 0
    
    __builtin_memcpy(&i[1], arg1[3] + ecx_4, 0x80)
    arg1[3] -= 0xffffff80
    int32_t ecx_5 = *arg1
    
    if (ecx_5 == arg1[1])
        ecx_5 = 0
    
    i[0x21] = *(arg1[3] + ecx_5)
    arg1[3] += 4
    sub_5bea80(&i[0x22], arg1)
    char* ecx_8 = *arg1
    
    if (ecx_8 == arg1[1])
        ecx_8 = nullptr
    
    i_1[0x50].b = ecx_8[arg1[3]]
    arg1[3] += 1
    int32_t ecx_10 = *arg1
    
    if (ecx_10 == arg1[1])
        ecx_10 = 0
    
    *(i_1 + 0x141) = arg1[3][ecx_10]
    arg1[3] += 1
    int32_t ecx_12 = *arg1
    
    if (ecx_12 == arg1[1])
        ecx_12 = 0
    
    *(i_1 + 0x142) = arg1[3][ecx_12]
    arg1[3] += 1
    int32_t ecx_14 = *arg1
    
    if (ecx_14 == arg1[1])
        ecx_14 = 0
    
    i_1[0x51] = *(arg1[3] + ecx_14)
    i = &i_1[0x56]
    arg1[3] += 4
    i_1 = i

return i
