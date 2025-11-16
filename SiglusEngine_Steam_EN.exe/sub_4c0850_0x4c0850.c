// 函数: sub_4c0850
// 地址: 0x4c0850
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_1c = esi
int32_t var_20 = edi
int32_t eax = arg3
int32_t ebx = arg4
int32_t result_1 = arg2
int32_t result_2 = arg5
int32_t esi_3 = rrc.d(eax + ebx, 1, eax + ebx u< eax)
int32_t result = rrc.d(result_1 + result_2, 1, result_1 + result_2 u< result_1)

while (esi_3 != arg6)
    if (esi_3 u> arg6)
        ebx = esi_3
        esi_3 = rrc.d(esi_3 + eax, 1, esi_3 + eax u< esi_3)
        
        if (esi_3 == ebx)
            break
        
        result_2 = result
        result = rrc.d(result + result_1, 1, result + result_1 u< result)
    else
        eax = esi_3
        esi_3 = rrc.d(esi_3 + ebx, 1, esi_3 + ebx u< esi_3)
        
        if (esi_3 == eax)
            break
        
        result_1 = result
        result = rrc.d(result + result_2, 1, result + result_2 u< result)

return result
