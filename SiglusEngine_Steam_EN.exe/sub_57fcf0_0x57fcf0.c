// 函数: sub_57fcf0
// 地址: 0x57fcf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
void* result
result.b = arg1.b
var_8:3.b = result.b

if (data_1311178 == 0 && arg2 != 0)
    int32_t ebx
    ebx.b = var_8:3.b
    int32_t i = 0
    result = &data_f8d300
    void* ecx = &data_8fcb1c
    
    do
        if (*(result + 8) != 0 && (ebx.b != 0 || *ecx != 0) && *result == 0)
            ecx.b = 0
            sub_5809f0(ecx.b)
            break
        
        i += 1
        ecx += 0x2d0
        result += 0x3920
    while (i s< 0x40)
    
    result.b = var_8:3.b

int32_t ebx_1 = 0
void* edi = &data_8fcb1c

for (int32_t* i_1 = &data_f8c794; i_1 s< 0x1070f94; )
    if (ebx_1 u<= 0x3f)
        if (result.b != 0)
            *edi = 2
            i_1[-4] = 0
            *i_1 = 0
        
        if (*edi != 0)
            sub_57f7d0(ebx_1)
            i_1[0x2dc] = 1
            bool cond:1_1 = *edi == 2
            i_1[0x2e2] = 0
            void* eax
            eax.b = cond:1_1
            i_1[0x2e3] = 0
            i_1[0x2db] = eax + 1
    
    result.b = var_8:3.b
    i_1 = &i_1[0xe48]
    ebx_1 += 1
    edi += 0x2d0

return result
