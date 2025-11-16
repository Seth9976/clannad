// 函数: sub_4b2a60
// 地址: 0x4b2a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t edi
int32_t var_18 = edi
int32_t result

if (arg1[0x17] != 0)
    int32_t edi_1 = 0
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

if ((arg1[0x1c].b & 0x40) == 0)
    result = (*(*arg1 + 0x98))()

if ((arg1[0x1c].b & 0x40) != 0 || result s>= 0)
    if (arg1[0x18] == 0)
        return 0
    
    result = sub_4d514b(arg1)
    
    if (result s>= 0)
        sub_4c8264(arg1)
        result = sub_4a6590(arg1)
        
        if (result s>= 0)
            sub_4d0739(arg1)
            return 0

return result
