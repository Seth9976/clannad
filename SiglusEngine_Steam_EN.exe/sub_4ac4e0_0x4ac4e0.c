// 函数: sub_4ac4e0
// 地址: 0x4ac4e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = arg2
int32_t esi = data_70309c
int32_t edi = arg4
void* var_8 = result
int32_t ecx
int32_t edx_1
int32_t ebx_1

if (arg9 != 0)
    int32_t ecx_2 = (result - 1) * edi
    esi += ecx_2
    ecx = ecx_2 + data_7030b0
    edx_1 = edi - 1 + esi
    ebx_1 = edi - 1 + ecx
    edi = neg.d(edi)
else
    ecx = data_7030b0
    edx_1 = edi - 1 + esi
    ebx_1 = edi - 1 + ecx

if (result s> 0)
    result = arg3 + 8
    int32_t ecx_3 = ecx - esi
    int32_t var_c_1 = ecx_3
    void* i
    
    do
        result += 0x28
        *(result - 0x30) = arg5
        *(result - 0x28) = arg6
        *(result - 0x20) = arg7
        *(result - 0x1c) = ecx_3 + esi
        *(result - 0x2c) = esi
        esi += edi
        *(result - 0x24) = edx_1
        edx_1 += edi
        *(result - 0x14) = ebx_1
        ebx_1 += edi
        i = var_8
        var_8 -= 1
        *(result - 0x18) = arg8
        ecx_3 = var_c_1
    while (i != 1)

return result
