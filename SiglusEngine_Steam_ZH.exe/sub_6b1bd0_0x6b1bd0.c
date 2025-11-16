// 函数: sub_6b1bd0
// 地址: 0x6b1bd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg4
void* edi = arg2
int32_t edx = arg3
int32_t var_8 = edx
void* var_c = edi
void* ebx = (edi << 1) + 2
bool cond:0 = ebx != eax

while (ebx s< eax)
    int32_t ecx_1 = ebx * 0x11c + edx
    
    if (arg6(ecx_1, ecx_1 - 0x11c) != 0)
        ebx -= 1
    
    edx = var_8
    eax = arg4
    __builtin_memcpy(edi * 0x11c + edx, ebx * 0x11c + edx, 0x11c)
    edi = ebx
    ebx = (ebx << 1) + 2
    cond:0 = ebx != eax

if (not(cond:0))
    __builtin_memcpy(edi * 0x11c + edx, edx - 0x11c + eax * 0x11c, 0x11c)
    edi = arg4 - 1

int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(edi - 1)
int32_t edx_2 = arg5
void* result = (eax_5 - edx_1) s>> 1
arg4 = result

if (var_c s< edi)
    do
        int32_t esi_6 = result * 0x11c + var_8
        result = arg6(esi_6, edx_2)
        
        if (result.b == 0)
            break
        
        __builtin_memcpy(edi * 0x11c + var_8, esi_6, 0x11c)
        edi = arg4
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = sx.q(arg4 - 1)
        edx_2 = arg5
        result = (eax_9 - edx_3) s>> 1
        arg4 = result
    while (var_c s< edi)
    
    edx_2 = arg5

__builtin_memcpy(edi * 0x11c + var_8, edx_2, 0x11c)
return result
