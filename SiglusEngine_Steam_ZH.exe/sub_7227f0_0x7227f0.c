// 函数: sub_7227f0
// 地址: 0x7227f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1
int32_t ebx = arg3
int32_t result_1 = arg2
int32_t result_2 = arg4
int32_t esi_2 = rrc.d(eax + ebx, 1, eax + ebx u< eax)
int32_t result = rrc.d(result_1 + result_2, 1, result_1 + result_2 u< result_1)

while (esi_2 != arg5)
    if (esi_2 u> arg5)
        ebx = esi_2
        esi_2 = rrc.d(esi_2 + eax, 1, esi_2 + eax u< esi_2)
        
        if (esi_2 == ebx)
            break
        
        result_2 = result
        result = rrc.d(result + result_1, 1, result + result_1 u< result)
    else
        eax = esi_2
        esi_2 = rrc.d(esi_2 + ebx, 1, esi_2 + ebx u< esi_2)
        
        if (esi_2 == eax)
            break
        
        result_1 = result
        result = rrc.d(result + result_2, 1, result + result_2 u< result)

return result
