// 函数: sub_55cc50
// 地址: 0x55cc50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, arg1[2] - *arg1)
int32_t edx_3 = edx_2 s>> 2
int32_t esi_2 = (edx_3 u>> 0x1f) + edx_3
uint32_t ecx_1 = esi_2 u>> 1

if (0xaaaaaaa - ecx_1 u>= esi_2)
    int32_t esi_4 = esi_2 + ecx_1
    
    if (esi_4 u< arg2)
        return arg2
    
    return esi_4

if (0 u< arg2)
    return arg2

return 0
