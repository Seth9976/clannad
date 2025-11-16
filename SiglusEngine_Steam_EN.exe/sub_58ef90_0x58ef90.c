// 函数: sub_58ef90
// 地址: 0x58ef90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = data_20f33b0
char* edi = data_20f33ac
int32_t i_1 = data_20f33a8
int32_t edx = 0
char* ebx = esi
char result
int32_t i

do
    char* var_1c_1 = esi
    int32_t j_1 = data_20f33a4
    int32_t edx_1 = 0
    char* ebx_1 = esi
    int32_t j
    
    do
        int32_t eax_1
        eax_1.b = *edi
        int32_t ebx_2
        ebx_2.b = *esi
        *edi = eax_1.b + (*(((ebx_2 - eax_1) << 2) + data_1cd43a4)).b
        int32_t eax_3
        eax_3.b = edi[1]
        int32_t ebx_6
        ebx_6.b = esi[1]
        edi[1] = eax_3.b + (*(((ebx_6 - eax_3) << 2) + data_1cd43a4)).b
        int32_t eax_5
        eax_5.b = edi[2]
        int32_t ebx_10
        ebx_10.b = esi[2]
        result = eax_5.b + (*(((ebx_10 - eax_5) << 2) + data_1cd43a4)).b
        edi[2] = result
        edi = &edi[4]
        ebx_1 = &ebx_1[4]
        edx_1 += data_20f33c4
        
        if (edx_1 s>= data_20f33c0)
            edx_1 -= data_20f33c0
            esi = ebx_1
        
        j = j_1
        j_1 -= 1
    while (j != 1)
    esi = var_1c_1
    ebx = &ebx[data_20f33b8]
    edi = &edi[data_20f33b4]
    edx += data_20f33c4
    
    if (edx s>= data_20f33c0)
        edx -= data_20f33c0
        esi = ebx
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
