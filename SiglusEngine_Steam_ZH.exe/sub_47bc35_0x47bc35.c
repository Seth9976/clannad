// 函数: sub_47bc35
// 地址: 0x47bc35
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1[1]
int32_t edi
int32_t var_c = edi

if (ebx == 0 || *(ebx + 4) != 4)
    return 0

int32_t* ecx = arg1[2]

if (ecx == 0)
    return 0x80004005

int32_t result = sub_4a440a(ecx, ebx, *arg1 + 0x18, arg1[4], arg1[5])

if (result s>= 0)
    j__free(arg1[6])
    int32_t eax_4 = sub_745f3f(*(ebx + 0x18) << 2)
    arg1[6] = eax_4
    
    if (eax_4 == 0)
        return 0x8007000e
    
    int32_t ecx_3 = *(ebx + 0x18) << 2
    __builtin_memset(__builtin_memset(eax_4, 0xffffffff, ecx_3 u>> 2 << 2), 0xff, ecx_3 & 3)
    void* ecx_7 = arg1[2]
    void* var_10_3 = ecx_7
    void* var_14_3 = ecx_7
    var_14_3.q = fconvert.d(float.t(1))
    int32_t eax_5 = sub_49f544(ecx_7, *(ecx_7 + 0x78), 0, 0, var_14_3)
    void* ecx_8 = arg1[2]
    void* var_10_4 = ecx_8
    void* var_14_4 = ecx_8
    var_14_4.q = fconvert.d(float.t(0))
    arg1[8] = eax_5
    int32_t eax_6 = sub_49f544(ecx_8, *(ecx_8 + 0x78), 0, 0, var_14_4)
    void* ecx_9 = arg1[2]
    void* var_10_5 = ecx_9
    void* var_14_5 = ecx_9
    var_14_5.q = fconvert.d(fconvert.t(-1.0))
    arg1[9] = eax_6
    int32_t eax_7 = sub_49f544(ecx_9, *(ecx_9 + 0x78), 0, 0, var_14_5)
    arg1[0xc] = 0xffffffff
    arg1[0xa] = eax_7
    arg1[0xb] = arg1[8]
    arg1[0xd] = 1
    result = sub_47ad82(arg1, *(ebx + 0x1c), 0)
    
    if (result s>= 0)
        int32_t eax_9 = arg1[0x13]
        int32_t eax_10 = neg.d(eax_9)
        return sbb.d(eax_10, eax_10, eax_9 != 0) & 0x80004005

return result
