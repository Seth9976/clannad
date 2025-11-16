// 函数: sub_4c321d
// 地址: 0x4c321d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_bc = edi

if (arg2 == 0)
    return 1

int32_t eax_1 = *arg2
int32_t edx_2 = eax_1 & 0xfff00000

if (edx_2 == 0 || edx_2 == 0x20700000)
    return 0

int32_t eax_2 = eax_1 & 0xfffff
uint32_t temp0_1 = divu.dp.d(0:(arg2[1]), eax_2)

if (temp0_1 u> 1)
    int32_t ecx_1 = arg1[0x22]
    int32_t edx_5 = arg1[0x1f]
    arg1[0x20]
    int32_t var_6c[0x12]
    var_6c[arg1[0x20]] = 0
    var_6c[ecx_1] = 0
    var_6c[edx_5] = 0
    int32_t edi_1 = arg1[0x25]
    int32_t var_b4[0x12]
    var_b4[arg1[0x20]] = 1
    var_6c[edi_1] = 0
    int32_t* eax_7 = nullptr
    var_b4[ecx_1] = 3
    var_b4[edx_5] = 1
    var_b4[edi_1] = 1
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    
    if (temp0_1 u> 0)
        int32_t* var_1c_1 = nullptr
        bool cond:3_1
        
        do
            void* edi_3 = *(arg1[5] + (*(eax_7 + arg2[2]) << 2))
            void* eax_10 = *(arg1[4] + (*(edi_3 + 4) << 2))
            int32_t eax_11 = *(eax_10 + 4)
            int32_t ecx_10 = eax_11 & 0x200
            int32_t eax_12
            
            if (ecx_10 == 0)
                if (eax_11.b s>= 0)
                    int32_t eax_14
                    
                    if ((eax_11.b & 0x10) != 0 && ecx_10 == 0)
                        eax_14 = (*(*arg1 + 0x54))(*(edi_3 + 0x6c))
                    
                    if ((eax_11.b & 0x10) == 0 || ecx_10 != 0 || eax_14 == 0xffff)
                        eax_12 = arg1[0x22]
                    else
                        eax_12 = arg1[0x20]
                else
                    eax_12 = arg1[0x25]
            else if (eax_11.b s< 0)
                eax_12 = arg1[0x25]
            else
                eax_12 = arg1[0x1f]
            
            int32_t var_8_2 = 0
            
            if (var_10_1 u> 0)
                int32_t* ecx_12 = arg2[2]
                
                do
                    void* eax_17 = *(arg1[5] + (*ecx_12 << 2))
                    
                    if (*(edi_3 + 4) == *(eax_17 + 4) && *(edi_3 + 8) == *(eax_17 + 8)
                            && *(edi_3 + 0xc) == *(eax_17 + 0xc))
                        break
                    
                    var_8_2 += 1
                    ecx_12 = &ecx_12[eax_2]
                while (var_8_2 u< var_10_1)
            
            if (var_8_2 == var_10_1 && eax_12 u< 0x12)
                int32_t __saved_ebp
                (&__saved_ebp)[eax_12 - 0x1a] += 1
                
                if ((&__saved_ebp)[eax_12 - 0x1a] u<= var_b4[eax_12])
                    goto label_4c33bb
                
            label_4c33ea:
                
                if (arg3 != 0)
                    *arg3 = var_10_1
                
                return 1
            
        label_4c33bb:
            
            if ((*(eax_10 + 5) & 2) != 0)
                var_14_1 += 1
            
            if ((*(eax_10 + 5) & 2) != 0 && var_14_1 u> 2)
                goto label_4c33ea
            
            eax_7 = &var_1c_1[eax_2]
            cond:3_1 = var_10_1 + 1 u< temp0_1
            var_10_1 += 1
            var_1c_1 = eax_7
        while (cond:3_1)

return 0
