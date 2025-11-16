// 函数: sub_5f2ba0
// 地址: 0x5f2ba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t* ebx = arg6
int32_t* esi = arg5
void* edi = arg2
int32_t* eax_1 = arg4

if (arg3 != edi && eax_1 != esi)
    while (true)
        int32_t var_18_1 = *(edi - 4)
        edi -= 4
        esi -= 4
        ebx -= 4
        
        if (arg7(*esi, var_18_1) == 0)
            edi += 4
            *ebx = *esi
            eax_1 = arg4
            
            if (eax_1 == esi)
                break
        else
            esi = &esi[1]
            *ebx = *edi
            
            if (arg3 == edi)
                eax_1 = arg4
                break

void* esi_2 = (esi - eax_1) & 0xfffffffc
void* ebx_1 = ebx - esi_2
_memcpy(ebx_1, eax_1, esi_2)
int32_t ecx = (edi - arg3) s>> 2 << 2
void* result = ebx_1 - ecx
_memcpy(result, arg3, ecx)
return result
