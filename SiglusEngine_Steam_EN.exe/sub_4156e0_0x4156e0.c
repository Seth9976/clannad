// 函数: sub_4156e0
// 地址: 0x4156e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = data_131d2d0

if (result != 0xffffffff)
    int32_t edx_1 = data_131d2d8
    int32_t edi_1 = data_131d2d4
    int32_t var_c_1 = edx_1
    int32_t ecx_1
    
    if (edi_1 != 0xffffffff || edx_1 != 0xffffffff)
        ecx_1 = 1
    else
        ecx_1 = 0
    
    void* esi_2 = result * 0x10c + 0x1097fe4
    void* var_24_1 = esi_2
    
    if (ecx_1 == 0)
        if (*(esi_2 + 0x5c) == ecx_1)
            edi_1 = *(esi_2 + 0x4c)
        else
            edi_1 = 0
        
        if (*(esi_2 + 0x60) == 0)
            edx_1 = *(esi_2 + 0x50)
        else
            edx_1 = 0
        
        var_c_1 = edx_1
    
    int32_t var_14_1 = data_70300c - 1
    int32_t var_18_1 = data_7030dc - 1
    int32_t i_3 = 0x10
    int32_t var_10_1 = 0
    int32_t var_8_1 = 0
    result = &data_131d34c
    int32_t i_6 = 0x10
    int32_t i
    
    do
        bool cond:1_1 = result[-9] == 0
        result[-1] = edi_1
        *result = edx_1
        
        if (not(cond:1_1) && result[-7] != 0)
            int32_t ecx_11
            
            if (data_131d30c s<= 0)
                int32_t ecx_12 = result[1]
                int32_t ecx_13
                
                if (*(esi_2 + 0x7c) != 2)
                    ecx_13 = ecx_12 + *(esi_2 + 0x74)
                else
                    ecx_13 = ecx_12 - *(esi_2 + 0x74)
                
                result[3] = ecx_13 + edi_1
                int32_t esi_3 = result[2] + *(esi_2 + 0x78) + edx_1
                int32_t ecx_18 = result[3] + result[-4] - 1
                result[4] = esi_3
                edx_1 = var_c_1
                result[5] = ecx_18
                ecx_11 = result[-3] - 1 + esi_3
            else
                result[3] = edi_1
                result[4] = edx_1
                result[5] = data_131d30c - 1 + edi_1
                ecx_11 = data_131d310 - 1 + edx_1
            
            int32_t esi_4 = var_14_1
            bool cond:3_1 = esi_4 s> result[3]
            result[6] = ecx_11
            
            if (cond:3_1)
                esi_4 = result[3]
            
            var_14_1 = esi_4
            int32_t esi_5 = var_10_1
            
            if (esi_5 s< result[5])
                esi_5 = result[5]
            
            var_10_1 = esi_5
            int32_t esi_6 = var_18_1
            
            if (esi_6 s> result[4])
                esi_6 = result[4]
            
            var_18_1 = esi_6
            int32_t esi_7 = var_8_1
            
            if (esi_7 s< ecx_11)
                esi_7 = ecx_11
            
            int32_t var_8_2 = esi_7
            esi_2 = var_24_1
            var_8_1 = esi_7
            i_3 = i_6
        
        edx_1 += *(esi_2 + 0x58)
        result = &result[0xed]
        edi_1 += *(esi_2 + 0x54)
        i = i_3
        i_3 -= 1
        var_c_1 = edx_1
        i_6 = i_3
    while (i != 1)
    
    if (ecx_1 == 0)
        if (*(esi_2 + 0x5c) != 0)
            int32_t ecx_22 = data_70300c
            result = var_10_1 - var_14_1 + 1
            
            if (result s< ecx_22)
                void* ecx_24 = &data_131d358
                int32_t eax_3
                int32_t edx_4
                edx_4:eax_3 = sx.q(ecx_22 - result)
                int32_t i_4 = 0x10
                result = (eax_3 - edx_4) s>> 1
                int32_t i_1
                
                do
                    *(ecx_24 - 0x10) += result
                    ecx_24 += 0x3b4
                    *(ecx_24 - 0x3b4) += result
                    *(ecx_24 - 0x3ac) += result
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
        
        if (*(esi_2 + 0x60) != 0)
            int32_t ecx_25 = data_7030dc
            result = var_8_1 - var_18_1 + 1
            
            if (result s< ecx_25)
                void* ecx_27 = &data_131d35c
                int32_t eax_8
                int32_t edx_5
                edx_5:eax_8 = sx.q(ecx_25 - result)
                int32_t i_5 = 0x10
                result = (eax_8 - edx_5) s>> 1
                int32_t i_2
                
                do
                    *(ecx_27 - 0x10) += result
                    ecx_27 += 0x3b4
                    *(ecx_27 - 0x3b4) += result
                    *(ecx_27 - 0x3ac) += result
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)

return result
