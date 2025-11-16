// 函数: sub_4bf9ab
// 地址: 0x4bf9ab
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[0x8b]

if (ecx != 0)
    int32_t eax_1 = arg1[0x88]
    
    if (eax_1 != 0)
        if (zx.d((arg1[0x32]).w) != 0x104)
            return 0x80004005
        
        sub_4bf648(arg1, ecx, eax_1)
        int32_t result = sub_4d7429(arg1, 0xfffd)
        
        if (result s< 0)
            return result
        
        result = sub_4d25aa(arg1)
        
        if (result s< 0)
            return result

return sub_4bf648(arg1, arg1[0x8c], arg1[0x89])
