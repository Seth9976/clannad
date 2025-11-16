// 函数: sub_5f2a10
// 地址: 0x5f2a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg6
int32_t edx = arg5
int32_t eax = edx * 2
void* eax_1 = arg4

if (eax s<= ebx)
    int32_t esi_1 = edx << 2
    arg6 = esi_1
    
    do
        int32_t* edx_1 = esi_1 + arg3
        int32_t* esi_2 = esi_1 + edx_1
        eax_1 = sub_5f2b00(eax_1, edx_1, arg3, edx_1, esi_2, eax_1, arg7)
        ebx -= eax
        arg3 = esi_2
        esi_1 = arg6
    while (ebx s>= eax)
    
    edx = arg5

if (ebx s<= edx)
    return _memcpy(eax_1, arg3, (arg2 - arg3) & 0xfffffffc)

int32_t* edx_2 = &arg3[edx]
return sub_5f2b00(eax_1, edx_2, arg3, edx_2, arg2, eax_1, arg7)
