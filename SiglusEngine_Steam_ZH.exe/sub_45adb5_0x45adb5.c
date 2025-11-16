// 函数: sub_45adb5
// 地址: 0x45adb5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t eax = arg1[1]
int32_t ecx = arg2
int32_t edi
int32_t var_10 = edi

if (ecx u> eax)
    if (eax == 0)
        arg2 = 0x10
        goto label_45addb
    
    do
        arg2 = eax * 2
    label_45addb:
        eax = arg2
    while (eax u< ecx)
    
    int32_t eax_3 = sub_745f3f(eax << 3)
    
    if (eax_3 == 0)
        return 0x8007000e
    
    if (arg3 == 0)
        int32_t ecx_3 = arg1[1] << 3
        int32_t esi_2
        int32_t edi_2
        edi_2, esi_2 = __builtin_memcpy(eax_3, *arg1, ecx_3 u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_2, ecx_3 & 3)
    
    j__free(*arg1)
    *arg1 = eax_3
    arg1[1] = arg2

return 0
