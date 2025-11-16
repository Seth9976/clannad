// 函数: sub_46e35f
// 地址: 0x46e35f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ecx
int32_t __saved_ecx_3 = __saved_ecx

if (arg1 != 0)
    int32_t eax_1 = *(arg1 + 4)
    
    if (eax_1 == 6)
        return *(arg1 + 0x14) + 0x10
    
    if (eax_1 != 0xb)
        if (eax_1 == 0xc)
            void* result = sub_46e35f(*(arg1 + 0x14))
            
            if (result != 0)
                return result
            
            result = sub_46e35f(*(arg1 + 0x18))
            
            if (result != 0)
                return result
            
            result = sub_46e35f(*(arg1 + 0x1c))
            
            if (result != 0)
                return result
            
            result = sub_46e35f(*(arg1 + 0x20))
            
            if (result != 0)
                return result
        else if (eax_1 == 0xd)
            return arg1 + 0x30

return nullptr
