// 函数: sub_449ac0
// 地址: 0x449ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0

if (*(arg1 + 0x3c) == 4)
    return 0x8876086c

int32_t var_14_1 = 1
void* ebx_1 = sub_4441fb(arg1, arg2)

if (ebx_1 == 0)
    return 0x8876086c

int32_t edi
int32_t var_14_2 = edi
int32_t edi_1
edi_1.w = *(arg1 + 0x44)
void* eax_1

if (edi_1.w != 0xffff)
    eax_1.w = *(arg1 + 0x42)
    int32_t ecx_2
    ecx_2.b = *(arg1 + 0x40) != eax_1.w
    sub_442a01(arg1, 
        zx.d(*(*(zx.d(eax_1.w) * 0xb4 + *(arg1 + 0xa4) + 0x38) + zx.d(edi_1.w) * 0x38 + 0x34)), 
        0xffffffff, ecx_2 - 1)
    result = 0
    *(arg1 + 0x44) = 0xffff

eax_1.w = *(ebx_1 + 0x14)
uint32_t edi_2 = zx.d(*(arg1 + 0x42))
int32_t edx_3 = *(arg1 + 0xac)
int32_t ecx_6 = *(arg1 + 0xb4)
*(arg1 + 0x42) = eax_1.w
*(arg1 + 0xb8) = ecx_6 + ((zx.d(eax_1.w) * edx_3) << 2)

if (ecx_6 != 0 && edi_2 != zx.d(*(arg1 + 0x42)))
    char* i = nullptr
    
    if (edx_3 u> 0)
        do
            if (i[*(arg1 + 0xbc)] != 0)
                int32_t* eax_12 = *(*(arg1 + 0xb8) + (i << 2))
                
                if (eax_12 != 0)
                    while (true)
                        int32_t* ecx_10 = *eax_12
                        
                        if (ecx_10 == 0)
                            break
                        
                        *ecx_10 = 1
                        void* ecx_7 = *eax_12
                        *(zx.d(*(ecx_7 + 0x16)) * 0x64
                            + *(zx.d(*(ecx_7 + 0x14)) * 0x64 + *(arg1 + 0x2c) + 4)) = 1
                        eax_12 = &eax_12[1]
            
            i = &i[1]
        while (i u< *(arg1 + 0xac))

return result
