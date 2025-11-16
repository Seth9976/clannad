// 函数: sub_5ccc30
// 地址: 0x5ccc30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg4 != 0)
    *arg4 = 0

int32_t* edi = arg3

if (edi == 0 || (arg2 u> 1 && arg4 == 0))
    return 0x80004003

if (*(arg1 + 8) != 0)
    int32_t esi_1 = *(arg1 + 0xc)
    
    if (esi_1 != 0)
        int32_t edx_1 = *(arg1 + 0x10)
        
        if (edx_1 != 0)
            int32_t i = (esi_1 - edx_1) s>> 2
            int32_t* result = nullptr
            
            if (i u< arg2)
                result = 1
            
            if (arg2 u< i)
                i = arg2
            
            if (arg4 != 0)
                *arg4 = i
            
            if (i == 0)
                return result
            
            do
                int32_t* eax_1 = *(arg1 + 0x10)
                i -= 1
                
                if (edi == 0 || eax_1 == 0)
                    sub_5c4990(0x80004005)
                    noreturn
                
                int32_t* eax_2 = *eax_1
                *edi = eax_2
                
                if (eax_2 != 0)
                    (*(*eax_2 + 4))(eax_2)
                
                *(arg1 + 0x10) += 4
                edi = &edi[1]
            while (i != 0)
            
            return result

return 0x80004005
