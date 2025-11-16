// 函数: sub_4d1140
// 地址: 0x4d1140
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
char* esi = arg3

if (esi == 0)
    return &arg3[1]

char* edx = arg4
int32_t edi = 0

while (true)
    arg3.b = *esi
    
    if (arg3.b u< 0x80)
    label_4d1190:
        
        if (arg3.b == 0x22)
            break
        
        if (arg3.b != 0 && edi s< arg5 - 1)
            *edx = arg3.b
            esi = &esi[1]
            edx = &edx[1]
            edi += 1
            continue
    else
        if (arg3.b u< 0xa0)
            if (arg3.b u>= 0xfe)
                goto label_4d1190
            
            goto label_4d117b
        
        if (arg3.b u<= 0xdf || arg3.b u>= 0xfe)
            goto label_4d1190
        
    label_4d117b:
        
        if (edi s< arg5 - 2)
            *edx = arg3.b
            int32_t eax_1
            eax_1.b = esi[1]
            esi = &esi[2]
            edx[1] = eax_1.b
            edx = &edx[2]
            edi += 2
            continue
    
    return 1

*edx = 0

if (arg2 != 0)
    *arg2 = &esi[1]

return 0
