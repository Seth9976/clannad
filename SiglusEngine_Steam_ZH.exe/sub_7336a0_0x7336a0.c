// 函数: sub_7336a0
// 地址: 0x7336a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
int32_t ebx
ebx.b = arg2
void* var_14 = edi
int32_t (** esi)(void* arg1) = (**(edi + 4))(edi, 1, 0x74)
*(edi + 0x1a0) = esi
*esi = sub_732740
esi[2] = sub_732760
esi[0x1c] = 0

if (ebx.b == 0)
    char* eax_18 = (*(*(edi + 4) + 4))(edi, 1, 0x500)
    esi[8] = eax_18
    esi[0xd] = &eax_18[0x280]
    esi[9] = &eax_18[0x80]
    esi[0xe] = &eax_18[0x300]
    esi[0xa] = &eax_18[0x100]
    esi[0xf] = &eax_18[0x380]
    esi[0xb] = &eax_18[0x180]
    esi[0x10] = &eax_18[0x400]
    char* result = &eax_18[0x480]
    esi[0xc] = &eax_18[0x200]
    esi[0x11] = result
    
    if (*(edi + 0x190) == 0)
        result = _memset(eax_18, 0, 0x500)
    
    esi[1] = sub_579f60
    esi[3] = sub_7327b0
    esi[4] = 0
    return result

int32_t i_1 = 0

if (*(edi + 0x24) s> 0)
    int32_t* esi_1 = *(edi + 0xc4) + 0xc
    void* var_c_1 = &esi[0x12]
    int32_t i
    
    do
        int32_t ecx = *esi_1
        int32_t edx = ecx
        
        if (*(edi + 0xc9) != 0)
            edx *= 3
        
        int32_t ecx_1 = ecx + esi_1[5] - 1
        edi = var_14
        int32_t ebx_3 = esi_1[4] - 1 + esi_1[-1]
        int32_t eax_14 = (*(*(edi + 4) + 0x14))(edi, 1, 1, 
            ebx_3 - mods.dp.d(sx.q(ebx_3), esi_1[-1]), ecx_1 - mods.dp.d(sx.q(ecx_1), *esi_1), edx)
        esi_1 = &esi_1[0x16]
        i = i_1 + 1
        i_1 = i
        *var_c_1 = eax_14
        var_c_1 += 4
    while (i s< *(edi + 0x24))

esi[1] = sub_7329e0
esi[3] = sub_732c20
esi[4] = &esi[0x12]
return &esi[0x12]
