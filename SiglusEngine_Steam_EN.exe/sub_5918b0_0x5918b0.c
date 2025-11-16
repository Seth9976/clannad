// 函数: sub_5918b0
// 地址: 0x5918b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_702ffc
int32_t edx = data_702ff8
int32_t eax = data_702ff4
int32_t ebx = data_703000
void* esi = data_702ff0
int32_t esi_1 = data_702fec
int32_t esi_2 = data_702fe8
int32_t edi = arg2
int32_t esi_3 = arg4
int32_t var_8 = eax

if (edi s> esi_3)
    int32_t eax_1 = edi
    edi = esi_3
    esi_3 = eax_1
    eax = var_8

int32_t var_2c = 0
int32_t var_80 = ebx
int32_t var_84 = ecx
int32_t var_88 = edx
int32_t var_8c = eax
int32_t var_90 = edi
int32_t var_94 = arg3
int32_t var_98 = edi
int32_t var_9c = arg1
int32_t result = sub_58fcf0(eax, esi_1, esi_2, esi)

if (edi != esi_3)
    int32_t var_2c_1 = 0
    int32_t var_80_1 = ebx
    int32_t var_84_1 = ecx
    int32_t var_88_1 = edx
    int32_t var_8c_1 = var_8
    int32_t var_90_1 = esi_3
    int32_t var_94_1 = arg3
    int32_t var_98_1 = esi_3
    int32_t var_9c_1 = arg1
    result = sub_58fcf0(result, esi_1, esi_2, esi)
    
    if (edi + 1 != esi_3)
        int32_t var_2c_2 = 0
        int32_t var_80_2 = ebx
        int32_t var_84_2 = ecx
        int32_t var_88_2 = edx
        int32_t var_8c_2 = var_8
        int32_t var_90_2 = esi_3 - 1
        int32_t var_94_2 = arg1
        int32_t var_98_2 = edi + 1
        int32_t var_9c_2 = arg1
        sub_58fcf0(arg1, esi_1, esi_2, esi)
        result = esi_3 - 1
        
        if (edi + 1 != result)
            int32_t var_2c_3 = 0
            int32_t var_80_3 = ebx
            int32_t var_84_3 = ecx
            int32_t var_88_3 = edx
            int32_t var_8c_3 = var_8
            int32_t result_1 = result
            int32_t var_94_3 = arg3
            int32_t var_98_3 = edi + 1
            int32_t var_9c_3 = arg3
            return sub_58fcf0(arg3, esi_1, esi_2, esi)

return result
