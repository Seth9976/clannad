// 函数: sub_498260
// 地址: 0x498260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1[1]
int32_t edi
int32_t var_10 = edi
int32_t edi_1 = arg2

if (edi_1 s< 0 || edi_1 s>= 2)
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 0xe
    *(eax_1 + 0x18) = edi_1
    (*eax_1)(arg1)

if (edi_1 == 1)
    for (void* i = *(esi + 0x44); i != 0; i = *(i + 0x2c))
        if (*(i + 0x28) != 0)
            *(i + 0x28) = 0
            (*(i + 0x38))(arg1, i + 0x30)
    
    void* i_1 = *(esi + 0x48)
    *(esi + 0x44) = 0
    
    for (; i_1 != 0; i_1 = *(i_1 + 0x2c))
        if (*(i_1 + 0x28) != 0)
            *(i_1 + 0x28) = 0
            (*(i_1 + 0x38))(arg1, i_1 + 0x30)
    
    edi_1 = arg2
    *(esi + 0x48) = 0

int32_t* i_4 = *(esi + (edi_1 << 2) + 0x3c)
*(esi + (edi_1 << 2) + 0x3c) = 0

if (i_4 != 0)
    int32_t* i_2
    
    do
        i_2 = *i_4
        int32_t ebx_2 = i_4[2] + i_4[1] + 0x10
        int32_t var_14_4 = ebx_2
        int32_t* i_5 = i_4
        sub_4e2b60(arg1)
        *(esi + 0x4c) -= ebx_2
        i_4 = i_2
    while (i_2 != 0)
    edi_1 = arg2

int32_t* result = *(esi + (edi_1 << 2) + 0x34)
*(esi + (edi_1 << 2) + 0x34) = 0

if (result != 0)
    int32_t* i_3
    
    do
        i_3 = *result
        int32_t ebx_3 = result[2] + result[1] + 0x10
        int32_t var_14_5 = ebx_3
        int32_t* result_1 = result
        sub_4e2b60(arg1)
        *(esi + 0x4c) -= ebx_3
        result = i_3
    while (i_3 != 0)

return result
