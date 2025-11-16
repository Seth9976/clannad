// 函数: sub_4c52bd
// 地址: 0x4c52bd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t edi
int32_t var_18 = edi
int32_t edi_1 = 0
int32_t result

if (arg1[0x17] != 0)
    bool cond:1_1 = arg1[3] u<= 0
    arg1[0x3f] = 0
    
    if (not(cond:1_1))
        do
            int32_t* eax_2 = *(arg1[6] + (arg1[0x3f] << 2))
            arg1[0x40] = eax_2
            
            if ((*eax_2 & 0xfff00000) == 0x20800000)
                result = sub_4c8729(arg1)
                
                if (result s< 0)
                    return result
                
                int32_t ecx_2
                ecx_2.b = result == 0
                edi_1 |= ecx_2
            
            arg1[0x3f] += 1
        while (arg1[0x3f] u< arg1[3])
        
        if (edi_1 != 0)
            sub_4c8264(arg1)

if ((arg1[0x33].b & 4) == 0)
    int32_t i = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_6 = arg1[6]
            arg1[0x3f] = i
            arg1[0x40] = *(eax_6 + (i << 2))
            
            if (sub_4c4c3b(arg1) == 0)
                sub_4c8264(arg1)
            
            i += 1
        while (i u< arg1[3])
    
    int32_t i_1 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_9 = arg1[6]
            arg1[0x3f] = i_1
            int32_t* eax_10 = *(eax_9 + (i_1 << 2))
            arg1[0x40] = eax_10
            
            if ((*eax_10 & 0xfff00000) == 0x50000000)
                result = sub_4c3d66(arg1)
                
                if (result s< 0)
                    return result
            
            i_1 += 1
        while (i_1 u< arg1[3])
    
    sub_4c8264(arg1)
    int32_t i_2 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_13 = arg1[6]
            arg1[0x3f] = i_2
            int32_t* eax_14 = *(eax_13 + (i_2 << 2))
            arg1[0x40] = eax_14
            int32_t eax_16 = *eax_14 & 0xfff00000
            
            if (eax_16 == 0x10300000 || eax_16 == 0x10500000 || eax_16 == 0x10600000
                    || eax_16 == 0x10700000 || eax_16 == 0x50000000)
                result = sub_4cbb85(arg1)
                
                if (result s< 0)
                    return result
            
            i_2 += 1
        while (i_2 u< arg1[3])

if (arg1[0xc] != 0)
    int32_t var_c_1 = 0
    
    while (true)
        if (var_c_1 u< 0x10)
            int32_t ebx_1 = arg1[3]
            int32_t edi_2 = 0
            int32_t var_8_1 = 1
            
            if (ebx_1 u> 0)
                do
                    arg1[0x40] = *(arg1[6] + (edi_2 << 2))
                    result = sub_4c8bdf(arg1)
                    
                    if (result s< 0)
                        return result
                    
                    if (result == 0)
                        var_8_1 = 0
                    
                    result = sub_49f69d(arg1, arg1[0x40])
                    
                    if (result s< 0)
                        return result
                    
                    *arg1[0x40] = 0
                    edi_2 += 1
                while (edi_2 u< ebx_1)
            
            result = sub_49ff18(arg1)
            
            if (result s< 0)
                return result
            
            var_c_1 += 1
            
            if (var_8_1 == 0)
                continue
            else if (var_c_1 u< 0x10)
                break
        
        int32_t ebx_2 = arg1[3]
        int32_t edi_3 = 0
        int32_t var_8_2 = 1
        
        if (ebx_2 u> 0)
            do
                arg1[0x40] = *(arg1[6] + (edi_3 << 2))
                result = sub_4c8bdf(arg1)
                
                if (result s< 0)
                    return result
                
                if (result == 0)
                    sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11c9, 
                        "relative address refrences too deep")
                    var_8_2 = 0
                
                result = sub_49f69d(arg1, arg1[0x40])
                
                if (result s< 0)
                    return result
                
                *arg1[0x40] = 0
                edi_3 += 1
            while (edi_3 u< ebx_2)
        
        result = sub_49ff18(arg1)
        
        if (result s< 0)
            return result
        
        if (var_8_2 == 0)
            return 0x80004005
        
        break

if (arg1[0x18] == 0)
    return 0

result = sub_4d514b(arg1)

if (result s>= 0)
    sub_4c8264(arg1)
    result = sub_4a6590(arg1)
    
    if (result s>= 0)
        return 0

return result
