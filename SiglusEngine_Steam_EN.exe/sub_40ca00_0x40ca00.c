// 函数: sub_40ca00
// 地址: 0x40ca00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *arg2
int32_t i_3 = arg4
int32_t esi = *arg2[4]
int32_t edi = ecx[2]
int32_t temp0 = divs.dp.d(sx.q(ecx[1] - *ecx), edi)
int32_t var_10 = edi
int32_t eax_10
eax_10.b = ((i_3 << 2) + 3).b & 0xfc
__chkstk(eax_10)
int32_t __saved_edi
int32_t* var_24 = &__saved_edi

if (i_3 s> 0)
    int32_t* esi_2 = &__saved_edi
    int32_t i
    
    do
        *esi_2 = sub_4038a0(arg1, divs.dp.d(sx.q(temp0 + esi - 1), esi) << 2)
        esi_2 = &esi_2[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_1 = 0
int32_t i_2 = 0

if (arg2[2] s> 0)
    do
        int32_t eax_14 = 0
        int32_t var_14_1 = 0
        
        if (temp0 s> 0)
            int32_t* ebx = nullptr
            int32_t* var_1c_1 = nullptr
            
            do
                if (i_1 == 0)
                    int32_t esi_3 = 0
                    
                    if (arg4 s> 0)
                        int32_t* edi_1 = var_24
                        
                        do
                            int32_t eax_18 = sub_407fd0(arg2[4], arg1 + 4)
                            
                            if (eax_18 == 0xffffffff)
                                return 0
                            
                            *(ebx + *edi_1) = *(arg2[7] + (eax_18 << 2))
                            
                            if (*(ebx + *edi_1) == 0)
                                return 0
                            
                            esi_3 += 1
                            edi_1 = &edi_1[1]
                        while (esi_3 s< arg4)
                        
                        eax_14 = var_14_1
                        edi = var_10
                        i_1 = i_2
                
                int32_t var_30_3 = 0
                
                if (esi s> 0)
                    int32_t* var_8_1 = nullptr
                    int32_t var_18_1 = eax_14 * edi
                    
                    while (eax_14 s< temp0)
                        int32_t var_2c_1 = 0
                        
                        if (arg4 s> 0)
                            int32_t* esi_5 = var_24
                            void* eax_22 = arg3 - esi_5
                            bool cond:5_1
                            
                            do
                                void* ecx_7 = ebx + *esi_5
                                
                                if ((ecx[*(var_8_1 + *ecx_7) + 5] & 1 << i_1.b) != 0)
                                    int32_t ecx_11 =
                                        *(*(arg2[5] + (*(var_8_1 + *ecx_7) << 2)) + (i_2 << 2))
                                    
                                    if (ecx_11 != 0 && arg5(ecx_11, 
                                            *(eax_22 + esi_5) + ((*ecx + var_18_1) << 2), arg1 + 4, 
                                            var_10) == 0xffffffff)
                                        return 0
                                
                                ebx = var_1c_1
                                esi_5 = &esi_5[1]
                                cond:5_1 = var_2c_1 + 1 s< arg4
                                var_2c_1 += 1
                            while (cond:5_1)
                            eax_14 = var_14_1
                            edi = var_10
                            i_1 = i_2
                        
                        var_8_1 = &var_8_1[1]
                        eax_14 += 1
                        var_18_1 += edi
                        bool cond:4_1 = var_30_3 + 1 s< esi
                        var_30_3 += 1
                        var_14_1 = eax_14
                        
                        if (not(cond:4_1))
                            break
                
                ebx = &ebx[1]
                var_1c_1 = ebx
            while (eax_14 s< temp0)
        
        i_1 += 1
        i_2 = i_1
    while (i_1 s< arg2[2])

return 0
