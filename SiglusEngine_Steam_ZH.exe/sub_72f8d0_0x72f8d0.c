// 函数: sub_72f8d0
// 地址: 0x72f8d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
int32_t i = 0
void* var_14 = ebx
int32_t i_1 = 0
void* esi = *(ebx + 0x1c0)
void* var_18 = esi

if (*(ebx + 0x64) s<= 0)
    return 

void* ecx = esi + 0x34
void* var_c_1 = ecx

do
    int32_t eax_1 = 0
    int32_t* eax
    
    if (i s> 0)
        int32_t* ecx_1 = esi + 0x20
        
        while (*(ecx - 0x14) != *ecx_1)
            eax_1 += 1
            ecx_1 = &ecx_1[1]
            
            if (eax_1 s>= i)
                goto label_72f933
        
        eax = *(esi + (eax_1 << 2) + 0x34)
    
    if (i s<= 0 || eax == 0)
    label_72f933:
        int32_t* eax_4 = (**(ebx + 4))(ebx, 1, 0x400)
        void* const j = &data_ade640
        int32_t* esi_1 = eax_4
        
        do
            for (int32_t k = 0; k s< 0x10; )
                uint32_t eax_5 = zx.d(*(j + k))
                k += 1
                int32_t edi_1
                *esi_1 = divs.dp.d(sx.q(0xfe01 - eax_5 * 0x1fe), (edi_1 << 9) - 0x200)
                esi_1 = &esi_1[1]
            
            j += 0x10
        while (j s< &data_ade740)
        
        i = i_1
        eax = eax_4
        ebx = var_14
        esi = var_18
    
    i += 1
    i_1 = i
    *var_c_1 = eax
    ecx = var_c_1 + 4
    var_c_1 = ecx
while (i s< *(ebx + 0x64))
