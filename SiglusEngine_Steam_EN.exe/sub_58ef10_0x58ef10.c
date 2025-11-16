// 函数: sub_58ef10
// 地址: 0x58ef10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = data_20f33b0
int32_t* edi = data_20f33ac
int32_t i_1 = data_20f33a8
int32_t edx = 0
int32_t* ebx = esi
int32_t result
int32_t i

do
    int32_t* var_1c_1 = esi
    int32_t j_1 = data_20f33a4
    int32_t edx_1 = 0
    int32_t* ebx_1 = esi
    int32_t j
    
    do
        result = *esi
        *edi = result
        edi = &edi[1]
        ebx_1 = &ebx_1[1]
        edx_1 += data_20f33c4
        
        if (edx_1 s>= data_20f33c0)
            edx_1 -= data_20f33c0
            esi = ebx_1
        
        j = j_1
        j_1 -= 1
    while (j != 1)
    esi = var_1c_1
    ebx += data_20f33b8
    edi += data_20f33b4
    edx += data_20f33c4
    
    if (edx s>= data_20f33c0)
        edx -= data_20f33c0
        esi = ebx
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
