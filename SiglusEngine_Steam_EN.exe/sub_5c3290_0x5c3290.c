// 函数: sub_5c3290
// 地址: 0x5c3290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = data_1cd4408
int32_t* edi = data_1cd4404
int32_t i_1 = data_1cd440c
int32_t ebx = data_1cd4414
int32_t result
int32_t i

do
    int32_t* var_14_1 = esi
    int32_t* var_18_1 = edi
    int32_t j_1 = data_1cd4410
    int32_t j
    
    do
        result = *esi
        *edi = result
        esi = &esi[1]
        edi = &edi[1]
        j = j_1
        j_1 -= 1
    while (j != 1)
    esi = var_14_1
    edi = var_18_1 + data_1cd43fc
    ebx += data_1cd43f4
    
    if (ebx s>= data_1cd43ec)
        ebx -= data_1cd43ec
        esi += data_1cd4400
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
