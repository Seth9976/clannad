// 函数: __ungetc_nolock
// 地址: 0x766db3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((arg2[3].b & 0x40) != 0)
label_766e37:
    
    if (arg1 != 0xffffffff)
        if ((arg2[3].b & 1) != 0)
        label_766e51:
            
            if (arg2[2] == 0)
                __getbuf(arg2)
            
            int32_t eax_7 = *arg2
            
            if (eax_7 != arg2[2])
                goto label_766e6a
            
            if (arg2[1] == 0)
                *arg2 = eax_7 + 1
            label_766e6a:
                *arg2 -= 1
                char* eax_9 = *arg2
                
                if ((arg2[3].b & 0x40) == 0)
                    *eax_9 = arg1.b
                label_766e7f:
                    int32_t eax_11 = arg2[3]
                    arg2[1] += 1
                    arg2[3] = (eax_11 & 0xffffffef) | 1
                    return zx.d(arg1.b)
                
                if (*eax_9 == arg1.b)
                    goto label_766e7f
                
                *arg2 = &eax_9[1]
        else if ((arg2[3].b & 0x80) != 0 && (arg2[3].b & 2) == 0)
            goto label_766e51
else
    int32_t eax_1 = __fileno(arg2)
    void* edx_4
    
    if (eax_1 == 0xffffffff || eax_1 == 0xfffffffe)
        edx_4 = &data_b4ce70
    else
        edx_4 = ((eax_1 & 0x1f) << 6) + (&data_b95720)[eax_1 s>> 5]
    
    void* ecx_4
    
    if ((*(edx_4 + 0x24) & 0x7f) == 0)
        if (eax_1 == 0xffffffff || eax_1 == 0xfffffffe)
            ecx_4 = &data_b4ce70
        else
            ecx_4 = ((eax_1 & 0x1f) << 6) + (&data_b95720)[eax_1 s>> 5]
    
    if ((*(edx_4 + 0x24) & 0x7f) == 0 && (*(ecx_4 + 0x24) & 0x80) == 0)
        goto label_766e37
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()

return 0xffffffff
