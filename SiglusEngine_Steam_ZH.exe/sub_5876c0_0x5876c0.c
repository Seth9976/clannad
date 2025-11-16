// 函数: sub_5876c0
// 地址: 0x5876c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
void* result = arg6

if (arg9 == 0)
    result -= 0x47e
    
    if (result u<= 0xe6)
        result = zx.d(*(result + &lookup_table_587984))
        
        switch (result)
            case nullptr
                if (arg3 == 1)
                    return sub_5862f0(result, arg4, arg2 - 1, arg5)
            case 1
                if (arg3 == 1)
                    return sub_587c00(result, arg4, arg2, arg5)
            case 2
                if (arg3 == 1)
                    return sub_586b80(result, arg4, arg2 - 1, arg5)
            case 3
                if (arg3 == 1)
                    return sub_586390(result, arg4, arg2 - 1, arg5)
            case 4
                if (arg3 == 1)
                    return sub_586970(result, arg4, arg2 - 1, arg5)
else if (result s> 0x4b1)
    if (result == 0x50b)
        if (arg5 == 0)
            int32_t var_14_12 = 0
            return sub_587f60(0, arg2, ecx, arg3, arg4)
        
        void* var_14_11 = arg5 - 4
        return sub_587f60(arg5 - 4, arg2, ecx, arg3, arg4)
    
    void* eax_15 = result - 0x51f
    
    if (result == 0x51f)
        if (arg5 == 0)
            int32_t var_14_10 = 0
            return sub_587df0(0, arg2, ecx, arg3, arg4)
        
        void* var_14_9 = arg5 - 4
        return sub_587df0(arg5 - 4, arg2, ecx, arg3, arg4)
    
    result = eax_15 - 0x46
    
    if (eax_15 == 0x46)
        if (arg5 == 0)
            int32_t var_14_8 = 0
            return sub_587ec0(0, arg2, ecx, arg3, arg4)
        
        void* var_14_7 = arg5 - 4
        return sub_587ec0(arg5 - 4, arg2, ecx, arg3, arg4)
else
    if (result == 0x4b1)
        if (arg5 == 0)
            int32_t var_14_6 = 0
            return sub_587c60(0, arg2, ecx, arg3, arg4)
        
        void* var_14_5 = arg5 - 4
        return sub_587c60(arg5 - 4, arg2, ecx, arg3, arg4)
    
    if (result s> 0x15)
        if (result == 0x47f)
            if (arg5 == 0)
                int32_t var_14_4 = 0
                return sub_587d50(0, arg2, ecx, arg3, arg4)
            
            void* var_14_3 = arg5 - 4
            return sub_587d50(arg5 - 4, arg2, ecx, arg3, arg4)
    else if (result == 0x15)
        result = arg5
        void* ecx_2
        
        if (result == 0)
            ecx_2 = nullptr
        else
            ecx_2 = result - 4
        
        if (arg3 == 1)
            result = sub_55b400(ecx_2 + 4, arg2, 1)
            
            if (result != 0 && result != arg4)
                return sub_52e3c0(result, arg4, 0, 0xffffffff)
    else
        if (result == 0xb)
            uint32_t eax_3
            
            if (arg5 == 0)
                eax_3 = 0
            else
                eax_3 = arg5 - 4
            
            int32_t var_14_2 = arg8
            return sub_587a70(eax_3, arg2, ecx, arg3, arg4, eax_3, arg7)
        
        if (result == 0x10)
            if (arg5 == 0)
                result = nullptr
            else
                result = arg5 - 4
            
            if (arg3 == 1)
                return sub_587ba0(result, arg4, arg2, result)

return result
