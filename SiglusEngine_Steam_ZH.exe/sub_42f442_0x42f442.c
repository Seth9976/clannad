// 函数: sub_42f442
// 地址: 0x42f442
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t result = 0
int32_t* eax = sub_745f3f(0x1c)
int32_t* ebx

if (eax == 0)
    ebx = nullptr
else
    ebx = sub_42f3c6(eax)

if (ebx == 0)
    return 0x8007000e

int32_t edi
int32_t var_18_1 = edi

if (arg3 u<= 0)
label_42f4cb:
    ebx[3] = *(arg1 + 0x10)
    *(*(arg1 + 0x10) + 8) = ebx
    *(arg1 + 0x10) = ebx
    
    if (arg4 != 0)
        *arg4 = ebx
    
    ebx = nullptr
else
    int32_t eax_3 = arg3 & 3
    char temp1_1 = eax_3.b
    eax_3.b = neg.b(eax_3.b)
    int32_t eax_6 = neg.d(sbb.d(eax_3, eax_3, temp1_1 != 0)) + (arg3 u>> 2)
    *ebx = eax_6
    int32_t eax_8 = sub_745f3f(eax_6 << 2)
    ebx[1] = eax_8
    
    if (eax_8 != 0)
        int32_t esi_2
        int32_t edi_3
        edi_3, esi_2 = __builtin_memcpy(eax_8, arg2, arg3 u>> 2 << 2)
        __builtin_memcpy(edi_3, esi_2, arg3 & 3)
        goto label_42f4cb
    
    result = 0x8007000e

if (ebx != 0)
    sub_42f421(ebx, 1)

return result
