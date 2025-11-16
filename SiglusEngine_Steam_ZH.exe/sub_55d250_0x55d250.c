// 函数: sub_55d250
// 地址: 0x55d250
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg1[2]
int32_t esi = arg1[1]
int32_t result = (edx - esi) s>> 2

if (result u>= arg2)
    return result

int32_t esi_2 = (esi - *arg1) s>> 2

if (0x3fffffff - esi_2 u< arg2)
    sub_743191("vector<T> too long")
    noreturn

int32_t esi_3 = esi_2 + arg2
int32_t edx_2 = (edx - *arg1) s>> 2
uint32_t eax_4 = edx_2 u>> 1

if (0x3fffffff - eax_4 u>= edx_2)
    int32_t edx_5 = edx_2 + eax_4
    
    if (edx_5 u< esi_3)
        edx_5 = esi_3
    
    return sub_530c80(arg1, edx_5) __tailcall

int32_t edx_3 = 0

if (0 u< esi_3)
    edx_3 = esi_3

return sub_530c80(arg1, edx_3) __tailcall
