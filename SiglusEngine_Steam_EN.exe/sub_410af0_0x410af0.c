// 函数: sub_410af0
// 地址: 0x410af0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1
int32_t esi = arg1[4]
int32_t edi = arg1[1]
int32_t edx_1 = arg2 + edi

if (eax + 4 s>= esi && edx_1 + (eax << 3) s> esi << 3)
    return 0xffffffff

char* esi_2 = arg1[3]
int32_t* ecx
ecx.b = arg1[1].b
int32_t eax_3
eax_3.b = *esi_2
uint32_t eax_4 = eax_3 u>> ecx.b

if (edx_1 s> 8)
    int32_t ecx_1
    ecx_1.b = esi_2[1]
    eax_4 |= ecx_1 << (8 - edi.b)
    
    if (edx_1 s> 0x10)
        int32_t ecx_3
        ecx_3.b = esi_2[2]
        eax_4 |= ecx_3 << (0x10 - edi.b)
        
        if (edx_1 s> 0x18)
            int32_t ecx_5
            ecx_5.b = esi_2[3]
            eax_4 |= ecx_5 << (0x18 - edi.b)
            
            if (edx_1 s> 0x20 && edi != 0)
                int32_t edx_2
                edx_2.b = esi_2[4]
                eax_4 |= edx_2 << (0x20 - edi.b)

return eax_4 & *((arg2 << 2) + &data_63d000)
