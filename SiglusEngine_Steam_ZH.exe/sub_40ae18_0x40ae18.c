// 函数: sub_40ae18
// 地址: 0x40ae18
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result_1 = arg3 + arg1 * 0xc
int32_t edi
int32_t var_c = edi
int32_t* result = result_1
int32_t* ecx_2 = arg3 + arg2 * 0xc - result_1
int32_t i_1 = 3
int32_t i

do
    int32_t edx = *(ecx_2 + result)
    *(ecx_2 + result) = *result
    *result = edx
    result = &result[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
