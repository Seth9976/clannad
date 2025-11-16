// 函数: sub_4254f1
// 地址: 0x4254f1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t x87control

if (*(arg1 + 0x10) != 0)
    arg4 = sub_41ef58(arg1, x87control, arg4)
int32_t* result = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
int32_t i = 0

if (*(arg1 + 0x68) u> 0)
    void* ecx_2 = arg4
    int32_t edi
    int32_t var_c_2 = edi
    
    do
        *result = *ecx_2
        result[1] = *(ecx_2 + 4)
        result = &result[2]
        i += 1
        ecx_2 += 0x10
    while (i u< *(arg1 + 0x68))

return result
