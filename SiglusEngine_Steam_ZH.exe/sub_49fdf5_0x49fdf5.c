// 函数: sub_49fdf5
// 地址: 0x49fdf5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t ebx = 0
void* var_8_1 = arg1

if (arg2 != 0)
    char* eax_1 = arg2
    void* edx_1 = &eax_1[1]
    
    do
        arg1.b = *eax_1
        eax_1 = &eax_1[1]
    while (arg1.b != 0)
    
    ebx = sub_745f3f(eax_1 - edx_1 + 1)
    
    if (ebx == 0)
        return 0x8007000e
    
    int32_t edi
    int32_t var_14_2 = edi
    int32_t esi_3
    int32_t edi_2
    edi_2, esi_3 = __builtin_memcpy(ebx, arg2, (eax_1 - edx_1 + 1) u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_3, (eax_1 - edx_1 + 1) & 3)

j__free(*(var_8_1 + 0xd0))
*(var_8_1 + 0xd0) = ebx
return 0
