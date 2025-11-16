// 函数: sub_41323c
// 地址: 0x41323c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
uint32_t temp1 = modu.dp.d(0:(arg1[1] + *arg1 + arg1[2]), arg5)
*arg10 = 0xffffffff
int32_t* ebx = &arg3[temp1 * 2]

for (float* i = *ebx; i != 0; i = i[4])
    long double x87_r7_1 = fconvert.t(*arg1)
    long double x87_r6_1 = fconvert.t(*i)
    x87_r6_1 - x87_r7_1
    int16_t* eax_4
    eax_4.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        long double x87_r7_2 = fconvert.t(arg1[1])
        long double x87_r6_2 = fconvert.t(i[1])
        x87_r6_2 - x87_r7_2
        eax_4.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            long double x87_r7_3 = fconvert.t(arg1[2])
            long double x87_r6_3 = fconvert.t(i[2])
            x87_r6_3 - x87_r7_3
            eax_4.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (not(p_3))
                int32_t eax_5 = arg6
                int32_t* edx_2 = arg2
                
                while (true)
                    int32_t* eax_8 = *(eax_5 + (edx_2 << 2))
                    
                    if (eax_8 == 0xffffffff)
                        *arg10 = i[3]
                        return 1
                    
                    eax_4 = arg8 + divu.dp.d(0:eax_8, 3) * 6
                    int32_t edx_5 = i[3]
                    
                    if (zx.d(*eax_4) == edx_5)
                        break
                    
                    if (zx.d(eax_4[1]) == edx_5)
                        break
                    
                    if (zx.d(eax_4[2]) == edx_5)
                        break
                    
                    eax_5 = arg7
                    edx_2 = eax_8

int32_t ecx_1 = *arg9
int32_t* eax_12 = arg4 + ecx_1 * 0x14
*arg9 = ecx_1 + 1
*eax_12 = *arg1
void* edi_5 = &eax_12[1]
void* esi_1 = &arg1[1]
*edi_5 = *esi_1
*(edi_5 + 4) = *(esi_1 + 4)
eax_12[3] = arg2
eax_12[4] = *ebx
*ebx = eax_12
return 0
