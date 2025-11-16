// 函数: sub_449a5c
// 地址: 0x449a5c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0)
    int32_t var_c_1 = 0xa
    void* eax_1 = sub_4439e9(arg1, arg2)
    void* eax_2
    int32_t ecx_2
    
    if (eax_1 == 0)
        int32_t var_c_2 = 0xa
        void* eax_3 = sub_4441fb(arg1, arg2)
        
        if (eax_3 != 0)
        label_449a9b:
            ecx_2 = *(eax_3 + 0x2c)
            eax_2 = *(eax_3 + 0x30)
            goto label_449aa1
        
        int32_t var_c_3 = 0xa
        eax_3 = sub_4441ba(arg1, arg2)
        
        if (eax_3 != 0)
            goto label_449a9b
    else
        ecx_2 = *(eax_1 + 0x38)
        eax_2 = *(eax_1 + 0x3c)
    label_449aa1:
        
        if (arg3 u< ecx_2)
            if (arg3 != 0)
                int32_t i_1 = arg3
                int32_t i
                
                do
                    i = i_1
                    i_1 -= 1
                    eax_2 = *(eax_2 + 0x3c)
                while (i != 1)
            
            return not.d(eax_2)

return 0
