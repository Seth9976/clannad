// 函数: sub_597940
// 地址: 0x597940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg1[2]
int32_t esi = arg1[1]
int32_t result = edx - esi

if (result u>= arg2)
    return result

int32_t ebx = *arg1

if (ebx - esi - 1 u< arg2)
    sub_743191("vector<T> too long")
    noreturn

int32_t edx_1 = edx - ebx
uint32_t esi_2 = esi - ebx + arg2
uint32_t edi_2 = edx_1 u>> 1

if (0xffffffff - edi_2 u>= edx_1)
    uint32_t edx_4 = edx_1 + edi_2
    
    if (edx_4 u< esi_2)
        edx_4 = esi_2
    
    return sub_597890(arg1, edx_4) __tailcall

uint32_t edx_2 = 0

if (0 u< esi_2)
    edx_2 = esi_2

return sub_597890(arg1, edx_2) __tailcall
