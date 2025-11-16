// 函数: sub_4c5538
// 地址: 0x4c5538
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2

if (ebx == 0)
    return 1

int32_t eax = *ebx
int32_t ecx_1 = eax & 0xfff00000

if (ecx_1 == 0 || ecx_1 == 0x20700000)
    return 0

int32_t eax_1 = eax & 0xfffff
int32_t edi
int32_t var_bc_1 = edi
uint32_t var_14_1 = divu.dp.d(0:(ebx[1]), eax_1)

if (ecx_1 == 0x70500000 || ecx_1 == 0x70600000 || ecx_1 == 0x70700000)
    var_14_1 = 2

int32_t result

if (var_14_1 u<= 1)
label_4c5707:
    result = 0
else
    int32_t ecx_2 = arg1[0x22]
    int32_t edx_3 = arg1[0x1f]
    arg1[0x20]
    int32_t var_68[0x12]
    var_68[arg1[0x20]] = 0
    var_68[ecx_2] = 0
    var_68[edx_3] = 0
    int32_t var_b0[0x12]
    var_b0[arg1[0x20]] = 1
    int32_t* eax_6 = nullptr
    var_b0[ecx_2] = 3
    var_b0[edx_3] = 1
    int32_t var_18_1 = 0
    int32_t var_10_1 = 0
    
    if (var_14_1 u<= 0)
    label_4c5707_1:
        result = 0
    else
        int32_t* var_1c_1 = nullptr
        
        while (true)
            void* edi_2 = *(arg1[5] + (*(eax_6 + ebx[2]) << 2))
            int32_t eax_10 = *(*(arg1[4] + (*(edi_2 + 4) << 2)) + 4)
            int32_t ecx_10 = eax_10 & 0x200
            int32_t eax_11
            
            if (ecx_10 == 0)
                if (eax_10.b s>= 0)
                    int32_t eax_13
                    
                    if ((eax_10.b & 0x10) != 0 && ecx_10 == 0)
                        eax_13 = (*(*arg1 + 0x54))(*(edi_2 + 0x6c))
                    
                    if ((eax_10.b & 0x10) == 0 || ecx_10 != 0 || eax_13 == 0xffff)
                        eax_11 = arg1[0x22]
                    else
                        eax_11 = arg1[0x20]
                else
                    eax_11 = arg1[0x25]
            else if (eax_10.b s< 0)
                eax_11 = arg1[0x25]
            else
                eax_11 = arg1[0x1f]
            
            int32_t var_c_1 = 0
            
            if (var_10_1 u> 0)
                int32_t* ecx_12 = ebx[2]
                
                do
                    void* eax_15 = *(arg1[5] + (*ecx_12 << 2))
                    
                    if (*(edi_2 + 4) == *(eax_15 + 4) && *(edi_2 + 8) == *(eax_15 + 8)
                            && *(edi_2 + 0xc) == *(eax_15 + 0xc))
                        break
                    
                    var_c_1 += 1
                    ecx_12 = &ecx_12[eax_1]
                while (var_c_1 u< var_10_1)
                
                ebx = arg2
            
            if (var_c_1 == var_10_1)
                int32_t __saved_ebp
                (&__saved_ebp)[eax_11 - 0x19] += 1
                
                if ((&__saved_ebp)[eax_11 - 0x19] u<= var_b0[eax_11])
                    goto label_4c56e6
                
            label_4c5715:
                
                if (arg3 != 0)
                    *arg3 = var_10_1
                
                result = 1
                break
            
        label_4c56e6:
            
            if (zx.d((arg1[0x32]).w) u>= 0x200 && arg1[0x1f] == eax_11)
                var_18_1 += 1
            
            if (zx.d((arg1[0x32]).w) u>= 0x200 && arg1[0x1f] == eax_11 && var_18_1 u> 2)
                goto label_4c5715
            
            eax_6 = &var_1c_1[eax_1]
            bool cond:4_1 = var_10_1 + 1 u< var_14_1
            var_10_1 += 1
            var_1c_1 = eax_6
            
            if (not(cond:4_1))
                goto label_4c5707_1

return result
