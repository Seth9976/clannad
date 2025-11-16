// 函数: sub_450962
// 地址: 0x450962
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg3
int32_t edi
int32_t var_20 = edi

while (edx u< arg4)
    int16_t* ecx_1 = *(edx + 0x48) + *arg2
    uint32_t var_c_1 = zx.d(*(edx + 0x54))
    void* i = (zx.d(ecx_1[1]) + zx.d(*ecx_1)) * 0x64 + *(arg1 + 0x2c) - 0x64
    void* ecx_6 = zx.d(*(edx + 0x56)) * 0x64 + i
    void* var_10_1 = ecx_6
    
    for (; i u< ecx_6; i += 0x64)
        int32_t* j = nullptr
        int32_t* esi_1 = *(i + 4)
        
        if (*(i + 0x36) u> 0)
            do
                uint32_t eax_6 = zx.d(*(esi_1 + 0x5b))
                int32_t var_14
                
                if (eax_6 == 3)
                    if (*esi_1 != 0)
                        int32_t eax_12 =
                            sub_44c68f(arg1, zx.d((divs.dp.d(sx.q(i - *(arg1 + 0x2c)), 0x64)).w), j)
                        int16_t top = top - 1
                        unimplemented  {call 0x44c68f}
                        
                        if (eax_12 s< 0)
                            return eax_12
                        
                        *esi_1 = esi_1[1]
                    
                    int32_t* ecx_8 = *(arg1 + 8)
                    ecx_6 = var_10_1
                    var_14 = (*(*ecx_8 + 0x114))(ecx_8, var_c_1, esi_1[0x16] & 0xffffff, 
                        *(esi_1[0x12] + *i))
                else if (eax_6 == 9)
                    void* eax_21 = *(*(*(arg1 + 0xb0) + (esi_1[7] << 2)) + 0x40)
                    int32_t ecx_10
                    
                    if (eax_21 != 0)
                        ecx_10 = *(*(eax_21 + 8) + (*esi_1[2] << 2))
                    else
                        ecx_10 = *esi_1[2]
                    
                    ecx_6 = var_10_1
                    var_14 = (*(**(arg1 + 8) + 0x104))(*(arg1 + 8), var_c_1, 
                        *(*(arg1 + 0x18) + ecx_10 * 0x18 + 4))
                
                if (var_14 s< 0)
                    return var_14
                
                j += 1
                esi_1 = &esi_1[0x19]
            while (j u< zx.d(*(i + 0x36)))
            
            edx = arg3
        
        var_c_1 += 1
    
    edx += 0x64
    arg3 = edx

return 0
