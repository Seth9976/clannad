// 函数: sub_66f5c0
// 地址: 0x66f5c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_4 = arg1[2]
int32_t esi = arg1[1]
void* result = (edx_4 - esi) s>> 4

if (result u>= 1)
    return result

int32_t esi_2 = (esi - *arg1) s>> 4

if (0xfffffff - esi_2 u< 1)
    sub_743191("vector<T> too long")
    noreturn

int32_t edx_1 = (edx_4 - *arg1) s>> 4
uint32_t eax_4 = edx_1 u>> 1

if (0xfffffff - eax_4 u>= edx_1)
    int32_t edx_3 = edx_1 + eax_4
    
    if (edx_3 u< esi_2 + 1)
        edx_3 = esi_2 + 1
    
    return sub_66f4c0(arg1, edx_3)

int32_t edx_2 = 0

if (0 u< esi_2 + 1)
    edx_2 = esi_2 + 1

return sub_66f4c0(arg1, edx_2)
