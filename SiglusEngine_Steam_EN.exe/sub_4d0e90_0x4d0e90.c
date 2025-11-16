// 函数: sub_4d0e90
// 地址: 0x4d0e90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
void* eax = &data_7027c0

if (arg2 == 0)
    return 0

arg1.b = *arg2

if (arg1.b != 0)
    int32_t ebx
    int32_t var_c_1 = ebx
    
    do
        if (arg1.b u< 0x80)
        label_4d0ec8:
            
            if (arg1.b != 0x5c)
            label_4d0eef:
                *eax = arg1.b
                eax += 1
                arg2 = &arg2[1]
            else
                ebx.b = arg2[1]
                
                if (ebx.b == 0x6e || ebx.b == 0x4e)
                    *eax = 0xa
                    eax += 1
                    arg2 = &arg2[2]
                else
                    if (ebx.b != arg1.b)
                        goto label_4d0eef
                    
                    *eax = arg1.b
                    eax += 1
                    arg2 = &arg2[2]
        else
            if (arg1.b u< 0xa0)
                if (arg1.b u>= 0xfe)
                    goto label_4d0ec8
                
                goto label_4d0eb8
            
            if (arg1.b u<= 0xdf || arg1.b u>= 0xfe)
                goto label_4d0ec8
            
        label_4d0eb8:
            *eax = arg1.b
            arg1.b = arg2[1]
            *(eax + 1) = arg1.b
            eax += 2
            arg2 = &arg2[2]
        
        arg1.b = *arg2
    while (arg1.b != 0)

*eax = 0
return eax - &data_7027bc:3
