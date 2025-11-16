// 函数: sub_44b676
// 地址: 0x44b676
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_28 = edi
int32_t* edi_3 = arg2 * 0x64 + *(arg1 + 0x2c)
void* esi_2 = arg3 * 0x64 + edi_3[1]
int32_t* eax = *(esi_2 + 0x38)
void* eax_1 = (*(*eax + 0xc))(eax)
int32_t eax_3 = *(eax_1 + 0xc) + *edi_3
int32_t eax_4 = *(eax_1 + 4)
bool cond:0 = (*(arg1 + 0x118) & 1) != 0
int32_t var_10 = 0
arg2 = 0

if (not(cond:0))
    int32_t eax_6
    int32_t mxcsr
    int32_t mxcsr_1
    int16_t x87control
    int16_t x87control_1
    eax_6, mxcsr_1, x87control_1 = __controlfp(mxcsr, x87control, 0, 0)
    *(arg1 + 0x114) = eax_6
    __controlfp(mxcsr_1, x87control_1, 0, 0x30000)
    *(arg1 + 0x118) |= 1

if (*(esi_2 + 0x3c) != 0)
    int32_t ecx_2 = *edi_3
    int32_t eax_9 = *(eax_1 + 0x10) + ecx_2
    int32_t eax_11 = *(eax_1 + 0x14) + ecx_2
    uint32_t* var_18_1 = *(eax_1 + 0x18) + ecx_2
    arg2 = 0
    
    if (*(esi_2 + 0x4e) u> 0)
        uint32_t* eax_13
        
        do
            int32_t* ecx_5 = (zx.d(arg2.w) << 5) + *(esi_2 + 0x34)
            
            if (*ecx_5 != 0)
                *ecx_5 = ecx_5[1]
                eax_13 = ecx_5[4]
                uint32_t edx_1 = zx.d(eax_13[1].w)
                
                if (edx_1 == 0)
                    int32_t var_2c_3 = 0xffffffff
                    int32_t* var_30_2 = &var_10
                    sub_44aea9(ecx_5[3], eax_11 + (zx.d(*(eax_13 + 6)) << 3), zx.d(eax_13[2].w), 
                        *(esi_2 + 0x3c), eax_13)
                else if (edx_1 == 1)
                    int32_t var_2c_2 = 0xffffffff
                    sub_44ab10(ecx_5[3], &var_18_1[zx.d(*(eax_13 + 6)) * 8], zx.d(eax_13[2].w), 
                        *(esi_2 + 0x3c), eax_13, &var_10)
                else if (edx_1 == 2)
                    int32_t var_2c_1 = 0xffffffff
                    sub_44ab10(ecx_5[3], (zx.d(*(eax_13 + 6)) << 5) + eax_9, zx.d(eax_13[2].w), 
                        *(esi_2 + 0x3c), eax_13, &var_10)
            
            arg2 += 1
            eax_13.w = arg2.w
        while (eax_13.w u< *(esi_2 + 0x4e))
    
    int32_t eax_22 = *(eax_1 + 8)
    var_10 = *edi_3 + *(eax_1 + 0x10)
    arg2 = eax_22

sub_428975(*(esi_2 + 0x40), *(esi_2 + 0x44), 0, var_10, 0, eax_3, eax_3, eax_3, 0, arg2, 0, eax_4, 
    eax_4, eax_4)
return 0
