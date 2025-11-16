// 函数: sub_4e1c10
// 地址: 0x4e1c10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x1cc)
int32_t edx = *(eax + 0x18)
int32_t edx_1 = *(eax + 0x1c)
int32_t edx_2 = *(eax + 0x20)
int32_t edx_3 = *(eax + 0x24)
int32_t edx_4 = *(eax + 0x28)
int32_t edx_5 = *(eax + 0x2c)
int32_t edx_6 = *(eax + 0x30)
int32_t edx_7 = *(eax + 0x34)
int32_t edx_8 = *(eax + 0x38)
int32_t edx_9 = *(eax + 0x3c)
int32_t edx_10 = *(eax + 8)
int32_t edx_11 = *(eax + 0xc)
int32_t edx_12 = *(eax + 0x10)
int32_t eax_1 = *(eax + 0x14)
int32_t edx_13 = *(arg1 + 0x70)
void* result = *(arg1 + 0x148)
arg1 = result

if (arg5 - 1 s>= 0)
    int32_t eax_2 = arg2[1]
    int32_t edi
    int32_t var_70_1 = edi
    int32_t* edi_2 = *arg2 - eax_2
    int32_t* ebx_2 = arg2[2] - eax_2
    int32_t* ecx_3 = arg2[3] - eax_2
    void** edx_15 = eax_2 + (arg3 << 2)
    int32_t* var_c_1 = edi_2
    int32_t* var_14_1 = ebx_2
    int32_t* var_10_1 = ecx_3
    int32_t var_8_1 = arg5
    
    while (true)
        int32_t esi_3 = *(ebx_2 + edx_15)
        int32_t ecx_4 = *(ecx_3 + edx_15)
        int32_t* ebx_3 = arg4
        result = *edx_15
        int32_t edi_3 = *(edi_2 + edx_15)
        uint8_t* ecx_5 = *ebx_3
        arg4 = &ebx_3[1]
        edx_15 = &edx_15[1]
        arg2 = result
        
        if (edx_13 u> 0)
            void* edx_17 = edi_3 - result
            void* esi_4 = esi_3 - result
            void* edi_5 = ecx_4 - result
            void* var_20_1 = edx_17
            void* var_1c_1 = esi_4
            arg3 = edx_13
            
            while (true)
                uint32_t edx_18 = zx.d(*(edx_17 + result))
                uint32_t esi_5 = zx.d(*(esi_4 + result))
                int32_t* edi_9 = zx.d(*(*(edx_10 + (esi_5 << 2)) + edx_18 + arg1))
                uint32_t esi_7 = zx.d(*(((*(eax_1 + (zx.d(*result) << 2))
                    + *(edx_12 + (esi_5 << 2))) s>> 0x10) + edx_18 + arg1))
                uint32_t edi_18 = zx.d(*(*(edx_11 + (zx.d(*result) << 2)) + edx_18 + arg1))
                int32_t edx_22 = *(edx + ((0xff - zx.d(*(edi_5 + result))) << 2))
                *ecx_5 = ((((((*(edx_1 + (edi_9 << 2)) * edx_22) u>> 0x10) *
                    *(edx_4 + (esi_7 << 2))) u>> 0x10) * *(edx_7 + (edi_18 << 2))) u>> 0x18).b
                ecx_5[1] = ((((((*(edx_5 + (esi_7 << 2)) * edx_22) u>> 0x10) *
                    *(edx_8 + (edi_18 << 2))) u>> 0x10) * *(edx_2 + (edi_9 << 2))) u>> 0x18).b
                ecx_5[2] = ((((((*(edx_9 + (edi_18 << 2)) * edx_22) u>> 0x10) *
                    *(edx_3 + (edi_9 << 2))) u>> 0x10) * *(edx_6 + (esi_7 << 2))) u>> 0x18).b
                ecx_5 = &ecx_5[3]
                result += 1
                bool cond:2_1 = arg3 != 1
                arg3 -= 1
                
                if (not(cond:2_1))
                    break
                
                esi_4 = var_1c_1
                edx_17 = var_20_1
        
        int32_t temp2_1 = var_8_1
        var_8_1 -= 1
        
        if (temp2_1 == 1)
            break
        
        edi_2 = var_c_1
        ecx_3 = var_10_1
        ebx_2 = var_14_1

return result
